#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359 

int main(int argc, char** argv) {
	
	float raio, area, raio2, B, b, h, areat;
	raio2 = raio * raio;
	
	printf("Digite um valor de RAIO: ");
		scanf("%f", &raio);
		
	raio2 = raio * raio;	
	area = M_PI* raio2;
	
	printf("A area do circulo e: %f \n", area );
	
	printf("Agora a area do trapezio\n");
	printf("Digite a base maior e menor do trapezio e a altura, respectivamente: ");
		scanf("%f %f %f", &B, &b, &h);
	
	areat = ((B+b)*h) / 2;
	
	printf("A area do trapezio e: %f", areat);
	
	
	return 0;
}
