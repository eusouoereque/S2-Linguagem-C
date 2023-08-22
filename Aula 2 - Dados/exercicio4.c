#include <stdio.h>

int main(){

    int ano1, ano2;
    float dado1, dado2, diferenca;

    printf("Digite o ano e os recursos a serem comparados: \n");
    scanf("%d", &ano1);
    scanf("%f", &dado1);

    printf("Digite o ano e os recursos a serem comparados: \n");
    scanf("%d", &ano2);
    scanf("%f", &dado2);

    diferenca = dado2 - dado1;

    printf("A diferenca entre o ano %d e %d = %.2f", ano1, ano2, diferenca);

    return 0;
}