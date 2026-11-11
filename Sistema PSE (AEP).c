#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char escola[50];
    char tema[50];
    char qualacao[50];
    char data[11];
    char publico[50];
    char responsavel[50];
    int quantiaprevista;
    int situacao;
    int quantidade_real;
} cadastro;


cadastro cadastraracao(cadastro acoes[], int total){
    int i;
    int repetido;
    cadastro acao;

    do {
        repetido = 0;

        printf("Codigo da acao: ");
        scanf("%d", &acao.codigo);

        for(i = 0; i < total; i++){
            if(acoes[i].codigo == acao.codigo){
                repetido = 1;
                printf("\nERRO: Esse codigo ja esta cadastrado!\n");
                break;
            }
        }

    } while(repetido);

    printf("Nome da Escola: ");
    scanf(" %49[^\n]", acao.escola);

    printf("Tema: ");
    scanf(" %49[^\n]", acao.tema);

    printf("Qual acao sera realizada: ");
    scanf(" %49[^\n]", acao.qualacao);

    printf("Data prevista: ");
    scanf(" %10[^\n]", acao.data);

    printf("Publico-Alvo: ");
    scanf(" %49[^\n]", acao.publico);

    printf("Responsavel: ");
    scanf(" %49[^\n]", acao.responsavel);

    printf("Quantidade Prevista: ");
    scanf("%d", &acao.quantiaprevista);

    acao.situacao = 1;
    acao.quantidade_real = 0;

    return acao;
}


void listar(cadastro acao[], int total) {
    int i;

    for (i = 0; i < total; i++) {
        printf("\n=====================\n");
        printf("Codigo: %d\n", acao[i].codigo);
        printf("Escola: %s\n", acao[i].escola);
        printf("Tema: %s\n", acao[i].tema);
        printf("Acao: %s\n", acao[i].qualacao);
        printf("Data: %s\n", acao[i].data);
        printf("Publico-Alvo: %s\n", acao[i].publico);
        printf("Responsavel: %s\n", acao[i].responsavel);
        printf("Quantidade prevista: %d\n", acao[i].quantiaprevista);

        if(acao[i].situacao == 1) {
            printf("Situacao: Planejada\n");
        }
        else if(acao[i].situacao == 2) {
            printf("Situacao: Concluida\n");
        }
        else if(acao[i].situacao == 3) {
            printf("Situacao: Cancelada\n");
        }

        printf("Quantidade real: %d\n", acao[i].quantidade_real);
    }
}


void pesquisar(cadastro acao[], int total){
    int opcao;
    int i;
    int codigo;
    int encontrado = 0;
    char escola[50];
    char tema[50];

    printf("\n========== PESQUISAR ACAO ==========\n");
    printf("1 - Pesquisar por codigo\n");
    printf("2 - Pesquisar por escola\n");
    printf("3 - Pesquisar por tema\n");
    printf("\nEscolha: ");
    scanf("%d", &opcao);

    if(opcao == 1) {

        printf("\nDigite o codigo da acao: ");
        scanf("%d", &codigo);

        for(i = 0; i < total; i++) {

            if(acao[i].codigo == codigo) {

                printf("\n========== ACAO ENCONTRADA ==========\n");
                printf("Codigo: %d\n", acao[i].codigo);
                printf("Escola: %s\n", acao[i].escola);
                printf("Tema: %s\n", acao[i].tema);
                printf("Acao: %s\n", acao[i].qualacao);
                printf("Data: %s\n", acao[i].data);
                printf("Publico: %s\n", acao[i].publico);
                printf("Responsavel: %s\n", acao[i].responsavel);
                printf("Quantidade prevista: %d\n", acao[i].quantiaprevista);

                if(acao[i].situacao == 1)
                    printf("Situacao: Planejada\n");
                else if(acao[i].situacao == 2)
                    printf("Situacao: Concluida\n");
                else
                    printf("Situacao: Cancelada\n");

                printf("Quantidade real: %d\n", acao[i].quantidade_real);

                encontrado = 1;
                break;
            }
        }

        if(encontrado == 0) {
            printf("\nNenhuma acao encontrada com esse codigo.\n");
        }

    } else if(opcao == 2) {

        printf("\nDigite o nome da escola: ");
        scanf(" %49[^\n]", escola);

        for(i = 0; i < total; i++) {

            if(strcmp(acao[i].escola, escola) == 0) {

                printf("\n========== ACAO ENCONTRADA ==========\n");
                printf("Codigo: %d\n", acao[i].codigo);
                printf("Escola: %s\n", acao[i].escola);
                printf("Tema: %s\n", acao[i].tema);
                printf("Acao: %s\n", acao[i].qualacao);
                printf("Data: %s\n", acao[i].data);
                printf("Publico: %s\n", acao[i].publico);
                printf("Responsavel: %s\n", acao[i].responsavel);
                printf("Quantidade prevista: %d\n", acao[i].quantiaprevista);

                if(acao[i].situacao == 1)
                    printf("Situacao: Planejada\n");
                else if(acao[i].situacao == 2)
                    printf("Situacao: Concluida\n");
                else
                    printf("Situacao: Cancelada\n");

                printf("Quantidade real: %d\n", acao[i].quantidade_real);

                encontrado = 1;
            }
        }

        if(encontrado == 0) {
            printf("\nNenhuma acao encontrada para essa escola.\n");
        }

    } else if(opcao == 3) {

        printf("\nDigite o tema: ");
        scanf(" %49[^\n]", tema);

        for(i = 0; i < total; i++) {

            if(strcmp(acao[i].tema, tema) == 0) {

                printf("\n========== ACAO ENCONTRADA ==========\n");
                printf("Codigo: %d\n", acao[i].codigo);
                printf("Escola: %s\n", acao[i].escola);
                printf("Tema: %s\n", acao[i].tema);
                printf("Acao: %s\n", acao[i].qualacao);
                printf("Data: %s\n", acao[i].data);
                printf("Publico: %s\n", acao[i].publico);
                printf("Responsavel: %s\n", acao[i].responsavel);
                printf("Quantidade prevista: %d\n", acao[i].quantiaprevista);

                if(acao[i].situacao == 1)
                    printf("Situacao: Planejada\n");
                else if(acao[i].situacao == 2)
                    printf("Situacao: Concluida\n");
                else
                    printf("Situacao: Cancelada\n");

                printf("Quantidade real: %d\n", acao[i].quantidade_real);

                encontrado = 1;
            }
        }

        if(encontrado == 0) {
            printf("\nNenhuma acao encontrada com esse tema.\n");
        }

    } else {
        printf("\nOpcao invalida!\n");
    }
}


void atualizar(cadastro acao[], int total) {
    int codigo;
    int opcao;
    int i;
    int encontrado = 0;

    printf("\n========== ATUALIZAR ACAO ==========\n");
    printf("Digite o codigo da acao: ");
    scanf("%d", &codigo);

    for(i = 0; i < total; i++) {

        if(acao[i].codigo == codigo) {

            encontrado = 1;

            printf("\nAcao encontrada!\n");
            printf("Escola: %s\n", acao[i].escola);

            printf("\nSituacao atual: ");

            if(acao[i].situacao == 1)
                printf("Planejada\n");
            else if(acao[i].situacao == 2)
                printf("Concluida\n");
            else
                printf("Cancelada\n");

            printf("\nEscolha a nova situacao:\n");
            printf("1 - Planejada\n");
            printf("2 - Concluida\n");
            printf("3 - Cancelada\n");
            printf("Escolha: ");
            scanf("%d", &opcao);

            if(opcao == 1) {
                acao[i].situacao = 1;
                acao[i].quantidade_real = 0;
            }
            else if(opcao == 2) {
                acao[i].situacao = 2;

                printf("Quantidade real de participantes: ");
                scanf("%d", &acao[i].quantidade_real);

                if(acao[i].quantidade_real < 0) {
                    printf("\nQuantidade invalida! Atualizacao cancelada.\n");
                    acao[i].situacao = 1;
                    acao[i].quantidade_real = 0;
                    return;
                }
            }
            else if(opcao == 3) {
                acao[i].situacao = 3;
                acao[i].quantidade_real = 0;
            }
            else {
                printf("\nOpcao invalida!\n");
                return;
            }

            printf("\nSituacao atualizada com sucesso!\n");
            break;
        }
    }

    if(encontrado == 0) {
        printf("\nNenhuma acao encontrada com esse codigo.\n");
    }
}


// FUNCAO DE RESUMO

void resumo(cadastro acoes[], int total){

    int planejadas = 0;
    int concluidas = 0;
    int canceladas = 0;
    int total_previsto = 0;
    int total_real = 0;
    int previsto_concluidas = 0;

    float porcentagem = 0;

    int i;

    for(i = 0; i < total; i++){

        total_previsto += acoes[i].quantiaprevista;

        if(acoes[i].situacao == 1){
            planejadas++;
        }
        else if(acoes[i].situacao == 2){
            concluidas++;
            total_real += acoes[i].quantidade_real;
            previsto_concluidas += acoes[i].quantiaprevista;
        }
        else if(acoes[i].situacao == 3){
            canceladas++;
        }
    }

    if(previsto_concluidas > 0){
        porcentagem = (float)total_real / previsto_concluidas * 100;
    }

    printf("\n========== RESUMO GERAL ==========\n");

    printf("Acoes planejadas: %d\n", planejadas);
    printf("Acoes concluidas: %d\n", concluidas);
    printf("Acoes canceladas: %d\n", canceladas);

    printf("\nTotal de participantes previstos: %d\n", total_previsto);
    printf("Total de participantes reais: %d\n", total_real);

    printf("Porcentagem de participacao: %.2f%%\n", porcentagem);

    printf("\n==================================\n");
}


int main(int argc, char *argv[]) {

    int a;
    int total = 0;

    cadastro acao[100];

    // CADASTRO FIXO DE EXEMPLO

    acao[0].codigo = 1001;
    strcpy(acao[0].escola, "Escola Municipal Exemplo");
    strcpy(acao[0].tema, "Saude Bucal");
    strcpy(acao[0].qualacao, "Palestra sobre higiene bucal");
    strcpy(acao[0].data, "15/11/2026");
    strcpy(acao[0].publico, "Alunos do Ensino Fundamental");
    strcpy(acao[0].responsavel, "Equipe de Saude");
    acao[0].quantiaprevista = 30;
    acao[0].situacao = 2;
    acao[0].quantidade_real = 25;

    total = 1;


    do {

        printf("\n=====================\n");
        printf("     SISTEMA PSE     \n");
        printf("=====================\n");

        printf("1 - Cadastrar Acao\n");
        printf("2 - Listar Acoes\n");
        printf("3 - Pesquisar Acao\n");
        printf("4 - Atualizar Situacao\n");
        printf("5 - Gerar Resumo\n");
        printf("0 - Sair\n");

        printf("\nEscolha: ");
        scanf("%d", &a);

        printf("\n\n\n");

        switch(a) {

            case 1:
                if(total < 100){
                    acao[total] = cadastraracao(acao, total);
                    total++;
                } else {
                    printf("Limite de 100 cadastros atingido!\n");
                }
                break;

            case 2:
                printf("\n\n========== LISTA DE ACOES ==========\n\n");

                if(total == 0) {
                    printf("Nenhuma acao cadastrada.\n");
                } else {
                    listar(acao, total);
                }

                printf("\n\n====================================\n");
                printf("Voltando ao menu...\n\n");
                break;

            case 3:
                pesquisar(acao, total);
                break;

            case 4:
                atualizar(acao, total);
                break;

            case 5:
                resumo(acao, total);
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(a != 0);

    return 0;
}

