#include <stdio.h>

int main() {
	int quant, razao;
	int i;;
	int cont = 1;
	
	printf ("Digite a quant PG: ");
	scanf ("%d", &quant);
	printf ("Digite a razao da PG: ");
	scanf ("%d", &razao);
	
	for (i = cont; cont < quant; i = i * razao) {
		cont++;
		if (i == quant || i < 0) {
			printf ("%d.", i);
			return 0;
		}
	printf ("%d, ", i);
	}

	return 0;
}