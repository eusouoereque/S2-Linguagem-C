#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int limit, i;

    scanf("%d", &limit);

    while(limit != 0){
            for (i = 1; i < limit; i++){
                printf("%d ", i);
            }
        printf("%d\n", i);
        scanf("%d", &limit);
        }
    

    return 0;
}