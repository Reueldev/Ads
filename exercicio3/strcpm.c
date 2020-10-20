#include <string.h>
#include <stdio.h>

int main(void)
{
    int b = 1;
    while(b)
    {
        char nome[20], nome2[20];
        printf("Digite dois nomes:\n");
        scanf("%s\n" ,&nome);
        scanf("%s" ,&nome2);
        
        if (strcmp(nome, nome2) == 0)
        {
            printf("Nomes iguais\n");
        }
        else
        {
            printf("Nomes diferentes\n");
        }
        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&b);
        
        if(b == 0)
        {
            break;
        }
    }
return 0;
}