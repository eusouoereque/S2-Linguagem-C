#include <stdio.h>

int main(){

    int kilometros;
    float litros, kmlitro;

    scanf("%d %f", &kilometros, &litros);

    kmlitro =  kilometros / litros;

    printf("%.3f km/l\n", kmlitro);

    return 0;
}