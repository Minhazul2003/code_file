#include<stdio.h>
#include <string.h>

void odd_even(void){
    int a;
    scanf("%d", &a);
     if(a%2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }


}
int main(){
    odd_even();
    return 0;
}
