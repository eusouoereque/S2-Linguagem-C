#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char string[30], auxMai[30], auxMin[30];
    int tamanho, i;

    gets(string);

    tamanho = strlen(string);

    for (i = 0; i <= tamanho; i++){
        auxMai[i] = toupper(string[i]);
        auxMin[i] = tolower(string[i]);
    }
    
    printf("MAIUSCULO: %s\n", auxMai);
    printf("minusculo: %s\n", auxMin);
    printf("Original: %s\n", string);


    return 0;
}