#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distancia(float x1, float y1, float x2, float y2){
    float resultado, a, b;

    a = x2 - x1;
    b = y2 - y1;

    resultado = sqrt(pow(a, 2)+ pow(b, 2));

    return resultado;
}   

int main(){

    float x1, x2, y1, y2, result;

    scanf("%f %f", &x1, &y1 );
    scanf("%f %f", &x2, &y2 );

    result = distancia(x1, y1, x2, y2);

    printf("%.4f\n", result);

    return 0;
}