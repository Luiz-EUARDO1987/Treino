/*Escreva um algoritmo que leia as 5 notas de um aluno. Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente até que sejam informadas as 5 notas.
Após calcular a média aritmética, verifique se o aluno está aprovado ou reprovado, considerando que a média para aprovação é maior ou igual a 7. Caso a média seja menor que 7, o aluno está reprovado. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0,nota = 0;
    float media = 0;
    char resultado[250] ="";

    do
    {
        printf("Digite a %i nota\n",contador+1);
        scanf("%i",&nota);
        getchar();
        system("cls || clear");
       if (nota >= 0 && nota  <= 10)
       {
       media += nota;
       contador++;
       }// fim de se
       
    } while (contador <5);// fim da repetição
    media /= contador;
    if (media >= 7)
    {
        strcpy(resultado,"Aprovado");
    }
    else
    {
        strcpy(resultado,"Reprovado");
    }
    printf("Media: %.2f\n Estatus: %s",media,resultado);
    
    return 0;
}