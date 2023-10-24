#include <stdio.h>

int main(){
	
	float mat [5] [10];
	int il, ic, c, menor, flag = 0;
	
	for (il=0; il<5;il++){
	
		for (ic=0; ic<10;ic++){
			printf("matriz [%d][%d] =\t", il, ic);
			scanf("%f", &mat [il][ic]);
			
			if(!flag){
				menor = mat[il][ic];
				flag++;
			}
				
			if(menor > mat[il][ic]){
				menor = mat[il][ic];
				c = ic;
			}
		}	
	}
	printf("\nColuna menor Valor:\n\n");
	for (il=0; il<5;il++){
		printf("matriz [%d][%d] = %.2f\n", il, c, mat[il][c]);
	}
	
	
	return 0;
}
