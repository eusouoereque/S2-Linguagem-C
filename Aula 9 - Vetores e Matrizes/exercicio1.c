#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float notas[5], media=0;
    int i;

    for (i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media / 5;

    printf("Media: %.1f", media);

    return 0;
}