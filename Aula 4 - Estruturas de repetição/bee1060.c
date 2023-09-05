#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, contador;
    float x;

    contador = 0;

    for(i=0; i<6; i++){
        scanf("%f", &x);
        if(x > 0){
            contador++;
        }
    }

    printf("%d valores positivos\n", contador);

    return 0;
}