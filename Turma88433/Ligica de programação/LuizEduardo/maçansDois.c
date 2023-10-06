#include <stdio.h>
#include <stdlib.h>

int main()
{
    int macas = 0;
    float total = 0;

    printf("Digite quantas macans deseja comprar\n");
    scanf("%i", &macas);
    system("cls || clear");
    fflush(stdin);
    if (macas < 12)
    {
        total = macas * 1.30;
    }
    else
    {
        total = macas * 1;
    }
    printf("Total a pagar\n: %.2f", total);
    return 0;
}