#include<stdio.h>
int main()
{
    int arr[5];
    int i, count=0, sum=0;
    float avg;
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>100){
            sum=sum+arr[i];
        }

    }
    printf("%d\n", sum);
    avg= sum/5;
    printf("%d", avg);
}
