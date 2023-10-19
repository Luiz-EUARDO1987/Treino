#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declarações de variáveis
    int numero = 0 ;
    float media = 0;
    int i = 0;
    int contador = 0;

    //estruturade repetições. variavel de saida menos um.
    do
    {
        //atribuições de variavel numero.
        printf("Digite o numero %i\n",contador+1);
        scanf("%i", &numero);
        system("cls || clear");
        fflush(stdin);

        //estrutura de decisão se. para ignorar valores menores que zero.
        if(numero > 0)
        {
            // opera de soma. atruindo os valores a media.
            media += numero;
            // contando o numero de vezes que ouvi soma.
            contador++;
        }
        
    }while(numero > -1);

    //dividindo o numero de interações pela soma total dos numero.
    media /= contador;

    //saida da operações.
    printf("media: %.2f\n",media);

    return 0;
}