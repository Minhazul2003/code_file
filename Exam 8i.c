#include<stdio.h>
#include<string.h>

int check_palindrome(char *pal){
    int j = strlen(pal);
    int a = j-1;
    int count = 0;
    for(int i=0; i<a; i++){
        if(pal[a] != pal[i]){
            pal[a] = pal[i];
            count++;
        }
        a--;
    }
    return count;
}

int main(){
    char ar[100];
    scanf("%s", ar);
    int j = strlen(ar);
    printf("%d\n", j);
    int c = check_palindrome(ar);
    printf("%s\n", ar);
    printf("%d\n", c);

    return 0;
}
