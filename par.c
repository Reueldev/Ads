#include <stdio.h>

int main() {
    int num = 0;
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num != 0) {
        if (num % 2 == 0) {
        	printf("\nO numero %d e par!\n", num);
        } else {
            printf ("\nO numero %d nao e par!\n", num);
            }
    } else {
        printf ("\nEntrada INVALIDA!\n");
        }

return 0;

}