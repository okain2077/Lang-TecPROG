#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiplo(n){
	
	if (n%2 == 1 && n%5 == 0){
		printf(" %d ", n);
	
	return 1;
}
}

void NAexe0(){
	int n1, n2, n3, n4 ,n5;
	
	printf("Digite 5 numeros com espacamento entre eles!");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
}

void NAexe1(){
	float imc, peso, altura;
	char classe;
	
	printf("Digite o seu peso em KG!\n");
	scanf("%f", &peso);
	
	printf("Digite a sua altura em metros!\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
		printf("O seu IMC e: %.2f", imc);
		
	if (imc < 18.5){
		printf(" Abaixo do Peso");}
		
	else if (18.5 <= imc <= 24.9){
		printf(" Normal");}
	
	else if (25.0 <= imc <= 29.9){
		printf(" Acima do Peso");}
	
	else if (imc >= 30.0){
		printf(" Obeso");}		
}

void NAexe2(){
	
}

void MAexe0(){
	int n1, n2, n3, n4;
	
	printf("Digite quatro numeros com espacamento entre eles: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	multiplo(n1);
	multiplo(n2);
	multiplo(n3);
	multiplo(n4);
}
int main(int argc, char *argv[]) {
	
	return 0;
}
