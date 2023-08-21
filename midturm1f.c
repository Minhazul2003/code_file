#include<stdio.h>
int main() {
    long long a;
    scanf("%lld", &a);
    int ar[1000];
    int f = 0;
    int i = 0;
    while(a!=0){
        ar[i] = a%10;
        if(ar[i] == 4 || ar[i] == 7){
                f++;
        }
        i++;
        a = a/10;

    }
    printf("%d", f);
    if(f == 4 || f == 7 || f == 47 || f == 74){
        printf("YES");
    }
    else{
    printf("NO");

    }

    return 0;
}



