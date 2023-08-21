#include<stdio.h>

int main() {
    int a = 10;

    int *p = &a;
    int **q = &p;
    int ***r = &q;
    ***r = 111;

    printf("%d", a);
    return 0;
}


