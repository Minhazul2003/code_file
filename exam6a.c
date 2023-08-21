#include <stdio.h>
#include <string.h>
//void torevarse(char str[]){
//
//}
int main(){
    char str[100] = "00111011";
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
    printf("%s", str);

}
