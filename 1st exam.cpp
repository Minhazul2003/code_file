#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
private:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;

public :
    void input()
    {
        int n;
        cin>> n;
        for(int i=0;i<n;i++){
            cin>> food_item_codes[i];
            cin.ignore();
            getline(cin, food_item_names[i]);
            cin>> food_item_prices[i];
        }
    }

    void print(){

        cout<<endl<<endl<<"                               "<<"MAKE BILL";
        cout<<"\n                 ------------------------------------\n";
        cout<<"\nItem Code"<<"                   "<<"Item Name"<<"                   "<<"Item Price";
        cout<<"\n----------              -----------------            ----------------\n";

        cout<<food_item_codes[0]<<"                   "<<food_item_names[0]<<"                      "<<food_item_prices[0];
        cout<<endl<<food_item_codes[1]<<"                   "<<food_item_names[1]<<"                 "<<food_item_prices[1];
        cout<<endl<<food_item_codes[2]<<"                   "<<food_item_names[2]<<"                 "<<food_item_prices[2];
        cout<<endl<<food_item_codes[3]<<"                   "<<food_item_names[3]<<"                "<<food_item_prices[3];
        cout<<endl<<food_item_codes[4]<<"                   "<<food_item_names[4]<<"                    "<<food_item_prices[4];
        cout<<endl<<food_item_codes[5]<<"                   "<<food_item_names[5]<<"                  "<<food_item_prices[5];
        cout<<endl<<food_item_codes[6]<<"                   "<<food_item_names[6]<<"                 "<<food_item_prices[6];
        cout<<endl<<food_item_codes[7]<<"                   "<<food_item_names[7]<<"                     "<<food_item_prices[7];
        cout<<endl<<food_item_codes[8]<<"                   "<<food_item_names[8]<<"                     "<<food_item_prices[8];
        cout<<endl<<food_item_codes[9]<<"                   "<<food_item_names[9]<<"                "<<food_item_prices[9];
        cout<<endl<<food_item_codes[10]<<"                   "<<food_item_names[10]<<"                  "<<food_item_prices[10];
        cout<<endl<<food_item_codes[11]<<"                   "<<food_item_names[11]<<"                     "<<food_item_prices[11];



        cout<<"\n---------------------------------------------------------------------------------\n";

    }


    int find(int n){
        int found=0;
        for(int i=0;i<=11;i++)
        {
            if( food_item_codes[i]==n){
                found=1;
                return 1;
            }
        }
        if (found==0)
            cout<<"code is not valid";
            return 0;
    }

    void Bill_Summary(int code[],int Quantity[],int n,int table_no)
    {
       int mot=0;
       int abc;
       cout<<endl<<"\n\n\n"<<"                                "<<"Bill Summary ";
       cout<<"\n                     ---------------------------------------------------\n";
       cout<<"\nTable No."<<table_no;
        cout<<"\nItem Code"<<"           "<<"Item Name"<<"          "<<"Item Price"<<"            "<<"Item Quantity"<<"             "<<"Total Price";
        for(int j=0;j<n;j++){
            for(int i=0;i<=11;i++)
            {
            if(food_item_codes[i]==code[j])
            {
                abc=food_item_prices[i]*Quantity[j];
                cout<<endl<<food_item_codes[i]<<"          "<<food_item_names[i]<<"              "<<food_item_prices[i]<<"                      "<<Quantity[j]<<"                "<<abc;
                mot=mot+abc;
            }
        }
        }
        float total_tax=0.05*mot;
        float net_amount=mot+total_tax;
        cout<<"\nTax"<<"                                                                                      "<<fixed<<setprecision(2)<<total_tax;
        cout<<"\n--------------------------------------------------------------------------------------------------------\n";
        cout<<"Net Total"<<"                                                                                "<<setprecision(2)<<net_amount;
    }


};
int main(){
    Restaurant r;
    r.input();
    r.print();

    int table_no;
    int n;
    cout<<"\n\nEnter Table No:";
    cin>>table_no;
    cout<<"Enter Number of Items:";
    cin>>n;
    int code[n];
    int Quantity[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Item "<<(i+1)<<" Code:";
        cin>>code[i];
        int f=r.find(code[i]);
        while(f!=1)
        {
        cout<<"Enter Item "<<(i+1)<<" Code:";
        cin>>code[i];
         f=r.find(code[i]);
        }
        cout<<"Enter Item "<<(i+1)<<" Quantity:";
        cin>>Quantity[i];
    }

    r.Bill_Summary(code,Quantity,n,table_no);


return 0;

}
/*
12
170
Chicken Soup 1:2
260
171
Chicken Corn Soup 1:2
200
172
Thai Special Soup 1:2
300
260
Chicken Fried Rice 1:2
250
261
Egg Fried Rice 1:2
230
262
Prawn Fried Rice 1:2
300
310
Beef Mutton Kabab 1:1
150
311
Chicken Grill 1:4
340
450
Chicken Curry 1:3
550
451
Beef Special Curry 1:3
760
452
Chicken Sizzling 1:3
710
453
Beef Sizzling 1:3
970
 for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Item "<<(i+1)<<" Code\t:\t";
        cin>>cd[i];
        int f=r.search(cd[i]);
        while(f!=1)
        {
        cout<<"\nEnter Item "<<(i+1)<<" Code\t:\t";
        cin>>cd[i];
         f=r.search(cd[i]);//calling search function
        }
        cout<<"\nEnter Item "<<(i+1)<<" Quantity\t:\t";
        cin>>qty[i];
    }
    r.Display_bill(cd,qty,n,tab_no);

*/
