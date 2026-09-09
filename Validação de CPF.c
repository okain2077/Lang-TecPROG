#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multDigito( int dig, int valor){
	return dig*valor;
}



int main(int argc, char *argv[]) {
	
	int cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, cpf10, cpf11, v10, v11, mult1, mult2, soma1, soma2;
	
	
	printf("Digite o seu CPF!\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &cpf1, &cpf2, &cpf3, &cpf4, &cpf5, &cpf6, &cpf7, &cpf8, &cpf9, &cpf10, &cpf11);
	
	soma1 = multDigito(cpf1,10) + multDigito(cpf2,9) + multDigito(cpf3,8) + multDigito(cpf4,7) + multDigito(cpf5,6) + multDigito(cpf6,5) + multDigito(cpf7,4) + multDigito(cpf8,3) + multDigito(cpf9,2);
	mult1 = soma1 * 10;
	v10 = mult1 % 11;	
	
	soma2 = multDigito(cpf1,11) + multDigito(cpf2,10) + multDigito(cpf3,9) + multDigito(cpf4,8) + multDigito(cpf5,7) + multDigito(cpf6,6) + multDigito(cpf7,5) + multDigito(cpf8,4) + multDigito(cpf9,3) + multDigito(cpf10,2);
	mult2 = soma2 * 10;
	v11 = mult2 % 11;
	
	if (v10 == cpf10 && v11 == cpf11){
	printf("CPF  foi Validado com sucesso");
}

	
		
	
	

	
	
	return 0;
}
