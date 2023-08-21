#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
    char a[100];
    scanf("%s", a);
    bool is_upper = true;
    bool is_upper_other = true;

    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] > 'Z'){
            is_upper = false;
            break;
        }
    }
    for (int i = 1; a[i] != '\0'; i++){

        if (a[i] > 'Z'){
            is_upper_other = false;
            break;
        }
    }
    if(is_upper == true){
        is_upper_other = false;
    }
    else if(is_upper_other == true){
        is_upper = false;
    }

    if(is_upper == true){
        for(int i=0; a[i]!='\0'; i++){
            printf("%c", tolower(a[i]));
        }
    }
    else if(a[0]>'Z' && is_upper_other == true){
        printf("%c", toupper(a[0]));
        for(int i=1; a[i]!='\0'; i++){
            printf("%c", tolower(a[i]));
        }
    }
    else{
        printf("%s", a);
    }
    return 0;
}

