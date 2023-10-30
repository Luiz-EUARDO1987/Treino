/* Escrever um programa de computador que leia 6 números inteiros e, ao final, apresente: 
   - quantos números são pares;
   - quantos números são ímpares.*/
   #include <stdio.h>
   #include <stdlib.h>
   int main()
   {
      int par =0, impar =0,contador =0,numero =0;
      do
      {
         printf("Digite o numero: %i\n",contador+1);
         scanf("%i",&numero);
         system("cls || clear");
         if (numero%2==0)
         {
            par++;
         }
         else
         {
            impar++;
         }
         contador++;
      } while (contador < 6);
      printf("Par: %i\nImpar: %i\n",par,impar);
      return 0;
   }