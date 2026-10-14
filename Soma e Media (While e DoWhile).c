#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuário para digitar 10 numeros que sejam inteiros positivos, e ignore os negativos. 
E mostre na tela o resultado da soma e a média desses valores
 == OBS: Não precisa usar vetor, usem os laços da aula de hoje while e do-while */
int main(int argc, char *argv[]) {
	int n, valor, i, media;
	
	printf("Digite 10 numeros inteiros e positivos\n");
	
	i=0;
	valor = 0;
	n = 0;
	
	while(i<10){
	scanf("%d", &n);
	if (n < 0){
		printf("Valor negativo, numero ignorado \n");
	} else{
	
	valor = valor + n;
	i++;}
}
	printf("A soma de todos os numeros e: %d", valor);
	
	media = valor / 10;
	
	printf("\nA media de todos os numeros e: %d", media);


	return 0;
}
