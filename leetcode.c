#include<stdio.h>
#include<string.h>

//int romanToInt(char * s){
//    int a = 0;
//    for(int i=0; i<strlen(*s); i++){
//        if(s[i]=='I'){
//          a+= 1;
//        }
//        else if(s[i]=='V'){
//          a+= 5;
//        }
//        else if(s[i]=='X'){
//          a+= 10;
//        }
//        else if(s[i]=='L'){
//          a+= 50;
//        }
//        else if(s[i]=='C'){
//          a+= 100;
//        }
//        else if(s[i]=='D'){
//          a+= 500;
//        }
//        else if(s[i]=='M'){
//          a+= 1000;
//        }
//    }
//    return a;
//
//}
int main(){
    int n;
    scanf("%d", &n);
    printf("[");
   for(int i=1; i<=n; i++){

     if(i%3 == 0 && i%5 == 0){
        printf("FizzBuzz");
     }
     else if(i%3 == 0){
        printf("Fizz,");
     }
     else if(i%5 == 0){
        printf("Buzz,");
     }
     else{
        printf("%d,", i);
     }
   }
   printf("]");
   return 0;
}
