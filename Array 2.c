#include<stdio.h>
int main() {
    int n = 10;
    int a[n], b[n];
    a[0] = 2;
    a[1] = 3;
    a[2] = 4;
    a[3] = 5;
    a[4] = 6;
    a[5] = 7;
    a[6] = 8;
    a[7] = 9;
    a[8] = 10;
    a[9] = 11;
    b[0] = 22;
    b[1] = 33;
    b[2] = 44;
    b[3] = 55;
    b[4] = 66;
    b[5] = 77;
    b[6] = 88;
    b[7] = 99;
    b[8] = 1010;
    b[9] = 1111;
    for (int i=0; i<n; i++) {
    //Write Code Here
        a[i] = a[i] + b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];

    }

    for(int j = 0; j < 10; j++){
      printf("%d ", a[j]);
    }
    for(int k = 0; k < 10; k++){
      printf("%d ", b[k]);
    }
    return 0;
}


