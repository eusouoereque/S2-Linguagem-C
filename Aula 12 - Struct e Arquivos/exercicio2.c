#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TRUE 1

typedef struct _fig{
    float base;
    float altura;
    float area;
}figura;

int main(){
    int i=1;
    FILE *in, *out;
    figura fig;

    if((in = fopen("c:\\fho\\triang.in", "r")) == NULL){
        printf("Erro ao abrir aquivo de entrada!\n");
        exit(1);
    }

    if((out = fopen("c:\\fho\\saida2.txt", "w")) == NULL){
        printf("Erro ao abrir aquivo de saida!\n");
        exit(1);
    }

    fprintf(out, "Figura\tBase\tAltura\tArea\n");

    while (TRUE){
        fscanf(in, "%f %f", &fig.base, &fig.altura);
        if (fig.base == 0 || fig.altura == 0){
            break;
        }

        fig.area = (fig.base*fig.altura) / 2;
        fprintf(out, "%d\t%.1f\t%.1f\t%.1f\n",i , fig.base, fig.altura, fig.area);
        i++;
    }

    fclose(in);
    fclose(out);
    


    return 0;
}