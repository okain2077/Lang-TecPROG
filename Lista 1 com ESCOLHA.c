#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exe1(){
	int numeroa, numerob, aux;
	printf("PRIMEIRO EXERCICIO\n");
	printf("Digite um numero A: ");
		scanf("%d", &numeroa);
	printf("Digite um numero B: ");
		scanf("%d", &numerob);
	
	aux = numeroa;
	numeroa = numerob;
	numerob = aux;
				
	printf("Em ordem inversa, o numero B e %d e o numero A e %d\n\n\n", numeroa, numerob);
	printf("\n");	
}

void exe2(){
	double nota;
		
	printf("Digited um valor do tipo DOUBLE: ");
		scanf("%lf", &nota);
	printf("A notacao cientifica e: %.2e\n", nota);
	printf("\n");
}

void exe3(){
	printf("TERCEIRO EXERCICIO\n");
	
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
}

void exe4(){
	printf("QUARTO EXERCICIO\n");
	
	float salario, vendas, comissao, salariot;
	
	printf("Qual o seu salario fixo?\n");
	scanf("%f", &salario);
	printf("Qual o valor total em vendas?\n");
	scanf("%f", &vendas);
		
	comissao = vendas * 0.15;
	salariot = salario + comissao;
	
	printf("O seu salario total e: %.2f\n", salariot);
	printf("\n");	
}

void exe5(){
	printf("QUINTO EXERCICIO\n");
	
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
}

void exe6(){
printf("SEXTO EXERCICIO\n");
	
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
}

void exe7(){
printf("SETIMO EXERCICIO\n");
	
	float raio, volume, pi;
	pi = 3.14159;
	
	printf("Digite o um valor para o raio da esfera!\n");
	scanf("%f", &raio);
	
	volume = (4/3.0) * pi * pow(raio, 3);
	
	printf("O volume da esfera e %.2f", volume);
	printf("\n");	
}

void exe8(){
printf("OITAVO EXERCICIO\n");
	
	float x1, x2, y1, y2, distancia;
	
	printf("Digite a cordenada P1, com x1 e y1!\n");
	scanf("%f %f", &x1, &y1);
	printf("Digite a cordenada P2, com x2 e y2!\n");
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	
	printf("A distancia entre os pontos e: %.2f", distancia);
}
int main(int argc, char** argv) {
	
	int exercicio;
	
	printf("Digite o numero do exercicio: ");
	scanf("%d", &exercicio);
	
	switch (exercicio){
	
	
	//Exercicio 1)
	
	case 1:
	exe1();
	break;
	
	//Exercicio 2) ?
	case 2:
	exe2();
	break;
	
	//Exercicio 3)
	case 3:
	exe2();
	break;
	//Exercicio 4)
	case 4:
	exe4();		
	break;
	//Exercicio 5)
	case 5:
	exe5();
	break;
	//Exercicio 6)
	case 6:
	exe6();		
	break;
	//Exercicio 7)
	case 7:
	exe7();		
	break;
	//Exercicio 8)
	case 8:
	exe8();
	break;
	default:
		printf("Essa opcao e invalida!");
}
	return 0;
}
