#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tamanhoCha 250
char estado(float media);
    char resultado[tamanhoCha];
int main()
{
    int contador = 0;
    float nota = 0;
    float media = 0;
    setlocale(LC_ALL,"");
    
    do
    {
        printf("Digite a %i nota: \n",contador+1);
        scanf("%f",&nota);
        system("cls || clear");
        if(nota >= 0 && nota <= 10)
        {
            media +=nota; 
            contador++;
        }
        else
        {
            printf("Erro: nota deve ser maior que zero e menor que dez\n");
        }
    }while(contador < 3);
    media = media / contador;
    estado(media);
    //strcpy(resultado,estado(media));
    printf("\tsituação: %s\nmedia: %.1f",resultado,media);
    return 0;
}

char estado(float media)
{
    //char resultado01[tamanhoCha];
    if(media >= 7)
    {
        strcpy(resultado, "Aprovado");
    }
    else if(media>=5)
    {
        strcpy(resultado, "Recuperação");
    }
    else
    {
        strcpy(resultado,"reprovado");
    }
    return resultado[0];
}