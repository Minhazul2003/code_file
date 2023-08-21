#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
        for(int i=1; i<=a; i++){
            int b;
            scanf ("%d", &b);
            if (b >= 38){
                if(b%10 == 3 || b%10 == 8){
                    int c= b+2;
                    printf("%d\n",c);
                }
                else if(b%10 == 4 || b%10 == 9){
                    int c= b+1;
                    printf("%d\n",c);
                }
                else {
                    printf("%d\n",b);
                }
            }

            else{
                printf("%d\n",b);

            }

        }


    return 0;
}

