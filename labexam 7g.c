#include<stdio.h>
#include<string.h>
//    Question No F:
int main() {
    int a;
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        int c = 0;
        int b;
        scanf("%d", &b);
        char ar[b];
        scanf("%s", ar);
        if(b>=11){
            for(int i=0; i<b-10; i++){
                if(ar[i]=='8'){
                   c++;
                   break;
                }
            }
            if(c == 1){
              printf("YES\n");
            }
            else if(c == 0){
               printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }


    return 0;

}

/*#include<stdio.h>
#include<string.h>
// j no:
int main() {
    char a[100];
    scanf("%s", a);
    if(strlen(a)>1){
        if(a[0]>='a' && a[1]<'a'){
          for(int i=0; i<strlen(a); i++){
            printf("%c", tolower(a[i]));
          }
        }
        else if(a[0]>='a' && a[1]<'a'){
            printf("%c", toupper(a[0]));
          for(int i=1; i<strlen(a); i++){
            printf("%c", tolower(a[i]));
          }
        }
        else{
            printf("%s", a);
        }
    }
    else{
        printf("%c", toupper(a[0]));

    }
    return 0;

}*/
//if(strlen(a)>1){
//        if(a[0]>='a' && a[1]<'a'){
//          for(int i=0; i<strlen(a); i++){
//            printf("%c", tolower(a[i]));
//          }
//        }
//        else if(a[0]>='a' && a[1]<'a'){
//            printf("%c", toupper(a[0]));
//          for(int i=1; i<strlen(a); i++){
//            printf("%c", tolower(a[i]));
//          }
//        }
//        else{
//            printf("%s", a);
//        }
//    }
//    else{
//        printf("%c", toupper(a[0]));
//
//    }
