#include<stdio.h>
#include<string.h>
int main() {
    int a;
    scanf("%d", &a);
    char ar[50];
    scanf("%s", &ar);
    int b = 0;
    for(int i=0; ar[i]!='\0'; i++){
        if(ar[i]==ar[i-1]){
            b++;
        }
    }

        printf("%d", b);



    return 0;
}

