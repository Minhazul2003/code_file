#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        int b;
        cin>>b;
        int ar[b];
        for(int j=0; j<b; j++){
            cin>>ar[j];
        }

        sort(ar, ar+b);

        int e = ar[0];
        int f = 1;
        for(int j=1; j<b; j++){
            if(ar[j]==e){
                f++;
            }
        }
        cout<<b-f<<endl;
    }
    return 0;
}
/*
*/
