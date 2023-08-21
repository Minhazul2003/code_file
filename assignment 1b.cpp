#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int b=0;
    cin>>a;
    while(a--){
        cout<<"Case "<<b+1<<":"<<endl;
        b++;
        int c, d;
        cin>>c>>d;
        int ar[c];
// array
        for(int i=0; i<c; i++){
            cin>>ar[i];
        }
        for(int i=0; i<d; i++){
            int e, f;
            cin>>e>>f;
            int minimum = ar[e-1];
            for(int j=e; j<=f; j++){
                if(ar[j-1]<minimum){
                    minimum = ar[j-1];
                }

            }
            cout<<minimum<<endl;
        }
    }


    return 0;
}
