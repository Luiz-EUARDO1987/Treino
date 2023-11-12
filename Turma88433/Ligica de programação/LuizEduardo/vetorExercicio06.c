/*Crie um programa que leia 6 números, armazenando em um
vetor e informe quantos são pares e quantos são ímpares.
Mostre os números informados pelo usuário.*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//função principal
int main()
{
    //variáveis declaradas
    int i =0,par=0,impar=0;
    int numeros[6];
    //estrutura de repetição principal
    do
    {
        //entrada de dados
       printf("Digite o numero: %i\n",i+1);
       scanf("%i", &numeros[i]);
       system("cls || clear");
       //estrutura condicional
       if (numeros[i]%2==0)
       {
        par++;
       }
       else
       {
        impar++;
       }
       
       //adição da variável de controle
       i++;
    } while (i < 6);
    //estrutura de repetição de saída de dados
    printf("Números pares: %i\n",par);
    i =0;
    while(i<6)
    {
        if (numeros[i]%2 ==0)
        {
           printf("%i\n",numeros[i]);
        }
        i++;
    }
    printf("Números impares: %i\n",impar);
    i =0;
    while(i<6)
    {
        if (numeros[i]%2 !=0)
        {
           printf("%i\n",numeros[i]);
        }
        i++;
    }
    
}
