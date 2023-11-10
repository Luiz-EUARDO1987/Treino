#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//declaração de variáveis
int  i=0;
int vetor[5] = {9,8,7,6,5};
int saida=1;
int transporte = 0;

do
{
    saida--;
    i =0;
    while (vetor[i] != '\0')
    {

        printf("segundo while.\n vetor: %i\n",vetor[i]);
        if (vetor[i+1]!= '\0')
        {
            /* code */
        if (vetor[i] > vetor[i+1])
        {
            transporte = vetor[i];
            vetor[i] = vetor [i+1];
            vetor[i+1] = transporte;
            printf("segundo while.\n vetor: %i\n",vetor[i]);
            sleep(2);
           printf("if01");
          if (saida < 1)
          {
            saida++;
          }
          
        }//fim se
        }//fim se
        
        
       i++;
    }//fin enquanto
    vetor[i] = '\0';
    
   printf("Primeiro do while\n");

} while (saida != 0);

system("cls || clear");

for ( i = 0; vetor[i] != '\0'; i++)
{
   printf("%i\n",vetor[i]);
}



}//fim main