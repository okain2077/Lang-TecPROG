#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359 

int main(int argc, char** argv) {
	
	float raio;
	float area;
	float raio2;
	raio2 = raio * raio;
	
	printf("Digite um valor de RAIO: ");
		scanf("%f", &raio);
		
	raio2 = raio * raio;	
	area = M_PI* raio2;
	
	printf("A area do circulo e: %f", area);
	
	return 0;
}
