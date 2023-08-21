#include <stdio.h>
int main(){

int a, n, sum=0, b, c=0;
printf("Enter the number:");

scanf("%d", &n);
for (a=10; a<=n; a++) {
    for (b=2; b<=a/2; b++){

        if (a%b == 0) {
            c=1;

        }
    }
        if (c==0){
            sum = sum+a;
        }

    }

    printf("The sum is : %d", sum);
    return 0;
}
