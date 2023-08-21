#include<stdio.h>
#include<string.h>

float make_average(int a, float b){
    float sum = a + b;

    return sum;
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%.2f", make_sum(&a, &b));

}
