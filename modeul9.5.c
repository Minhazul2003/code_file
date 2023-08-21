#include<stdio.h>
int main() {
    int x = 0;


    int n;
    scanf("%d", &n);

        for(int i=0; i<n; i++){
            char b, c, d;
            scanf (" %c%c%c", &b, &c, &d);
            if(c == '+')       x++;
            else if (c == '-') x--;
        }
        printf("%d\n", x);


    return 0;
}

