#include<stdio.h>
int main(){
    int a;
    scanf("%d ", &a);
    int b;
    for(int i=0; i<a; i++){
        scanf("%d ", &b);

        int ar[b];
        for(int j=0; j<b; j++){
            scanf("%d", &ar[j]);
        }
        int br[b];
        int c = 0;
        for(int j=0; j<b; j++){
            br[j] = ar[c];
            c++;
            j++;
        }
        int d = b-1;
        for(int j=1; j<b; j++){
            br[j] = ar[d];
            d--;
            j++;
        }

        for(int j=0; j<b; j++){
          printf("%d ", br[j]);
        }
        printf("\n");

    }


 return 0;

}
/*
6
7
3 4 5 2 9 1 1
4
9 2 7 1
11
8 4 3 1 2 7 8 7 9 4 2
1
42
2
11 7
8
1 1 1 1 1 1 1 1


*/
