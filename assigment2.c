#include <stdio.h>
int main(){
    int a, b, c, d, e, f, g;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    int count = 1;
    int rount = 1;

    int z = 0;
    int Z = 0;
    int v = 0;
    int V = 0;
    int m = 0;
    int M = 0;
    int n = 0;






    while(z<=g){
        if(count%2 == 1 && z > 0 && z >= a){
            count++;
            v++;
            z = z+a;
        }
        else if(count%2 == 1 && z > 0 && z < a){
            m = a;
            z = g;
            count++;
        }
        else if(count%2 == 0 && z > 0 && z >= c){
            z = z + c;
            count++;
        }
        else if(count%2 == 0 && z > 0 && z < c){
            z = g;
            count++;
        }
        printf("%d\n", z);
    }
    int X = (a*v)+m;
    int x = X*b;
    printf("%d\n", x);



     while(Z<=0){
        if(rount%2 == 1 && Z > 0 && Z >= d){
            rount++;
            V++;
            Z = g - d;
        }
        else if(rount%2 == 1 && Z > 0 && Z < d){
            m = d;
            Z = 0;
            rount++;
        }
        else if(rount%2 == 0 && Z > 0 && Z >= f){
            Z = Z - f;
            rount++;
        }
        else if(rount%2 == 0 && Z > 0 && Z < f){
            Z = 0;
            rount++;
        }
        printf("%d\n", Z);
    }

    int Y = (d*V)+M;
    int y = Y*e;
    printf("%d\n", y);

    if(x > y){
        printf("Takahashi");
    }
    else if(x == y){
        printf("Draw");
    }
    else{
        printf("Aoki");
    }




    return 0;

}



