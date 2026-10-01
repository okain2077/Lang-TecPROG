#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ==========================
   PROVA 1
   ========================== */

/* PROVA1 - EX 0 */
void p1_ex0() {
    int v[5], i, encontrou = 0;
    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros consecutivos:\n");
    for (i = 0; i < 4; i++) {
        if (v[i + 1] == v[i] + 1) {
            printf("%d e %d\n", v[i], v[i + 1]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nao existem numeros consecutivos.\n");
    }
}

/* PROVA1 - EX 1 */
void p1_ex1() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (altura <= 0.0f) {
        printf("Altura invalida.\n");
        return;
    }

    imc = peso / (altura * altura);

    printf("\nIMC = %.2f\n", imc);

    if (imc < 18.5f) printf("Classificacao: Abaixo do peso\n");
    else if (imc <= 24.9f) printf("Classificacao: Normal\n");
    else if (imc <= 29.9f) printf("Classificacao: Acima do peso\n");
    else printf("Classificacao: Obeso\n");
}

/* PROVA1 - EX 2 (Torre de Hanoi simples) */
int p1_A = 6, p1_B = 0, p1_C = 0;

void p1_mostrarPinos() {
    printf("A = %d | B = %d | C = %d\n", p1_A, p1_B, p1_C);
}

void p1_atualizarPinos(char origem, char destino, int disco) {
    if (origem == 'A') p1_A -= disco;
    else if (origem == 'B') p1_B -= disco;
    else if (origem == 'C') p1_C -= disco;

    if (destino == 'A') p1_A += disco;
    else if (destino == 'B') p1_B += disco;
    else if (destino == 'C') p1_C += disco;
}

void p1_torreHanoi(int n, char origem, char destino, char aux) {
    if (n == 1) {
        p1_atualizarPinos(origem, destino, 1);
        printf("Mover disco 1: %c -> %c\n", origem, destino);
        p1_mostrarPinos();
    } else {
        p1_torreHanoi(n - 1, origem, aux, destino);
        p1_atualizarPinos(origem, destino, n);
        printf("Mover disco %d: %c -> %c\n", n, origem, destino);
        p1_mostrarPinos();
        p1_torreHanoi(n - 1, aux, destino, origem);
    }
}

void p1_ex2() {
    p1_A = 6; p1_B = 0; p1_C = 0;
    printf("TORRES DE HANOI (3 discos) - situacao inicial:\n");
    p1_mostrarPinos();
    printf("\nMovimentos:\n");
    p1_torreHanoi(3, 'A', 'C', 'B');
    printf("\nSituacao final:\n");
    p1_mostrarPinos();
}

/* ==========================
   PROVA 2
   ========================== */

/* PROVA2 - EX 0:
   Classifica cada um dos 4 números: impar, multiplo de 5, ambos, ou nenhum. */
void p2_ex0() {
    int v[4], i;
    for (i = 0; i < 4; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nClassificacao dos numeros:\n");
    for (i = 0; i < 4; i++) {
        int impar = (v[i] % 2 != 0);
        int mult5 = (v[i] % 5 == 0);

        if (impar && mult5) {
            printf("%d: Impar e multiplo de 5\n", v[i]);
        } else if (impar) {
            printf("%d: Impar\n", v[i]);
        } else if (mult5) {
            printf("%d: Multiplo de 5\n", v[i]);
        } else {
            printf("%d: Nao impar nem multiplo de 5\n", v[i]);
        }
    }
}

/* PROVA2 - EX 1 (mochilas) */
void p2_ex1() {
    int itens, capacidade, mochilas;
    printf("Digite a quantidade total de itens: ");
    scanf("%d", &itens);

    printf("Digite a capacidade maxima de itens por mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("Capacidade invalida.\n");
        return;
    }

    mochilas = itens / capacidade;
    if (itens % capacidade != 0) mochilas++;

    printf("Quantidade de mochilas necessarias: %d\n", mochilas);
}

/* PROVA2 - EX 2:
   Usuario informa o valor e escolhe um codigo de conversao (apenas 1 codigo).
   Lista de codigos apresentada ao usuario. */
double conv_c_to_f(double c) { return c * 1.8 + 32.0; }
double conv_f_to_c(double f) { return (f - 32.0) / 1.8; }
double conv_c_to_k(double c) { return c + 273.15; }
double conv_k_to_c(double k) { return k - 273.15; }
double conv_m_to_mi(double m) { return m / 1609.34; }
double conv_mi_to_m(double mi) { return mi * 1609.34; }
double conv_kg_to_lb(double kg) { return kg * 2.205; }
double conv_lb_to_kg(double lb) { return lb / 2.205; }
double conv_kmh_to_mph(double kmh) { return kmh / 1.609; }
double conv_mph_to_kmh(double mph) { return mph * 1.609; }

void p2_ex2() {
    double valor, resultado;
    int codigo;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    /* Lista de conversoes (um codigo por conversao) */
    printf("\nEscolha o codigo da conversao:\n");
    printf(" 1  -> Celsius (C) -> Fahrenheit (F)\n");
    printf(" 2  -> Fahrenheit (F) -> Celsius (C)\n");
    printf(" 3  -> Celsius (C) -> Kelvin (K)\n");
    printf(" 4  -> Kelvin (K) -> Celsius (C)\n");
    printf(" 5  -> Metro (m) -> Milha (mi)\n");
    printf(" 6  -> Milha (mi) -> Metro (m)\n");
    printf(" 7  -> Quilograma (kg) -> Libra (lb)\n");
    printf(" 8  -> Libra (lb) -> Quilograma (kg)\n");
    printf(" 9  -> km/h -> mph\n");
    printf(" 10 -> mph -> km/h\n");

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        resultado = conv_c_to_f(valor);
        printf("Resultado: %.2lf F\n", resultado);
    } else if (codigo == 2) {
        resultado = conv_f_to_c(valor);
        printf("Resultado: %.2lf C\n", resultado);
    } else if (codigo == 3) {
        resultado = conv_c_to_k(valor);
        printf("Resultado: %.2lf K\n", resultado);
    } else if (codigo == 4) {
        resultado = conv_k_to_c(valor);
        printf("Resultado: %.2lf C\n", resultado);
    } else if (codigo == 5) {
        resultado = conv_m_to_mi(valor);
        printf("Resultado: %.6lf mi\n", resultado);
    } else if (codigo == 6) {
        resultado = conv_mi_to_m(valor);
        printf("Resultado: %.2lf m\n", resultado);
    } else if (codigo == 7) {
        resultado = conv_kg_to_lb(valor);
        printf("Resultado: %.2lf lb\n", resultado);
    } else if (codigo == 8) {
        resultado = conv_lb_to_kg(valor);
        printf("Resultado: %.2lf kg\n", resultado);
    } else if (codigo == 9) {
        resultado = conv_kmh_to_mph(valor);
        printf("Resultado: %.6lf mph\n", resultado);
    } else if (codigo == 10) {
        resultado = conv_mph_to_kmh(valor);
        printf("Resultado: %.2lf km/h\n", resultado);
    } else {
        printf("Codigo invalido.\n");
    }
}

/* ==========================
   PROVA 3
   ========================== */

/* PROVA3 - EX 0 */
void p3_ex0() {
    int total, capacidade;
    printf("Digite a quantidade total de itens: ");
    scanf("%d", &total);

    printf("Digite a capacidade maxima por mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("Capacidade invalida.\n");
        return;
    }

    printf("Mochilas totalmente cheias: %d\n", total / capacidade);
    printf("Itens restantes (sobra): %d\n", total % capacidade);
}

/* PROVA3 - EX 1:
   Perguntas mais descritivas antes do scanf para evitar "enter em caixa vazia". */
void p3_ex1() {
    int a, b, c, temp;
    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);
    printf("Digite o terceiro numero (c): ");
    scanf("%d", &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
        return;
    }

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
}

/* PROVA3 - EX 2:
   Perguntas claras para entrada de a, b e do codigo */
void p3_ex2() {
    double a, b;
    int cod;
    printf("Digite o primeiro valor (a): ");
    scanf("%lf", &a);
    printf("Digite o segundo valor (b): ");
    scanf("%lf", &b);

    printf("Digite o codigo da operacao (1 = >, 2 = <, 3 = ==, 4 = !=): ");
    scanf("%d", &cod);

    if (cod == 1) {
        if (a > b) printf("Verdadeiro\n"); else printf("Falso\n");
    } else if (cod == 2) {
        if (a < b) printf("Verdadeiro\n"); else printf("Falso\n");
    } else if (cod == 3) {
        if (a == b) printf("Verdadeiro\n"); else printf("Falso\n");
    } else if (cod == 4) {
        if (a != b) printf("Verdadeiro\n"); else printf("Falso\n");
    } else {
        printf("operador invalido\n");
    }
}

/* ==========================
   MENU PRINCIPAL
   ========================== */
int main() {
    int prova, ex;
    printf("=== MENU DE PROVAS ===\n");
    printf("Escolha a prova (1, 2 ou 3): ");
    scanf("%d", &prova);

    printf("Escolha o exercicio (0, 1 ou 2): ");
    scanf("%d", &ex);

    switch (prova) {
        case 1:
            if (ex == 0) p1_ex0();
            else if (ex == 1) p1_ex1();
            else if (ex == 2) p1_ex2();
            else printf("Exercicio invalido na prova 1.\n");
            break;

        case 2:
            if (ex == 0) p2_ex0();
            else if (ex == 1) p2_ex1();
            else if (ex == 2) p2_ex2();
            else printf("Exercicio invalido na prova 2.\n");
            break;

        case 3:
            if (ex == 0) p3_ex0();
            else if (ex == 1) p3_ex1();
            else if (ex == 2) p3_ex2();
            else printf("Exercicio invalido na prova 3.\n");
            break;

        default:
            printf("Prova invalida. Escolha 1, 2 ou 3.\n");
    }

    return 0;
}
