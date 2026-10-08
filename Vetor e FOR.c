#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b) {
    if (a < b)
        return b;
    else
        return a;
}

int comparaMenor(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}

int main(int argc, char *argv[]) {

    int valor[10];
    int i, maior, menor;

    printf("Digite 10 numeros!\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];

    for (i = 1; i < 10; i++) {
        maior = comparaMaior(maior, valor[i]);
        menor = comparaMenor(menor, valor[i]);
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
