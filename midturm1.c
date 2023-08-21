#include<stdio.h>
#include<string.h>
int main() {
    char ar[100];
    scanf("%s", &ar);
    int count[26] = {0};
    for(int i=0; ar[i]!='\0'; i++){
        count[ar[i]-'a']++;
    }
    int d = 0;
    for(int i=0; i<26; i++){
        if(count[i] > 0){
            d++;
        }
    }

    int g = d%2;
    if (g == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }


    return 0;
}
