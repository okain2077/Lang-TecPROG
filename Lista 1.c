#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	
	
	int numeroa, numerob, aux;
	
	//Exercicio 1)
	
	printf("Digite um numero A: ");
		scanf("%d", &numeroa);
	printf("Digite um numero B: ");
		scanf("%d", &numerob);
	
	aux = numeroa;
	numeroa = numerob;
	numerob = aux;
				
	printf("Em ordem inversa, o numero B e %d e o numero A e %d\n\n\n", numeroa, numerob);
	printf("\n");
	
	//Exercicio 2) ?
	
	double nota;
		
	printf("Digited um valor do tipo DOUBLE: ");
		scanf("%lf", &nota);
	printf("A notacao cientifica e: %.2e\n", nota);
	printf("\n");
	
	//Exercicio 3)
	
	int n1, n2, n3, n4, n5 , n6, n7, resto1, resto2, resto3, resto4, resto5, resto6, resto7, resto8;
	
	printf("Digite um numero: ");
		scanf("%d", &n1);
		
    n2 = n1 / 2;
    resto1 = n1 % 2;
	
	n3 = n2 / 2;
	resto2 = n2 % 2;
	
	n4 = n3 / 2;
	resto3 = n3 % 2;
	
	n5 = n4 / 2;
	resto4 = n4 % 2;
	
	n6 = n5 / 2;
	resto5 = n5 % 2;
	
	n7 = n6 / 2;
	resto6 = n6 % 2;
		 
	printf("O numero %d em binario e %d%d%d%d%d%d\n", n1, resto6, resto5, resto4, resto3, resto2, resto1);
	printf("\n");
	
	//Exercicio 4)
	
	float salario, vendas, comissao, salariot;
	
	printf("Qual o seu salario fixo?\n");
	scanf("%f", &salario);
	printf("Qual o valor total em vendas?\n");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.15;
	salariot = salario + comissao;
	
	printf("O seu salario total e: %.2f\n", salariot);
	printf("\n");
	
	//Exercicio 5)
	
	float valora, valorb, valorc, valord, soma, media, produto;
	
	printf("Digite quatro valores com espacamento entre eles!\n");
	scanf("%f %f %f %f", &valora, &valorb, &valorc, &valord);
	
	soma = valora + valorb + valorc + valord;
	media = (valora + valorb + valorc + valord) / 4;
	produto = valora * valorb * valorc * valord;
	
	printf("A soma dos valores e: %.1f", soma);
	printf("\n");
	printf("A media dos valores e: %.1f", media);
	printf("\n");
	printf("O produto dos valores e: %.1f", produto);
	printf("\n");
	printf("\n");
	
	//Exercicio 6)
	
	float dia, mes, ano;
	
	printf("Digite a sua idade em dias!\n");
	scanf("%f", &dia);
	
	mes = dia / 30;
	ano = dia / 365;
	
	printf("Voce possui %.2f anos de vida", ano);
	printf("\n");
	printf("Voce possui %.2f meses de vida", mes);
	printf("\n");
	printf("Voce possui %.2f dias de vida", dia);
	printf("\n");
	printf("\n");
	
	//Exercicio 7)
	
	float raio, volume, pi;
	pi = 3.14159;
	
	printf("Digite o um valor para o raio da esfera!\n");
	scanf("%f", &raio);
	
	volume = (4/3.0) * pi * pow(raio, 3);
	
	printf("O volume da esfera e %.2f", volume);
	printf("\n");
	
	//Exercicio 8)
	
	float x1, x2, y1, y2, distancia;
	
	printf("Digite a cordenada P1, com x1 e y1!\n");
	scanf("%f %f", &x1, &y1);
	printf("Digite a cordenada P2, com x2 e y2!\n");
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	
	printf("A distancia entre os pontos e: %.2f", distancia);
	
	return 0;
}
