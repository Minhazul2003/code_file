
#include<stdio.h>
#include<string.h>
//int Strchr(char str[], char a){
//    for(int i=0; str[i]!='\0';i++){
//        if (str[i]== a){
//            return &a;
//        }
//    }
//
//}

int main() {
     char text[]="hello";
//     char * pos = Strchr(str, 'l');
    char * pos = strchr(text, "e");
    printf("%s", pos);
    return 0;

}

