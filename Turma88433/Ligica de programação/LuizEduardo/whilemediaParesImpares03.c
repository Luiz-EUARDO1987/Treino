#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL,"portuguese");
    int pares = 0;
    float media = 0;
    int impares = 0;
    float mediaPares = 0;
    int contador = 0;
    int numero = 0;
    do 
    {
        printf("Digite o numero: %i\n",contador + 1);
        scanf("%i",&numero);
        system("cls || clear");
        fflush(stdin);

        if(numero >0)
        {

            if(numero % 2 == 0)
            {
                mediaPares += numero;
                pares++;
            }
            else
            {
                impares++;
            }
            media += numero;
            contador++;
        }

    }while(numero > 0);
    media /= contador;
    mediaPares /= pares;
    printf("media: %.2f\nmedia numeros pares: %.02f\n quantidade de numeros pares: %i\n quantidade de numeros imparas: %i\n",media,mediaPares,pares,impares);
    return 0;
}