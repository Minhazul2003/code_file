#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    long long ar[a];
    for(int i=0; i<a; i++){
        scanf("%lld", &ar[i]);
    }
    long long b = 0;
    for(int i=0; i<a; i++){
        if(ar[i] > b){
            b = ar[i];
        }
    }
    long long c = 0;
    long long d;
    for(int i=0; i<a; i++){
        d = b - ar[i];
        c = c + d;
    }
    printf("%lld", c);

    return 0;
}



