#include <stdio.h>
 
int main() {
    int num, par= 0, impar=0, negativo=0, positivo=0;
    
    for(int i = 1; i <= 5; i++){
    	scanf("%d", &num);
    	
        if(num % 2 == 0){
        	par++;   
        }
        else if(num % 2 == 1){
        	impar++;
		}
		 if(num < 0){
			negativo++;
		}
		else if(num > 0){
			positivo++;
		}
		
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
        
 
    return 0;
}
