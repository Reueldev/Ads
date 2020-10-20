#include <string.h>
#include <stdio.h>

int main(void)
{
    int b = 1;
    while(b)
    {
        char var[500];
        printf("Contador de letras\nEscreva o texto a ser contadado:\n");
        scanf("%s" ,&var);
        gets(var);
        int cont = strlen(var);
        printf("Quantidade de caracteres: %d\n" , cont);
        
        printf("Digite 0 para sair, se nao digite 1...\n");
        scanf("%d",&b);
        
        if(b == 0)
        {
            break;
        }
    }
return 0;
}