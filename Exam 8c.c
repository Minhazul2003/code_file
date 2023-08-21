#include<stdio.h>
#include<string.h>

int count_zero(char a[]){
    int b = 0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i] == '0'){
            b++;
        }
    }
    return b;
}
int main() {
    int d;
    scanf("%d", &d);
    char b[d];
    scanf("%s", b);
    printf("%d", count_zero(b));
    return 0;
}

