#include <stdio.h>
#include <stdlib.h>


void exec2 (){
		float reais, cotacao;
		printf("\nSEGUNDO EXERCICIO\n");
		printf("Quantos reais voce deseja converter?: ");
		scanf("%f", &reais);
		printf("E qual a cotacao atual?: ");
		scanf("%f", &cotacao);
		printf("O valor em reais convertido em dolares e %.2f\n\n", reais/cotacao);
}

void exec3 (){
		float cel, fah;
		printf("\nTERCEIRO EXERCICIO\n");
		printf("Informe um valor em celcius para converter em fahreinheit: ");
		scanf("%f", &cel);
		fah = cel*(9.0/5.0) + 32;
		printf("%.2f graus celcius equivale a %.2f farenheits\n\n", cel, fah);
}

void exec8 (){
		int tempo, segundos, minutos, horas;
		printf("\nOITAVO EXERCICIO\n");
		printf("Informe um tempo em segundos: ");
		scanf("%d", &tempo);
		segundos = tempo%60;
		minutos = (tempo%3600)/60;
		horas = tempo/3600;
		printf("O valor %d em segundos convertido fica %d horas %d minutos e %d segundos!\n\n", tempo, horas, minutos, segundos);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ex;
	printf("insira o exercicio que voce deseja resolver [2|3|8]: ");
	scanf("%d", &ex);
	
	switch(ex){
		
	case 2:
		exec2();
	break;
	
	case 3:
		exec3();
	break;
	
	case 8:
		exec8();
	break;
	
	default:
		printf("\nEsse exercicio nao existe!");
		
	}
	return 0;
}
