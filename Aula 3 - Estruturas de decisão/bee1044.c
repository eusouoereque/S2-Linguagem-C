#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int a, b, resto;

    scanf("%d %d", &a, &b);

    if(a > b){
        resto = a % b;
    }else{
        resto =  b % a;
    }

    if(resto == 0){
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }


    return 0;
}