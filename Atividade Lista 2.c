#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Primeiro exercicio
	int idade, anonasc;
	
	printf("PRIMEIRO EXERCICIO");
	
	printf("\nQual a sua idade?: ");
	scanf("%d", &idade);
	
	anonasc = 2026-idade;
	
	printf("Entao voce nasceu em: %d\n\n", anonasc);
	
	//Segundo exercicio
	float kmh, mts;
	
	printf("SEGUNDO EXERCICIO\n");
	
	printf("Informe um valor em km/h para ser convertido para mt/s: ");
	scanf("%f", &kmh);
	
	mts = kmh/3.6;
	
	printf("%.3f km/h convertido e %.3f mt/s\n\n", kmh, mts);
	
	//Terceiro exercicio
	float reais, cotacao;
	
	printf("TERCEIRO EXERCICIO\n");
		
	printf("Quantos reais voce deseja converter?: ");
	scanf("%f", &reais);
	printf("E qual a cotacao atual?: ");
	scanf("%f", &cotacao);
	
	printf("O valor em reais convertido em dolares e %.2f\n\n", reais*cotacao);
	
	//Quarto exercicio
	float cel, fah;
	
	printf("QUARTO EXERCICIO\n");
	
	printf("Informe um valor em celcius para converter em fahreinheit: ");
	scanf("%f", &cel);
	
	fah = cel*(9.0/5.0) + 32;
	
	printf("%.2f graus celcius equivale a %.2f farenheits\n\n", cel, fah);
	
	//Quinto exercicio
	float graus, rad;
	
	printf("QUINTO EXERCICIO\n");
	
	printf("Informe um valor em graus para ser convertido para radianos: ");
	scanf("%f", &graus);
	
	rad = graus*(3.141592/180);
	
	printf("%.2f graus equivale a %.2f radianos\n\n", graus, rad);
	
	//Sexto exercicio
	int premio, primeiro, segundo, terceiro;
	
	printf("SEXTO EXERCICIO\n");
	
	premio=780000;
	primeiro=premio*0.46;
	segundo=premio*0.32;
	terceiro=premio-(primeiro+segundo);
	
	printf("Com o valor total do premio sendo %d\n", premio);
	printf("O premio do primeiro colocado foi de %d\n", primeiro);
	printf("O premio do segundo colocado foi de %d\n", segundo);
	printf("O premio do terceiro colocado foi de %d\n\n", terceiro);
	
	 
	//Setimo exercicio
	int numero;
	
	printf("SETIMO EXERCICIO\n");
	
	printf("Diga um numero que voce deseja saber o antecessor e o sucessor: ");
	scanf("%d", &numero);
	
	printf("o antecessor de %d e: %d\n", numero, numero-1);
	printf("o sucessor de %d e: %d\n\n", numero, numero+1);
	
	//Oitavo exercicio
	int tempo, segundos, minutos, horas;
	
	printf("OITAVO EXERCICIO\n");
	
	printf("Informe um tempo em segundos: ");
	scanf("%d", &tempo);
	
	segundos = tempo%60;
	minutos = (tempo%3600)/60;
	horas = tempo/3600;
	
	printf("O valor %d em segundos convertido fica %d horas %d minutos e %d segundos!\n\n", tempo, horas, minutos, segundos);
	
	//Nono exercicio
	float velocidade, t, distancia, autonomia;
	
	printf("NONO EXERCICIO\n");
	
	printf("Informe a velocidade da sua viagem (KM/H): ");
	scanf("%f", &velocidade);
	printf("Informe o tempo da sua viagem (HORAS): ");
	scanf("%f", &t);
	
	distancia = velocidade*t;
	autonomia = distancia/12;
	
	printf("para uma distancia de %.3f considerando que o seu carro tem uma autonomia de 12KM/L o total de combustivel gasto foi de %.3f\n\n", distancia, autonomia);
	
	//Decimo exercicio
	int a, b, c, maiorab, maiorfinal;
	
	printf("DECIMO EXERCICIO\n");
	
	printf("informe o valor de a: ");
	scanf("%d", &a);
	printf("informe o valor de b: ");
	scanf("%d", &b);
	printf("informe o valor de c: ");
	scanf("%d", &c);
	
	maiorab = (a + b +abs(a-b))/2;
	
	maiorfinal = (maiorab + c +abs(maiorab-c))/2;
	
	printf("%d eh maior!!", maiorfinal);
	
	
	return 0;
}
