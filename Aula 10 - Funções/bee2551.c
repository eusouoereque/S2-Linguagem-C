#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calcMedia(int duracao, int distancia){
    double result;

    result = (double) distancia/duracao;

    return result;

}

int main(){
    int treinos, duracao, distancia, i;
    double recorde, media;

    while(scanf("%d", &treinos) == 1){
        recorde = -1;

        for (i = 1; i <= treinos; i++){
            scanf("%d %d", &duracao, &distancia);

            media = calcMedia(duracao, distancia);

            if (media > recorde){
                printf("%d\n", i);
                recorde = media;
            }
            
        }
        
    }

    return 0;
}