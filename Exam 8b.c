#include<stdio.h>
#include <string.h>
float make_average(int a[], int b){
    int sum = 0;
    for(int i=0; i<b; i++){
        sum = sum + a[i];
    }
    float d = (float)sum /b;
    return d;
}
int main() {
    int b;
    scanf("%d", &b);
    int a[b];
    for(int i=0; i<b; i++){
        scanf("%d", &a[i]);
    }
    printf("%f", make_average(a, b));
    return 0;
}


