#include<bits/stdc++.h>
 using namespace std;
int main() {
    int a;
    cin>>a;
    int ar[a][a];
    int sum = 0;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cin>>ar[i][j];
            if (ar[i][j]>c){
                c=ar[i][j];
            }
        }
    }
    int freq[c+1]={0};

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
                if(freq[ar[i][j]]==0){
                    cout<<ar[i][j]<<" ";
                }
                else{
                    cout<<d<<" ";
                }
                freq[ar[i][j]]++;
            }
            cout<<endl;
        }
    return 0;
}


//    for(int i=0; i<a; i++){
//        for(int j=0; j<b; j++){
//            int d=ar[i][j];
//            int e=-1;
//            ar[i][j]=e;
//            cout<<ar[i][j];
//            cout<<endl;
//            for(int k=i; k<a; k++){
//                for(int l=j; l<b; l++){
//                  if(ar[k][l]==d){
//                    ar[k][l]=e;
//                    cout<<ar[k][l];
//                    cout<<endl;
//                  }
//                }
//            }
//        }
//    }
//
//    for(int i=0; i<a; i++){
//        for(int j=0; j<b; j++){
//            cout<<ar[i][j]<<" ";
//        }
//        cout<<endl;
//    }

/*
3 3
1 7 3
7 4 5
3 5 6

*/



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int a, b;
//    cin >> a;
//    int arr[a];
//    for(int i=0; i<a; i++){
//        cin >> arr[i];
//    }
//    cin >> b;
//    int brr[b];
//    for(int i=0; i<b; i++){
//        cin >> brr[i];
//    }
//    for(int i=0; i<a; i++){
//        int c = 0;
//        for(int j=0; j<b; j++){
//            if(arr[i]==brr[j]){
//                c++;
//            }
//        }
//        if(c==0){
//            cout<<arr[i]<<" ";
//        }
//
//    }
//






//    int b=0;
//     for(int i=0; i<a; i++){
//        cin >> arr[i];
//        if(arr[i]>b){
//            b=arr[i];
//
//        }
//     }
//
//    int frr[b+1]={0};
//
//    for(int i=0; i<a; i++)
//    {
//        frr[arr[i]]++;
//    }
//
//    for(int i=1; i<=b; i++){
//        if(frr[i]>0){
//            cout<<i<<" => "<<frr[i]<<endl;
//        }
//
//    }


//    return 0;
//}
/*
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2

*/

