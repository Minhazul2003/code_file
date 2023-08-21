#include<bits/stdc++.h>
 using namespace std;
int main() {
    int a;
    cin>>a;
    int ar[a][a];
    int b=a/2;
    int sum = 0;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cin>>ar[i][j];
            if (i==0 && j<b){
                sum = sum+ar[i][j];
            }
            else if (i==b || j==b){
                sum = sum+ar[i][j];
            }
            else if (i==a-1 && j>b){
                sum = sum+ar[i][j];
            }
            else if (i<b && j==a-1){
                sum = sum+ar[i][j];
            }
            else if (i>b && j==0){
                sum = sum+ar[i][j];
            }

        }
    }

    cout<<sum;
    return 0;
}

