#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float a, b;
    int op;

    printf("Digite os numeros que serão utilizados em sua respectiva ordem: \n");
    scanf("%f %f", &a, &b);

    printf("Digite a operacao (1- soma, 2- subtracao, 3- multiplicacao e 4-divisao): \n");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        break;
    default:
        printf("Operacao invalida!");
        break;
    }

    return 0;
}