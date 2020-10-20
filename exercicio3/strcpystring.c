#include <string.h>
#include <stdio.h>

int main(void)
{
    int n = 1;
    while(n)
    {
        char nome[20], copia[20];
        printf("Digite um nome:\n");
        scanf("%s" ,&nome);

        strcpy(copia, nome);
        printf("O nome informado foi: \n");
        puts(copia);

        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&n);
        
        if(n == 0)
        {
            break;
        }
    }
return 0;
}