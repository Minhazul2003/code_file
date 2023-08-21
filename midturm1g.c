#include<stdio.h>
#include<string.h>
int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        char ar[100];
        scanf("%s", &ar);
        printf("%c", ar[0]);
        for(int i=1; i<strlen(ar)-1; i+=2){

            if(ar[i]==ar[i+1])

                printf("%c", ar[i]);
        }

        printf("%c\n", ar[strlen(ar)-1]);

    }


    return 0;
}
