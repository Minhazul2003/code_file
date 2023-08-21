// 1.  number
#include<stdio.h>
int main(){
    int n;
    printf("How many students grades do you want to see: ");
    scanf("%d", &n);
    int arr[n], i;
    for(int i=0; i<n; i++){
        printf("Enter Your number: ");
        scanf("%d", &arr[i]);
        if(arr[i]>=95){
            printf("You got A+\n");
        }
        else if(arr[i]>=85){
            printf("You got A\n");
        }
        else if(arr[i]>=80){
            printf("You got A-\n");
        }
        else if(arr[i]>=75){
            printf("You got B+\n");
        }
        else if(arr[i]>=70){
            printf("You got B\n");
        }
        else if(arr[i]>=65){
            printf("You got B-\n");
        }
        else if(arr[i]>=60){
            printf("You got C+\n");
        }
        else if(arr[i]>=55){
            printf("You got C\n");
        }
        else if(arr[i]>=50){
            printf("You got D\n");
        }
        else {
            printf("You got F\n");
        }
    }


    return 0;
}
