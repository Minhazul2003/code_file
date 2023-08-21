#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check_array(int ar[], int b){
    int frr[b+1];
    for(int i=0; i<b+1; i++){
        frr[i]=0;
    }
    bool is_arr = true;

    for(int i=0; i<b; i++){
        frr[ar[i]]++;
    }
    for(int i=1; i<=b; i++){
        if(frr[i]==0){
            is_arr = false;
        }
    }
    return is_arr;
}
int main(){
    int c;
    scanf("%d", &c);
    int br[c];
    for(int i=0; i<c; i++){
        scanf("%d", &br[i]);
    }
    if(check_array(br, c)==1){
        printf("true");
    }
    else{
        printf("false");
    }
}
