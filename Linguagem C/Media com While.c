#include <stdio.h>

int main(){
	
	int n,valor, quantidade=0, media=0;
	
	printf("Quantos numeros deseja digitar");
	scanf("%d", &n);
	
	while(quantidade < n){
		scanf("%d", &valor);
		media = media + valor;
		quantidade++;
	}
	media = media / n;
	printf("Sua media eh %d", media);
	
	return 0;
}
