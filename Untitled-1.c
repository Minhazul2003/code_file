#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	int h = n / 10;
	int z = n % 10;
	int x = h / 10;
	int y = h% 10;

    int A = x*100;
    int a = x*10;
    int B = y*100;
    int b = y*10;
    int C = z*100;
    int c = z*10;

    int d = A + b + z;
    int e = B + c + x;
    int f = C + a + y;

    int g = d + e + f;

   printf("%d", g);

    return 0;
}


