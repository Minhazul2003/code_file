#include<stdio.h>
#include <string.h>

void foo(){
     printf("foo\n");
     bar();
}
void bar(){
     printf("bar\n");
}
int main(){
    foo();
    return 0;

}
