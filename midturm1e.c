#include<stdio.h>
#include<string.h>
int main() {
    int a;
    scanf("%d", &a);
    char ar[100];
    scanf("%s", &ar);
    strlwr (ar);
    int count[26] = {0};
    for(int i=0; ar[i]!='\0'; i++){
//        printf("%c", ar[i]);
        count[ar[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(count[i] == 0){

            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}

