#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    //declaração da variável de interação i
    int i;
    //estrutura de repetição para: usada quando se tem certesa do numero de repetições
    for ( i = 0; i <= 15; i++)
    {
        //estrutura condicional:
        if (i % 2 != 0)
        {
            printf("numero impar e: %i\n",i);
        }
        
    }
    return 0;
}