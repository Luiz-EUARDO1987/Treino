#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    float total, numeroMacas;

    printf("Digite o numero de macas que deseja comprar.\n");
    scanf("%f",&numeroMacas);
    system("cls || clear");
    fflush(stdin);

    if (numeroMacas >= 12)
    {
     total = numeroMacas * 1;
    }
    else
    {
        total = numeroMacas * 1.3;
    }
    printf("total a pagar\n: %.2f.\n",total);
    
    return 0;
}