/*crie um programa que leia 5 numeros inteiros e, em seguida, mostre na tela
1 a quantidade de numeros pares e impares
2 a quantidade de numeros positivos e negativos
3 a quantidade de numeros inseridos 
4 o maior e o menor numero
5 a media de numero pares
6 a media de numeros impares
7 a media de todos numero inseridos
8 mostra os numeros inseridos na ordem inversa*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    int vetor[5];
    int i =0,menorNumero=0,maiorNumero=0;
    float mediaGeral=0,mediaImpares=0,mediaPar=0;
    int contadorPar=0,contadorGeral=0,ContadoImpar=0,ContadorPositivo=0,contadorNegativo=0;
    //estrutura repetição principal
    do
    {
        printf("Digite um valor: %i\n",i+1);
        scanf("%i", &vetor[i]);
        getchar();
        system("cls || clear");
        //maior e menor numero
        if (i ==0)
        {//Forçando um numero a cer atribuido
            menorNumero = vetor[i];
        }//fimSe
        else if(vetor[i]>maiorNumero)
        {
            maiorNumero = vetor[i];
        }//fimSeNao
        else if (vetor[i]< menorNumero)
        {
            menorNumero = vetor[i];
        }//fimSeNao
        else{}
        //par ou impar
        if (vetor[i] >0 || vetor[i]<0)
        {
         if ( vetor[i] % 2 ==0)
            {
                contadorPar++;
                mediaPar += vetor[i];
            }
            else
            {
                ContadoImpar++;
                mediaImpares += vetor[i];
            }//fimSenao
        }//fimSe
        
        //positivo e negativo
        if (vetor[i] > 0)
        {//positivos
             ContadorPositivo++;
        }//finSe
        else if(vetor[i]<0)
        {//negativos
           contadorNegativo++;
        }//fimSe
        //mediageral
        mediaGeral += vetor[i];
        contadorGeral++;
        i++;
    } while (i < 5);
    //saida de dados
    printf("Pares: %i\n",contadorPar);
    printf("media dos pares: %.1f\n",mediaPar/(float)contadorPar);
    printf("Impares: %i\n",ContadoImpar);
    printf("Media dos impares: %.1f\n",mediaImpares/(float)ContadoImpar);
    printf("\n");
    printf("quantidade de numeros inseridos: %i\n",contadorGeral);
    printf("Media  geral: %.1f\n",mediaGeral/(float)contadorGeral);
    printf("\n");
    printf("Maior Numero: %d\n",maiorNumero);
    printf("Menor Numero: %d\n",menorNumero);
    printf("\n");
    printf("Positivos: %d\n",ContadorPositivo);
    printf("Negativos: %d\n",contadorNegativo);
    printf("\n");
    //saida inversa do vetor
    for ( i = 4; i >= 0; i--)
    {
        printf("Posicao: %i\nvalor: %i\n",i+1,vetor[i]);
    }//fimPara
    
}//fimMain