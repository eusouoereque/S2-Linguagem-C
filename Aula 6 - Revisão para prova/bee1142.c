#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n, i, x;

    scanf("%d", &n);

    for (i = 1, x = 1; i <= n; i++, x+=4){
        printf("%d %d %d PUM\n", x, x+1, x+2);
    }

    return 0;
}