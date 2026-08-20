#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int a, b, c, d, maior, maiort, maiory;
	
	printf("Digite os valores a serem comparados!\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	maior = (a+b+abs(a-b))/2;
	maiort = (maior+c+abs(maior-c))/2;
	maiory= (maiort+d+abs(maiort-d))/2;
	
	printf("O maior entre |%d|%d|%d|%d| e %d", a,b,c,d, maiory);
	
	return 0;
}
