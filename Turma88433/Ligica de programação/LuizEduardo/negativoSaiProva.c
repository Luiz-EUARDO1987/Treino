/*Faça um algoritmo que leia uma quantidade não determinada de números inteiros positivos. Calcule e ao final da leitura dos dados, mostre:
- A quantidade de números; 
- A soma dos números;
- A média dos números. 
O final da leitura acontecerá quando for lido um valor negativo.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0,soma= 0,contador =0;
    float media = 0;
    do
    {
        printf("Dgite o numero: %i\n",contador+1);
        scanf("%i",&numero);
        system("cls || clear");
        if (numero>=0)
        {
            media += numero;
            soma += numero;
            contador++;
        }
        
    } while (numero>=0);
    media /= (float)contador;
    
    printf("Quantidade: %i\nSoma: %i\nMedia: %.2f\n",contador+1,soma,media);
    return 0;
}