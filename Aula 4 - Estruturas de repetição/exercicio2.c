#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define qtdEstados 27

int main(){

    int i;
    float contador, entrada;

    contador = 0;

    for(i=1; i<=qtdEstados; i++){
        scanf("%f", &entrada);
        contador = contador + entrada;
    }

    printf("Media = %.1f\n", contador/qtdEstados);

    return 0;
}