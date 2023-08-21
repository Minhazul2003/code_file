#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// j no:
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
    if (is_upper == true) {

        for(int i=0; a[i]!='\0'; i++){
            printf("%c", tolower(a[i]));
        }
    }
    else{
       if (a[0] >= 'a' && a[0] <= 'z'){

            for (int i = 1; a[i] != '\0'; i++){

                if (a[i] > 'Z'){
                    is_upper_other = false;
                    break;
                }
            }
       }
        else if (a[0] >= 'A' && a[0] <= 'Z'){

            for (int i = 1; a[i] != '\0'; i++)
            {
                if (a[i] > 'Z')
                {
                    // printf("2\n");
                    is_upper_other = false;
                    break;
                }
            }
        }
            if(is_upper_other == true){
                printf("%c", toupper(a[0]));
                for(int i=1; a[i]!='\0'; i++){
                    printf("%c", tolower(a[i]));
                }
            }
            else{
               for(int i=0; a[i]!='\0'; i++){
                    printf("%c", a[i]);
                }
            }
        }

    return 0;

}
/*if(a[0]>='a'){
        a[0]=toupper(a[0]);
        printf("%c", a[0]);
    }
    else{
        printf("%c", a[0]);
    }
    for(int i=1; a[i]!='\0'; i++){
        printf("%c", tolower(a[i]));
    }*/
