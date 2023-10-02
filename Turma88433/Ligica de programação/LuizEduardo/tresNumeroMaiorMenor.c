#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    int numero1,numero2,numero3;
    printf("Digite o primeiro numero\n");
    scanf("%i",&numero1);
    system("cls || clear");
    fflush(stdin);

    printf("Digite o segundo numero\n");
    scanf("%i",&numero2);
    system("cls || clear");
    fflush(stdin);

    printf("digite o terceiro numero\n");
    scanf("%i",&numero3);
    system("cls || clear");
    fflush(stdin);
    if (numero2 > numero1 && numero2 > numero3)
    {
        /* code */
        printf("maior segundo: %i\n",numero2);
    }
     else if (numero1 > numero2 && numero1 > numero3)
    {
        /* code */
        printf("maior primeiro: %i\n",numero1);
    }
     else if (numero3 > numero2 && numero3 > numero1)
    {
        /* code */
        printf("maior terceiro: %i\n",numero3);
    }
//-----------------------------------------------
 if (numero2 < numero1 && numero2 < numero3)
    {
        /* code */
        printf("menor segundo: %izn",numero2);
    }
     else if (numero1 < numero2 && numero1 < numero3)
    {
        /* code */
        printf("menor primeiro: %i\n",numero1);
    }
     else if (numero3 < numero2 && numero3 < numero1)
    {
        /* code */
        printf("menor terceiro: %i\n",numero2);
    }
 printf("primeiro: %i\n segundo: %i\n terceiro: %i\n",numero1,numero2,numero3);

 }