#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int matA, matM=0;
    float notaA, notaM=0;
    int i;

    scanf("%d", &i);

    while (i--){
        scanf("%d", &matA);
        scanf("%f", &notaA);

        if(notaA > notaM){
            notaM = notaA;
            matM = matA;
        }
    }

    if (notaM >= 8)
        printf("%d\n", matM);
    else
        printf("Minimum note not reached\n");
    
    


    return 0;
}