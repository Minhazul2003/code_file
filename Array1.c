#include<stdio.h>
int main() {
    long long a;
    scanf("%lld",&a);
    long long b = 2;
    int c = 0;

    while(b<=a){
        b = b * 2;
        c++;
    }
    printf("%d",c);
    return 0;
}

