#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[4];
    int b = 0;
    for(int i=0; i<4; i++){
        cin>>ar[i];
        if(ar[i]>=10){
            b++;
        }
    }
    cout<< b;
    return 0;
}
