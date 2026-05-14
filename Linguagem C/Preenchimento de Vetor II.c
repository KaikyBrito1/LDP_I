#include <stdio.h>

int main(){
	int N[1000], T;
	scanf("%d",&T);
	int a = 0;
	for(int i=0; i < 1000;i++ ){
		printf("N[%d] = %d\n",i,a);
		if(a==(T-1)){
			a = 0;
		}else{
			a++;
		}
			
	}
	return 0;
}
