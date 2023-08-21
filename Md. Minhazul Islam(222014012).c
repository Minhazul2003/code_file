#include<stdio.h>

void printmenu(){
    printf("                                    MAKE A RESTURENT BILL\n");
    printf("                            ------------------------------------\n\n");

    printf("Item Code                   Item Name                   Item Price\n");
    printf("----------              -----------------            ----------------\n");
    printf("170                        Chicken Soup                     260\n");
    printf("171                        Chicken Corn Soup                200\n");
    printf("172                        Thai Special Soup                300\n");
    printf("260                        Chicken Fried Rice               250\n");
    printf("261                        Egg Fried Rice                   230\n");
    printf("262                        Prawn Fried Rice                 300\n");
    printf("310                        Beef Mutton Kabab                150\n");
    printf("311                        Chicken Grill                    340\n");
    printf("450                        Chicken Curry                    280\n");
    printf("451                        Beef Special Curry               320\n");
    printf("452                        Chicken Sizzling                 180\n");
    printf("453                        Beef Sizzling                    240\n");
    printf("\n---------------------------------------------------------------------------------\n\n");

}

int find(int a){
    int found=0;
    if( a==170 || a==171 || a==172 || a== 260 ||  a==261 || a==262 || a==310 || a== 311 ||  a==450 || a==451 || a==452 || a== 453){
            found=1;
    }


    return found;
}

int Count_price(int n ,int code[n], int Quantity[n], int price[n]){
    int total_price=0;
    int j;
    for(j=0; j<n; j++){
            if( code[j]==170){
                price[j]= Quantity[j]*260;
                total_price=total_price+price[j];
            }
            else if( code[j]==171){
                price[j]= Quantity[j]*200;
                total_price=total_price+price[j];
            }
            else if( code[j]==172){
                price[j]= Quantity[j]*300;
                total_price=total_price+price[j];
            }
            else if( code[j]==260){
                price[j]= Quantity[j]*250;
                total_price=total_price+price[j];
            }
            else if( code[j]==261){
                price[j]= Quantity[j]*230;
                total_price=total_price+price[j];
            }
            else if( code[j]==262){
                price[j]= Quantity[j]*300;
                total_price=total_price+price[j];
            }
            else if( code[j]==310){
                price[j]= Quantity[j]*150;
                total_price=total_price+price[j];
            }
            else if( code[j]==311){
                price[j]= Quantity[j]*340;
                total_price=total_price+price[j];
            }
            else if( code[j]==450){
                price[j]= Quantity[j]*280;
                total_price=total_price+price[j];
            }
            else if( code[j]==451){
                price[j]= Quantity[j]*320;
                total_price=total_price+price[j];
            }
            else if( code[j]==452){
                price[j]= Quantity[j]*180;
                total_price=total_price+price[j];
            }
            else if( code[j]==453){
                price[j]= Quantity[j]*240;
                total_price=total_price+price[j];
            }

    }
    return total_price;

}

void make_bill(int table_no, int n, int code[n], int Quantity[n], int price[n], int total_price){
    printf("\n\n");
    printf("                                       Bill Summary\n");
    printf("                            ------------------------------------\n");
    printf("                                       Table No : 0%d\n\n", table_no);
    printf("Item Code           Item Name             Item Price              Item Quantity              Total Price\n");
    int x;
    for(x=0; x<n; x++){

            if( code[x]==170){
                printf("  %d               Chicken Soup             260                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==171){
                printf("  %d               Chicken Corn Soup        200                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==172){
                printf("  %d               Thai Special Soup        300                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==260){
                printf("  %d               Chicken Fried Rice       250                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==261){
                printf("  %d               Egg Fried Rice           230                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==262){
                printf("  %d               Prawn Fried Rice         300                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==310){
                printf("  %d               Beef Mutton Kabab        150                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==311){
                printf("  %d               Chicken Grill            340                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==450){
                printf("  %d               Chicken Curry            280                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==451){
                printf("  %d               Beef Special Curry       320                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==452){
                printf("  %d               Chicken Sizzling         180                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==453){
                printf("  %d               Beef Sizzling            240                        %d                        %d", code[x], Quantity[x], price[x]);
            }
        printf("\n");

    }
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("  Total                                                                                          %d\n", total_price);
    float tax=(float)total_price*0.05;
    printf("  Vat(@5%)                                                                                       %.2f\n", tax);
    printf("---------------------------------------------------------------------------------------------------------\n");
    float net_total= (float)total_price + tax;
    printf("  Net Total(+Vat)                                                                                %.2f\n\n", net_total);


}



int main(){

    printmenu();

    int table_no;
    int n;
    printf("\n\nEnter Table No: ");
    scanf("%d", &table_no);
    printf("Enter Number of Items: ");
    scanf("%d", &n);
    int code[n];
    int Quantity[n];
    int i;

    for(i=0; i<n; i++){
        int b;
        printf("Enter Item %d Code:", i+1);
        scanf("%d", &code[i]);
        b = find(code[i]);
        if(b==0){
            while(b!=1){
                printf("Item Code is not Found. Please try again.\n");
                printf("Enter Item %d Code:", i+1);
                scanf("%d", &code[i]);
                b = find(code[i]);
            }
        }
        printf("Enter Item %d  Quantity:", i+1);
        scanf("%d", &Quantity[i]);

    }
    int price[n];
    int tprice = Count_price(n, code, Quantity, price);

    make_bill(table_no, n, code, Quantity, price, tprice);


    return 0;
}
