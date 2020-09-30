#include <stdio.h>

int main() {
	int quant, razao;
	int pa = 0;
	int i;
	
	printf ("Digite a quant da PA: ");
	scanf ("%d", &quant);
	printf ("Digite a razao da PA: ");
	scanf ("%d", &razao);
	
	for (i = 1; i <= quant; i++) {
		if (i == quant) {
			printf ("%d.", pa);
			break;
		}
		printf ("%d, ", pa);
		pa += razao;
	}
	
	return 0;
}