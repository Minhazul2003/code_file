#include<stdio.h>
#include<string.h>
int main() {
    char ar[100];
    scanf("%s", ar);
    int a = 0;
    int b = 0;
    for(int i=0; ar[i]!='\0'; i++){
        if(ar[i]=='1'){
           b++;
           a=0;
        }
        else if(ar[i]=='0'){
           a++;
           b=0;
        }
        if(a==7 || b==7){
            printf("YES");
            return 0;
        }

    }

    printf("NO");


    return 0;

}
//a[0] = toupper(a[0]);

