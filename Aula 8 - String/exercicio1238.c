#include <string.h>

int main(){
	char primeiraPalavra[51], segundaPalavra[51], palavraCombinada[101];
	int qtdPalavras, I, tamanhoPalavra, posicaoLetraPalavraCombinada, posicaoLetraPalavras;
	
	scanf("%d", &qtdPalavras);
	for(I = 0; I < qtdPalavras; I++){
		scanf("%s %s", primeiraPalavra, segundaPalavra);
	
		tamanhoPalavra = strlen(primeiraPalavra) + strlen(segundaPalavra);
		
		posicaoLetraPalavraCombinada = 0;
		for(posicaoLetraPalavras = 0; posicaoLetraPalavras < tamanhoPalavra; posicaoLetraPalavras++){
			if(primeiraPalavra[posicaoLetraPalavras] != '\0'){
				palavraCombinada[posicaoLetraPalavraCombinada] = primeiraPalavra[posicaoLetraPalavras];
				posicaoLetraPalavraCombinada++;
			}
			
			if(segundaPalavra[posicaoLetraPalavras] != '\0'){
				palavraCombinada[posicaoLetraPalavraCombinada] = segundaPalavra[posicaoLetraPalavras];
				posicaoLetraPalavraCombinada++;
			}
		}
		printf("%s\n", palavraCombinada);
		
    	memset(palavraCombinada, 0, sizeof(palavraCombinada));
    	memset(primeiraPalavra, 0, sizeof(primeiraPalavra));
    	memset(segundaPalavra, 0, sizeof(segundaPalavra));
	}
	
	return 0;
}