
int main(){
	char ch;
	printf("Digite um simbolo de pontuacao");
	ch = getchar();
	switch(ch){
		case '.':
			printf("Ponto.\n");
			break;
		case ',':
			printf("Virgula.\n");
			break;
		case ':':
			printf("Dois pontos.\n");
			break;
		case';':
			printf("ponto e virgula.\n");
			break;	
		default :
			printf("Nao eh pontuacao.\n");
	}

return 0;
}
