#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char string[30];
    int tamanho, i, cont = 0;

    gets(string);

    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++){
        string[i] = toupper(string[i]);

        if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            cont++;
    }
    
    printf("Quantidade de vogais: %d", cont);

    return 0;
}