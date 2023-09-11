#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i=0;
    float notas, soma=0;

    while (i < 2){
        scanf("%f", &notas);
        if(notas >= 0 && notas <= 10){
            soma += notas;
            i++;
        }else{
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", soma/2);
    

    return 0;
}