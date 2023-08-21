#include<stdio.h>
int main() {
	int  x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int a = 0;
	int b = 0;

	for(int i=x; i<=y; i++){
        printf("%d", i);
        if(i<23){
            if(i==z){
                a++;
                i++;
            }

        }
        else if(i == 23){


            if(i==z){
                a++;
            }
            i == 0;
        }

	}
	if(a==1){
        printf("Yes");
	}
	else{
        printf("No");
	}
    return 0;

}




