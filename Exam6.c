#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[1001];
    int br[1001] = {0};
    int c = 0;
    for(int i=0; i<a; i++){
        scanf("%d", &ar[i]);
        if(ar[i] < 0){
            br[c]=ar[i]*-1;
            c++;
        }
    }

    int d = 0;

    for(int steps=0; steps<c; steps++) {
        int minimum = br[steps], pos = steps;
        for(int i=steps; i<c; i++) {
           if (br[i] > minimum){
              minimum = br[i];
              pos = i;
           }

       }
        int temp = br[steps];
        br[steps] = br[pos];
        br[pos] = temp;

   }


    for(int i=0; i<b; i++){
        d = d + br[i];

    }
    printf("%d ", d);
    return 0;
}
