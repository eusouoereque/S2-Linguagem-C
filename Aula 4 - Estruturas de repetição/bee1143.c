#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, entrada;

    scanf("%d", &entrada);

    for(i = 1; i <= entrada; i++){
        printf("%d ", i);
        printf("%.0f ", pow(i,2));
        printf("%.0f\n", pow(i,3));
    }

    return 0;
}