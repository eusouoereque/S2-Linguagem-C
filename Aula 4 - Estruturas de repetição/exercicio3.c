#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int limite, i, l, r, d;
    
    printf("Quantos lances serao analisados?\n");
    scanf("%d", &limite);

    for(i = 1; i<=limite; i++){
        scanf("%d %d %d", &l, &r, &d);

        if(r > 50 && l < r && r > d){
            printf("Resultado: S\n");
        }else{
            printf("Resultado: N\n");
        }

    }

    return 0;
}