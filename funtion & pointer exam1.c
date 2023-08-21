#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char *Strstr(char a[], char b[]) {
    bool is_found = false;
    for(int i=0; a[i]!='\0'; i++){
        if (a[i]==b[0]){
            printf("%c ", a[i]);
            is_found = true;
            for(int j=i+1, k=1; b[j]!='\0'; j++ , k++){
            printf("%c ", a[j]);
              if (a[j]!=b[k]){
                is_found = false;
              }

            }
            if(is_found == true){
                return &a[i];
            }

        }
    }
    return '\0';
}

int main() {
     char s[] = "father";
    char *d = strstr(s, "a");
    printf("%s", d);
    return 0;

}
/*char *Strchr(char a[], char b) {
    for(int i=0; a[i]!='\0'; i++){
        if (a[i]==b){
            return &a[i];
        }
    }
    return '\0';
}*/
