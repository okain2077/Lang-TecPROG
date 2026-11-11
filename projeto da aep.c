#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int codigo;
	char escola[50];
	char tema[50];
	char qualacao[50];
	int data;
	char publico[50];
	char responsavel[50];
	char quantiaprevista[50];
	
} cadastro;

cadastro cadastraracao(){
	int letra;
	int i;
	cadastro acao;
	printf("Codigo da acao: ");
	scanf("%d", &acao.codigo);
	
	printf("Nome da Escola: ");
	scanf(" %[^\n]", &acao.escola);
	
	printf("Tema: ");
	scanf(" %[^\n]", &acao.tema);
	
	printf("Qual acao sera realizada: ");
	scanf(" %[^\n]", &acao.qualacao);
	return acao;
}
int main(int argc, char *argv[]) {
	
	int a;
	cadastro acao;	
	
	printf("=====================\n");
	printf("     PSE EM ACAO     \n");
	printf("=====================\n");
	
	printf("1 - Cadastrar Acao\n");
	printf("2 - Listar Acoes\n");
	printf("3 - Pesquisar Acao\n");
	printf("4 - Atualizar Situacao\n");
	printf("5 - Gerar Resumo\n");
	printf("0 - Sair\n");
	printf("\n");
	printf("Escolha: ");
	scanf("%d", &a);
	
	
	
	switch(a){
		case 1: 
		acao = 	cadastraracao();
		printf("%d", acao.codigo);
		printf(" %s", acao.escola);
		printf("%s", acao.tema);
		break;

		}
		
	return 0;
}
