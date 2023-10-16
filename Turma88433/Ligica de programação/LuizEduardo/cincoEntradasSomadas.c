#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int i;
    int soma = 0;
    int resultado = 0;
    int impar =0;
    int par = 0;
    

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %i é numero:\n",i+1);
        scanf("%i",&soma);
        system("cls || clear");
        fflush(stdin);
        if (soma %2 == 0)
        {
            par = par +1;
        }
        else
        {
            impar = impar + 1;
        }
        
        resultado = resultado + soma;
    }
        printf(" resultado: %i\nnumero pares: %i\nnumeros impares: %i",resultado,par,impar);
    return 0;
    
}