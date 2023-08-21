#include<stdio.h>
#include <string.h>
int main(){
    char ar[100001];
    scanf("%s", ar);
    char br[100001];

    for(int i=0; i<strlen(ar); i++){
        br[i] = ar[i];
    }

    for(int steps=0; steps<strlen(ar); steps++) {
        int minimum = ar[steps], pos = steps;
        for(int i=steps; i<strlen(ar); i++) {
           if (ar[i] < minimum){
              minimum = ar[i];
              pos = i;
           }
           i++;
       }
        int temp = ar[steps];
        ar[steps] = ar[pos];
        ar[pos] = temp;
        steps++;

   }

    printf("%s", ar);
 return 0;

}

/*

char ar[51];
    scanf("%s", ar);
    int a = 0;
    int x = 0;
    for(int i=0; i<strlen(ar); i++){
        if(ar[i] == 'a'){
            a++;
        }
        else{
            x++;
        }
    }
    if(a>x){
        printf("%d", strlen(ar));
    }
    else{
        int g = (a-1)+a;
        printf("%d", g);
    }
*/
