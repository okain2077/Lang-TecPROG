#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int valor[10];
	int i, maior, menor;
	
	printf("Digite 10 numeros!\n");
	
	for (i=0; i<10; i++){
	scanf("%d", &valor[i]);
	}
	
	i = 0;
	
	for (i=0; i<10; i++){
		printf(" %d ", valor[i]);
	}
	
	
	return 0;
}
