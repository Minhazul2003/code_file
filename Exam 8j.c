#include<stdio.h>
#include <string.h>

void change_array(int a, int *ar, int *br){
    int j=a-1;
    for(int i=0; i<a; i++){
        br[j] = ar[i];
         j--;
    }

}

int main(){
    int a;
    scanf("%d", &a);
    int ar[a];
    for(int i=0; i<a; i++){
        scanf("%d", &ar[i]);
    }
    int br[a];
    change_array(a, ar, br);
    for(int i=0; i<a; i++){
        printf("%d", br[i]);
    }
    return 0;
}

