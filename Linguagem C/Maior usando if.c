#include <stdio.h>

int main(){
	int x, y, z;
	
	scanf("%d %d", &x, &y);
	
	if(x > y){
		z = x;
	}
	else if(y > x){
		z = y;
	printf("Maior numero e %d", z);
	}
	return 0;
}

