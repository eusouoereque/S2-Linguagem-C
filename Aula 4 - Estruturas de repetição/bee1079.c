#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, final;
    float n1, n2, n3, resultado;

    resultado = 0;

    scanf("%d", &final);

    for(i = 0; i < final; i++){
        
        scanf("%f %f %f", &n1, &n2, &n3);

        resultado = (n1*2+n2*3+n3*5)/10;

        printf("%.1f\n", resultado);

    }

    return 0;
}