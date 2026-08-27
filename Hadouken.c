#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a, b, c, r, h, mult, div, sum, sub;
	printf("Entre com os valores de A e B: ");
	scanf("%d %d", &a, &b);
	
	if (a > 0 && b > 0) {
		if (a < 10 && b < 10) {
			if ((a==2 || a==3 || a==5 || a==7) && (b==2 || b==3 || b==5 || b==7)) {
				r = (a*b)/2;
				h = sqrt((pow(a,2) + pow(b,2)));
				printf("Area %d e hipotenusa %d\n", r, h);
			} else {
				sum = a + b;
				sub = a - b;
				mult = a * b;
				div = a / b;
				print("Soma: %d, Sub: %d, Multi: %d, Div: %d.\n", sum, sub, mult, div);
			}
		} else {
			if (a % b == 0) printf("Sim\n"); else printf("Nao\n");
		}
	} else {
		printf("%d %d", (a * -1), (b * -1));
	}
	
	return 0;
}
