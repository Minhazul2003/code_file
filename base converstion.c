#include <stdio.h>
#include <string.h>

void inttobinary(unsigned int val, char str[], int k){
    int idx = 0;
   while(val>0){
    int d = val%2;
    val = val/2;
    str[idx] = '0'+ d;
    idx++;

   }

   for(int i=idx; i<k; i++){
    str[i] = '0';
   }
   str[k]='\0';
//  revarsing the array
    char spp[100];
     int d = 0;
    for(int i=0; i<strlen(str); i++){
        spp[i] = str[i];
        d++;
    }
    spp[d] = '\0';
    int e = strlen(spp)-1;
    int len = strlen(spp);
    for(int i=0; i<len; i++){
        str[i] = spp[e];
        e--;
    }
    str[d] = '\0';

}

int main(){
    char str[100];
    unsigned int a;
    int b = 8;
    scanf("%d", &a);
    inttobinary(a, str, b);
    printf("%s", str);

}
//unsigned int to binary(char str[]){
//    int len = strlen(str);
//    unsigned int ans = 0;
//    for (int i=0; i<len; i++){
//        int bit = str[i]-'0';
//        ans = ans*2+bit;
//    }
//    return ans;
//}
