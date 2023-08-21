#include<stdio.h>
#include <string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int count_swaps(int n, int a[]){
    int d = 0;
    for (int steps=0; steps<n; steps++){
        int min = a[steps], pos = steps;
        for (int i=steps; i<n; i++){
            if (a[i] < min){
                min = a[i];
                pos = i;
                d++;
            }
        }
        swap(&a[steps], &a[pos]);
    }

    return d;
}
int main(){
    int a;
    scanf("%d", &a);

    int ar[a];
    for(int i=0; i<a; i++){
        scanf("%d", &ar[i]);
    }

    int d = count_swaps(a, ar);
    printf("%d\n", d);

    for(int i=0; i<a; i++){
        printf("%d", ar[i]);
    }

}

