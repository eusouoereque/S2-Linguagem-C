#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i=0, idades;
    float soma=0;

    scanf("%d", &idades);
    while (idades >= 0){
        
        soma += idades;
        scanf("%d", &idades);
        i++;
    }
    printf("%.2f\n", soma/i);
    

    return 0;
}