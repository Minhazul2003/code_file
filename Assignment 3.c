#include<stdio.h>

int main(){
    int n,h;
    scanf("%d %d", &n,&h);

    for( int i = 1; i <= n; i++){
        int a = i%2;
        int b = i%4;
        if( i%2 == 0 && b == 0){
            printf("#");
            for (int j=0; j < h-1; j++){
                printf(".");
            }
        }
        else if(a == 0 && b > 0){
            for(int j=0; j<h-1; j++){
                printf(".");
            }
            printf("#");
        }
        else{
            for(int j=0; j<h; j++){
                printf("#");
            }
        }
        printf("\n");
    }


    return 0;
}
