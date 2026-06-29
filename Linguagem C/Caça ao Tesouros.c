#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void apresentarjogo();
void gerarTesouro(int *x, int *y);
void lerPosicao (int *x, int *y);
int verificarTesouro(int jogadorX, int jogadorY, int tesouroX, int tesouroY);
void darDicas(int jogadorX, int jogadorY, int tesouroX, int tesouroY);

int main(){
	int tesouroX, tesouroY;
	int x, y;
	int tentativas;
	
	srand(time(NULL));
	
	apresentarjogo();
	gerarTesouro(&tesouroX, &tesouroY);
	
	for(tentativas = 1;; tentativas++){
		lerPosicao(&x, &y);
		
		switch (verificarTesouro(x,y, tesouroX, tesouroY){
			
			case 1:
				printf("\nPARABENS! VOCÊ ENCONTROU O TESOURO\n");
				printf("Tentativas: %d\n", tentativas);
				return 0;
				
			case 0:
				printf("\nNada encontrado.\n");
				darDicas(x,y,tesouroX,tesouroY);
				break;
				
			default:
				printf("Erro!\n");
		}
	}
	
}

void lerPosicao(int *x, int *y){
	printf("\nlinha: ");
	scanf("%d",x);
	
	printf("\nColuna: ");
	scanf("%d",y);
}

	
