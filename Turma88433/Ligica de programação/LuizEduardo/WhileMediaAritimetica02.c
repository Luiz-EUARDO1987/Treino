#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declara??es de vari?veis
    int numero = 0 ;
    float media = 0;
    int i = 0;
    int contador = 0;

    //estruturade repeti??es. variavel de saida menos um.
    do
    {
        //atribui??es de variavel numero.
        printf("Digite o numero %i\n",contador+1);
        scanf("%i", &numero);
        system("cls || clear");
        fflush(stdin);

        //estrutura de decis?o se. para ignorar valores menores que zero.
        if(numero > 0)
        {
            // opera de soma. atruindo os valores a media.
            media += numero;
            // contando o numero de vezes que ouvi soma.
            contador++;
        }
        
    }while(numero > -1);

    //dividindo o numero de intera??es pela soma total dos numero.
    media /= contador;

    //saida da opera??es.
    printf("media: %.2f\n",media);

    return 0;
}