#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Binary{
    char str[50];
};

struct Binary inttobinary(unsigned int val, int k){
    struct Binary ans;
    int idx = 0;
   while(val>0){
    int d = val%2;
    val = val/2;
    ans.str[idx] = '0'+ d;
    idx++;

   }

   for(int i=idx; i<k; i++){
    ans.str[i] = '0';
   }
   ans.str[k]='\0';
//  revarsing the array
    char spp[100];
     int d = 0;
    for(int i=0; i<strlen(ans.str); i++){
        spp[i] = ans.str[i];
        d++;
    }
    spp[d] = '\0';
    int e = strlen(spp)-1;
    int len = strlen(spp);
    for(int i=0; i<len; i++){
        ans.str[i] = spp[e];
        e--;
    }
    ans.str[d] = '\0';
    return ans;

}
bool getbit(unsigned int mask, int k){
    return(mask&(1<<k))!=0;
}
unsigned int flipbit(unsigned int mask, int k){
    return mask ^ (1<<k);
}
int main(){

    unsigned int a;
    scanf("%d", &a);
    printf("%s to last 4 bit flip by ", inttobinary(a, 8).str);
    for(int i=0; i<4; i++){

          a&=flipbit(a, i);

    }
    printf("%s", inttobinary(a, 8).str);
    return 0;

}
