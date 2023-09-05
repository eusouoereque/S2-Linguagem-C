#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int i, brinca;

    printf("Ate quanto voce quer brincar?");
    scanf("%d", &brinca);

    for(i=1; i<=brinca; i++){
        
        if(i%3 == 0 && i%5 == 0){
            printf("Ding Ping, ");
        }else if(i%3 == 0){
            printf("Ding, ");
        }else if (i%5 == 0){
            printf("Ping, ");
        }else{
            printf("%d, ", i);
        }
    }

    printf("Lee.\n");

    return 0;
}