#include<stdio.h>
struct Student{
    int roll;
    int class;
    int marks;
};


int main(){

    struct Fun sum = [3];
    struct Fun *a = &sum;


    printf("%d", *sum);
 return 0;
}


/*
5
10 20 30 40 50
1 3

*/
