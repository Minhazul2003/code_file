#include<stdio.h>
int main (){
    int arr[6];
    int even[6];
    int odd[6];
    int eve=0;
    int od=0;
    printf("Enter 6 Number %d: ", 10);
    int i;
    for(i=0; i<6; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            even[eve]=arr[i];
            eve++;
        }
        else{
            odd[od]=arr[i];
            od++;
        }
    }
    int j;
    printf("All the even Number is: ");
    for(j=0; j<eve; j++){
       printf("%d ", even[j]);
    }
    printf("\n");
    int k;
    printf("All the odd Number is: ");
    for(k=0; k<od; k++){
       printf("%d ", odd[k]);
    }

    return 0;
}

