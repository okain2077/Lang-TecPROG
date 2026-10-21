#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void ex1(){
	    int valor[MAX], i, maior, j, aux;
    
    printf("Digite 100 numeros!\n");

    for (i=0; i < MAX; i++){
    	scanf("%d", &valor[i]);
	}
    
    printf("Lista Inversa: \n");
    
    for (i=MAX; i > 0; i--){
		printf(" %d ", valor[i - 1]);
	}
	
	printf("\nLista do Maior para o Menor: \n");
	
	for (i=0; i < MAX; i++){
		for(j = i+1; j < MAX; j++){
			if(valor[i] < valor[j]){
				aux = valor[i];
				valor[i] = valor[j];
				valor[j] = aux;
			}
		}	
	}
	for (i=0; i < MAX; i++){
		printf(" %d ", valor[i]);
	}
}

void ex2(){
		double n;
	int expoente;
	
	printf("Digite um numero em DOUBLE!\n");
	scanf("%lf", &n);
	
	expoente = 0;
	
	while (n>=10){
		n = n/10;
		expoente++;
	}
	printf("A notacao cientifica eh: %.1lf x 10^%d", n, expoente);
}

void ex3(){
		int n, aux, mult= 1;
	
	printf("Tranformar numero em Binario: \n");
	scanf("%d", &n);
	aux=0;
	while(n>0){
		aux=aux+(n%2)*mult;
		n=n/2;
		mult=mult*10;
	}
	printf("%d", aux);
}


int main(int argc, char *argv[]) {
	
	return 0;
}
