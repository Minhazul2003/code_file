#include<stdio.h>
int main(){
    char str1[20]="I Love You";
    char str2[20];
    char str3[20];
    char str4[20];

    int i,j,k;
    int count=0;
    for(i=0; str1[i]!=' '; i++){
        str1[i]=str2[count];
        count++;

    }
    printf("%s\n", str2);

    count++;
    int m=count;
    int d=0;
    for(j=m; str1[j]!=' '; j++){
        str1[j]=str3[d];
        count++;
        d++;
    }

    count++;
    int n=count;
    int f=0;
    for(k=n; str1[k]!=' '; k++){
        str1[j]=str4[f];
        count++;
        f++;
    }

    printf("%s\n", str3);
    printf("%s\n", str4);

    return 0;
}
