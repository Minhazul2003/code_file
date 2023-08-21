#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int a = 1;
    for(int i=0; i<n; i++){
        if(a*2 < a+k){
            a = a*2;
        }
        else if(a*2 > a+k){
            a = a+k;
        }
        else if(a*2 == a+k){
            a = a+k;
        }
    }
    printf("%d", a);

    return 0;

}
