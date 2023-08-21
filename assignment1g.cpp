#include<stdio.h>
//using namespace std;

int main(){
    int a;
    scanf("%d", &a);
    for(int m=1; m<=a; m++){
        printf("Case %d:\n", m);
        int b, c;
        scanf("%d %d", &b, &c);
        int ar[b];
        for(int j=0; j<b; j++){
            scanf("%d", &ar[j]);
        }
        for(int i=0; i<c; i++){
            int d;
            scanf("%d", &d);
            if(d==1){
                int e;
                scanf("%d", &e);
                printf("%d\n", ar[e]);
                ar[e]=0;
            }
            else if(d==2){
                int f, g;
                scanf("%d %d", &f, &g);
                ar[f]=ar[f]+g;
            }
            else if(d==3){
                int h, n;
                scanf("%d %d", &h, &n);
                int x=0;
                for(int j=h; j<=n; j++){
                    x=x+ar[j];
                }
                printf("%d\n", x);
            }

        }

    }
    return 0;
}
