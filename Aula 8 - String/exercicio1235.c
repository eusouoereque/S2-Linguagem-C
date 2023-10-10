#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char string[101], saida[101];
    int vezes, i=0, tamanho, meio, j, ind;

    scanf("%d", &vezes);
    getchar();

    while(i < vezes){
        ind = 0;
        gets(string);
        tamanho = strlen(string);

        meio = tamanho / 2 - 1;

        

        for (j = meio; j >= 0; j--){
            saida[ind] = string[j];
            ind++;
        }

        for (j = tamanho-1; j > meio; j--){
            saida[ind] = string[j];
            ind++;
        }

        saida[ind] = '\0';

        printf("%s\n", saida);
        i++;
    }

    return 0;
}