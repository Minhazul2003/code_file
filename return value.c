#include<stdio.h>
struct Folafol{
    int gunfol;
    int jogfol;
};
struct Folafol joggun(int x, int y){
    struct Folafol folafol;
    folafol.gunfol = x*y;
    folafol.jogfol = x+y;
    return folafol;
}
int main(){
    int a = 10;
    int b =5;
    struct Folafol folafol = joggun(a, b);
    printf("%d %d\n", folafol.gunfol, folafol.jogfol);
    return 0;
}
