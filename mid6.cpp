#include<bits/stdc++.h>
 using namespace std;
int main() {
    int a, b;
    cin>>a;

    for(int i=0; i<a; i++){
        cin>>b;
        int earn[b];
        int expence[b];
        for(int j=0; j<b; j++){
            cin>>earn[j];
        }
        for(int k=0; k<b; k++){
            cin>>expence[k];
        }
        int c;
        cin>>c;
        int d;
        int earn_sum=0;
        int expence_sum=0;
        int sub=0;
        for(int i=0; i<c; i++){
            cin>>d;
            for(int j=0; j<=d; j++){

                earn_sum = earn_sum + earn[j];
                expence_sum = expence_sum + expence[j];

            }
            sub= earn_sum - expence_sum;
            if(sub<0){
                cout<<0<<" ";
            }
            else{
               cout<<1<<" ";
            }

        }
    }

    return 0;
}
/*
2
5
10 5 2 3 1
8 15 1 2 10
3
0
1
3
3
7 10 1
3 2 7
1
2


*/
