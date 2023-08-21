#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool is_reverse_sorted(int n, int a[]){
    int copy[n];
    for(int i=0; i<n; i++){
        copy[i]=a[i];
    }
    for (int steps=0; steps<n; steps++) {
        for (int i=n-1; i>0; i--) {
           if (a[i]> a[i-1]){
                swap(&a[i], &a[i-1]);
           }
       }
    }
    for(int i=0; i<n; i++){
        if (copy[i] != a[i]){
            return false;
        }
    }
    return true;
}
void sort(int n, int a[]) {
    for (int steps=n-1; steps>=0; steps--) {
        int minimum = a[steps], pos = steps;
        for (int i=steps; i>=0; i--) {
           if (a[i] < minimum){
              minimum = a[i];
              pos = i;
           }
       }
        swap(&a[steps], &a[pos]);
        if ( is_reverse_sorted(n, a)) break;
   }
}


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(n, a);
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;

}
//void stringCat(char a[], char b[], char out[]){
//
//    int lena = strlen(a);
//    int lenb = strlen(b);
//    int len = lena+lenb;
//
//    int count = 0;
//
//    for(int i=0; i<lena; i++){
//      out[count]=a[i];
//      count++;
//    }
//    for(int i=0; i<lenb; i++){
//      out[count]=b[i];
//      count++;
//    }
//    out[count]='\0';
//}
//int main() {
//    char a[100];
//    scanf("%s", a);
//    char b[100];
//    scanf("%s", b);
//    int lena = strlen(a);
//    int lenb = strlen(b);
//    int len = lena+lenb;
//    printf("%d", lena);
//     printf("%d", lenb);
//
//    char c[len+1];
//    stringCat(a, b, &c);
//    printf("%s", c);
//
//    return 0;
//
//}
//
