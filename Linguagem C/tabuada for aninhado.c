#include <stdio.h>

int main (){
	
	int A, B, soma;
	
	scanf("%d %d", &A, &B);
	
	for(int i = 1;i <= 10;i++){
	
	if(A>B){
		break;
	}
	else{
		for(int i = A;i <= B;i++){
			for(int j = 1;j <= 10;j++){
				soma = A * j;
				printf("%dx%d= %d\n", i , j, soma);
			}
		}
	}
}
return 0;
}

