#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int p, n, cano, canoesta, testa=0;

    scanf("%d %d", &p, &n);
    scanf("%d", &cano);
    canoesta = cano;
    n--;
    while (n--){

        scanf("%d", &cano);

        if(abs(cano - canoesta) > p){
            printf("GAME OVER\n");
            return 0;
        }

        canoesta = cano;
    }

    printf("YOU WIN\n");
    
    return 0;
}