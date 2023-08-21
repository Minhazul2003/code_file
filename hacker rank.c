#include <stdio.h>
#include <math.h>


int main()
{
    int a;
    scanf("%d", &a);
    int b;
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        if(b<1){
            printf("0\n");
        }
        else if(b<3){
            printf("1\n");
        }
        else if(b<7){
            printf("2\n");
        }
        else if(b<15){
            printf("3\n");
        }
        else if(b<31){
            printf("4\n");
        }
        else if(b<63){
            printf("5\n");
        }
        else if(b<127){
            printf("6\n");
        }
        else if(b<255){
            printf("7\n");
        }
        else if(b<511){
            printf("8\n");
        }
        else {
            printf("9\n");
        }

    }
    return 0;
}
