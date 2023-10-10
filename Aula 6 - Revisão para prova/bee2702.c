#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int f, c, m, ef, ec, em, i=0;

    scanf("%d %d %d", &f, &c, &m);

    scanf("%d %d %d", &ef, &ec, &em);

    if(f < ef){
        i = ef - f;
    }

    if(c < ec){
        i = i + ec - c;
    }

    if(m < em){
        i = i + em - m;
    }

    printf("%d\n", i);
    

    return 0;
}