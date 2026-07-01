#include <stdio.h>
#include <stdlib.h>   // Biblioteca para uso do rand() e srand()
#include <time.h>    // Biblioteca para usar o time() na geração aleatória

void apresentarJogo();
void gerarTesouro(int *x, int *y);
void lerPosicao (int *x, int *y);
int verificarTesouro(int jogadorX, int jogadorY, int tesouroX, int tesouroY);
void darDicas(int jogadorX, int jogadorY, int tesouroX, int tesouroY);

int main(){
	int tesouroX, tesouroY;
	int x, y;
	int tentativas;
	
	srand(time(NULL));  // Inicializa os números aleatórios e faz com que eles não se repitam 
	
	apresentarJogo();
	gerarTesouro(&tesouroX, &tesouroY);
	
	for(tentativas = 1;; tentativas++){
		lerPosicao(&x, &y);  // Lê a posição escolhida pelo jogador
		
		switch (verificarTesouro(x,y, tesouroX, tesouroY)){
			
			case 1:
				printf("\nPARABENS! VOCE ENCONTROU O TESOURO\n");
				printf("Tentativas: %d\n", tentativas);
				return 0;
				
			case 0:
				printf("\nNada encontrado.\n");
				break;
				
			default:
				printf("Erro!\n");
		}
	}
	
}

void apresentarJogo(){
	printf("=== CACA AO TESOURO ===\n");
	printf("Mapa 5x5 \n(0 a 4)\n");
}

void gerarTesouro(int *x, int *y){
	*x = rand() % 5; // gera numero aleatorio, aonde o resto sempre será entre 0 e 4
	*y = rand() % 5;
	
}

void lerPosicao(int *x, int *y){
	 do { //repete caso a pessoa digite um numero invalido
        printf("\nLinha (0 a 4): ");
        scanf("%d", x);
    } while (*x < 0 || *x > 4);

    
    do {
        printf("Coluna (0 a 4): ");
        scanf("%d", y);
    } while (*y < 0 || *y > 4);
}


int verificarTesouro(int jogadorX, int jogadorY,int tesouroX, int tesouroY){
	 if(jogadorX == tesouroX && jogadorY == tesouroY){
        return 1; //Verifica se o tesouro foi encontrado
}
	if(jogadorX < tesouroX){
		printf("Mais ao sul.\n");
	}else if(jogadorX > tesouroX){
		printf("Mais ao norte.\n");
	}
	if(jogadorY < tesouroY){
		printf("Mais a leste.\n");
	}else if(jogadorY > tesouroY){
		printf("Mais a Oeste.\n");
			}
				return 0;
		}
	



	
