#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int vet[10], i, flag=0;
    float media=0;

    printf("Entrada de dados\n");

    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        media += vet[i];
    }

    media = media/10;
    printf("Valor da Media: %.1f\n", media);

    for (i = 0; i < 10; i++){
        if (media == vet[i]){
            printf("Elemento %d eh igual a media\n", i+1);
            flag = 1;
        }
        
    }

    if (!flag){
        printf("Nenhum elemento eh igual a zero\n");
    }
    
    
    

    return 0;
}