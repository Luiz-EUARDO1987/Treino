#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    int contador = 0;
    float nota = 0;
    float media = 0;
    char resultado[250] = "";
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
    if(media >= 7)
    {
        strcpy(resultado, "Aprovado");
    }
    else if(nota >= 5 && nota < 7)
    {
        strcpy(resultado, "Recuperação");
    }
    else
    {
        strcpy(resultado,"reprovado");
    }
    printf("situação: %s\nmedia: %.1f",resultado,media);
    return 0;
}