/*crie um programa que recebe 5 numero em um vetor e se o valor for negativo atribua zero no logar.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i =0;

    do
    {
        //atribuição do vetor e remoção do buff
        printf("Digite um numero: %i\n",i+1);
        scanf("%i", &vetor[i]);
        getchar();
        system("cls || clear");
        //condicional para substituir numero negativos por zero
        if (vetor[i]<0)
        {
            vetor[i] =0;
        }
        i++;
    } while (i<5);
    
    for ( i = 0; i < 5; i++)
    {
        printf("numero: %i\nValor: %i\n",i+1,vetor[i]);
    }
    

}