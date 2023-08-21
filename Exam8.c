#include<stdio.h>
#include <string.h>

struct Name{
    char num[21];
    char podobi[21];

};

int main(){
    int a;
    scanf("%d", &a);
    struct Name people[a];
    for(int i=0; i<a; i++){
        scanf("%s %s", &people[i].num, &people[i].podobi);

    }

        for(int steps=0; steps<a-1; steps++) {
         people[steps].num ;
         people[steps].podobi;
            for(int i=steps+1; i<a; i++) {
                if (people[i].num == people[steps].num && people[i].podobi == people[steps].podobi){
                    printf("Yes");
                    return 0;

                }

            }
            printf("%d", steps);

        }
    printf("No");

  return 0;
}
// printf("%s %s\n", people[steps].num, people[steps].podobi);
//
