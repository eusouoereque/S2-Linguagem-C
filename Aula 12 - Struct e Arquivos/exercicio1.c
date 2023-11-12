#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TRUE 1

typedef struct _fig{                                    //CRIANDO UMA STRUCT
    int ladoA;
    int ladoB;
    int perimetro;
    int area;
} figura;

int main(){
    int contador = 1;
    FILE *in, *out;
    figura fig;

    in = fopen("c:\\fho\\retang.in", "r");              //ABRINDO ARQUIVO
    out = fopen("c:\\fho\\saida.txt", "w");             //ABRINDO ARQUIVO

    if (in == NULL || out == NULL){             
        printf("Problema ao abrir os arquivo!\n");      //TESTE PRA VER SE OS ARQUIVOS ABRIRAM
        exit(1);
    }
    while (TRUE){

        fscanf(in , "%d %d", &fig.ladoA, &fig.ladoB);   //ENTRADA DE DADOS

        if (fig.ladoA == 0 || fig.ladoB == 0){          //TESTANDO SE A ENTRADA FOI 0
            break;
        }

        fig.perimetro = 2*(fig.ladoA+fig.ladoB);        //CALCULA PERIMETRO 
        fig.area = fig.ladoA*fig.ladoB;                 //CALCULA AREA


        //SAIDA DE DADOS
        fprintf(out,"FIGURA %d\n", contador);
        fprintf(out, "O perimetro de um retangulo de lados %d e %d eh %d\n", fig.ladoA, fig.ladoB, fig.perimetro);
        fprintf(out, "A area de um retangulo de lados %d e %d eh %d\n", fig.ladoA, fig.ladoB, fig.area);
        fprintf(out, "------------------------------------------------------\n");

        contador++;                                     //CONTADOR DE FIGURAS
    }
    
    fclose(in);                                        //FECHANDO ARQUIVO
    fclose(out);                                       //FECHANDO ARQUIVO

    return 0;
}