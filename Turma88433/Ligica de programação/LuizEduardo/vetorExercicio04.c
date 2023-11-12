/*Crie um programa que leia 5 números, armazenando em um
vetor e informe qual é o menor número e o maior.
Mostre os números informados pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cincoNumero[5];
    int i = 0;
    int maior = 0;
    int menor = 0;
    do
    {
        printf("Digite o numero: %i\n",i+1);
        scanf("%i", &cincoNumero[i]);
        system("cls || clear");

        if (i == 0)
        {
            menor = cincoNumero[i];
        }
        

        if (cincoNumero[i]> maior)
        {
           maior = cincoNumero[i];
        }
        else if (cincoNumero[i] < menor)
        {
            menor = cincoNumero[i];
        }
        else{}
        
        i++;
    } while (i <5);
    
    printf("maior numero: %i\n Menor numero: %i",maior,menor);
    
}