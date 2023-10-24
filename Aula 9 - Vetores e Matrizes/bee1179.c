#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int vetPar[5], vetImpar[5], indP=0, indI=0;
    int cont, nro;

    // controle 15 entrada de dados
    for(cont=0; cont<15; cont++){
        scanf("%d", &nro);

        //Processa numeros pares[
        
        if (nro%2==0){
            vetPar[indP] = nro;
            indP++;
            if (indP > 4){
                //Descarrega vetor carregado
                for (indP = 0; indP < 5; indP++){
                    printf("par[%d] = %d\n", indP, vetPar[indP]);
                }
                indP=0;
            }
        }else{
            vetImpar[indI] = nro;
            indI++;
            if (indI > 4){
                //Descarrega vetor carregado
                for (indI = 0; indI < 5; indI++){
                    printf("impar[%d] = %d\n", indI, vetImpar[indI]);
                }
                indI=0;
            }
        }
    }

    for (cont = 0; cont < indI; cont++)
        printf("impar[%d] = %d\n", cont, vetImpar[cont]);
    
    for (cont = 0; cont < indP; cont++)
        printf("par[%d] = %d\n", cont, vetPar[cont]);
    

    return 0;
}