#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração e atribuição de variaveis
    int numero01 = 0;

    printf("Digite um numero\n");
    scanf("%i", &numero01);
    system("cls || clear");

  if (numero01  < 3)
  {
    printf("meno que 3");
  }
  else if (numero01 == 10) 
  {
    printf("igal a dez");
  }
  else if (numero01 < 10)
  {
     printf("menor que 10");
  }
  else
  {
     printf("maior que 10");
  }
  
}