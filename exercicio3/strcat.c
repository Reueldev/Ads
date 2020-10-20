#include <string.h>
#include <stdio.h>

int main(void)
{
    int b = 1;
    while(b)
    {
        char nome[12], nome2[12];
        printf("Digite o primeiro nome:\n");
        scanf("%s" ,&nome);
        printf("Digite o segundo nome:\n");
        scanf("%s" ,&nome2);
        
        puts(strcat(nome, nome2));

        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&b);
        
        if(b == 0)
        {
            break;
        }
    }
return 0;
}