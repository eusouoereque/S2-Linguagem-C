#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int cont, soma, x;

    while(scanf("%d", &x) && x){   
        soma=0;
        
        if(x%2 != 0)
            x++;

        for (cont = 1; cont <= 5; cont++){
            soma += x;
            x += 2;
        }
    
        printf("%d\n", soma);

    }

    return 0;
}