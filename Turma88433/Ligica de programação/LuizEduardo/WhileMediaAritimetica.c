#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero = 0 ;
    float media = 0;
    int i = 0;
    int contador = 0;
    do
    {
        printf("Digite o numero %i\n",contador+1);
        scanf("%i", &numero);
        system("cls || clear");
        fflush(stdin);
        if(numero > 0)
        {
            media += numero;
            contador++;
        }
        else if(numero < 0)
        {
            i++;
        }else 
        {
            printf("Zero não entra na media");
        }
    }while(i < 1);
    media /= contador;
    printf("media: %.2f\n",media);
    return 0;
}