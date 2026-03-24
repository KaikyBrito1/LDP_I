#include <stdio.h>
 
int main() {
    double raio, area,  X;
    X = 3.14159;
    scanf("%lf", &raio);
    raio = raio * raio;
    area = X * raio;
    
    printf("A=%.4lf\n", area);
    
 
    return 0;
}
