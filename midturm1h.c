#include<stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[100000];
    for(int i=0; i<a; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<a; i++){
        printf("%d ", ar[(i+b)%a]);
    }


    return 0;
}
/*5 2
1 2 3 4 5*/
