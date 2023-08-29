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

    if(op == 1)
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    else if(op == 2)
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    else if(op == 3)
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    else if(op == 4)
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    else
        printf("operacao invalida");

    return 0;
}