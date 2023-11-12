#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct _poke{
    int Ai;
    int Di;
    int Li;
    int golpe;
}pokemon;

int main(){
    pokemon dabriel, guarte;
    int i=0, count, bonus;

    scanf("%d", &count);

    while (count > i){

        scanf("%d", &bonus);
        
        scanf("%d %d %d", &dabriel.Ai, &dabriel.Di, &dabriel.Li);
        scanf("%d %d %d", &guarte.Ai, &guarte.Di, &guarte.Li);

        if(dabriel.Li%2 == 0){
            dabriel.golpe = ((dabriel.Ai + dabriel.Di)/2)+bonus;
        }else{
            dabriel.golpe = ((dabriel.Ai + dabriel.Di)/2);
        }

        if(guarte.Li%2 == 0){
            guarte.golpe = ((guarte.Ai + guarte.Di)/2)+bonus;
        }else{
            guarte.golpe = ((guarte.Ai + guarte.Di)/2);
        }

        if(dabriel.golpe == guarte.golpe){
            printf("Empate\n");
        }else if(dabriel.golpe > guarte.golpe){
            printf("Dabriel\n");
        }else{
            printf("Guarte\n");
        }

        i++;
        
    }

    return 0;
}