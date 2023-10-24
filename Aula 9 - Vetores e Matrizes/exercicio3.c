#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int matrizA[4][3], matrizB[4][3], matrizC[4][3], i, j;

    printf("Entrada de dados da Matriz A\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("A[%d][%d]: \n", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        
    }
    
    printf("Entrada de dados da Matriz B\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("B[%d][%d]: \n", i, j);
            scanf("%d", &matrizB[i][j]);
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
        
    }

    printf("Resultado da matriz C\n");
    for (i = 0; i < 4; i++){
        printf("-------------------------------------------------\n");
        for (j = 0; j < 3; j++){
            printf("|\t%d\t|", matrizC[i][j]);
        }

        printf("\n");
        
    }



    return 0;
}