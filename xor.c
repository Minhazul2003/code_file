#include <stdio.h>
#include <string.h>

void inttobinary(unsigned int val, char str[]){
    int idx = 0;
   while(val>0){
    int d = val%2;
    val = val/2;
    str[idx] = '0'+ d;
    idx++;

   }
   str[idx] = '\0';
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
    int a;
    scanf("%d", &a);
    char b[];
    inttobinary(a, b);

    for(int i=0; i<strlen(a); i++){
        if(a[i]=='1'){
            a[i]= '0';
            break;
        }
    }
    printf("%s", a);
}


//#include <string.h>
//void inttobinary(unsigned int val, char str[]){
//    int idx = 0;
//   while(val>0){
//    int d = val%2;
//    val = val/2;
//    str[idx] = '0'+ d;
//    idx++;
//
//   }
//   str[idx] = '\0';
//    char spp[100];
//     int d = 0;
//    for(int i=0; i<strlen(str); i++){
//        spp[i] = str[i];
//        d++;
//    }
//    spp[d] = '\0';
//    int e = strlen(spp)-1;
//    int len = strlen(spp);
//    for(int i=0; i<len; i++){
//        str[i] = spp[e];
//        e--;
//    }
//    str[d] = '\0';
//
//}
//#include <stdio.h>
//void printxor(int x, int y){
//    int c = x;
//    for(int i=x+1; i<=y; i++){
//        c = c^i;
//    }
//    printf("%d", c);
//}
//
//int main(){
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = a^b;
//    printxor(a, b);
//    return 0;
//}
