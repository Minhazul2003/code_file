#include<stdio.h>
#include<string.h>
int main() {
    int a;
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        int b;
        scanf("%d", &b);
        int m = 0;
        int fr[b+1];
        for(int k=0; k<b+1; k++){
            fr[k]=0;
        }

        int ar[b];
        for(int j=0; j<b; j++){
            scanf("%d", &ar[j]);
            fr[ar[j]]++;
        }


        for(int k=0; k<b+1; k++){
            if(fr[k]>=3){
                m=k;
            }

        }
        if(m>0){
            printf("%d\n", m);
        }
        else{
           printf("-1\n");
        }
    }


    return 0;
}

