#include <stdio.h>
#include <stdlib.h>

#define menor 18
#define maior 65
 int main()
 {
    int idade;

    printf("Digite sua idade");
    scanf("%i",&idade);
    system("cls || clear");
    fflush(stdin);
if (idade < menor )
{
    if (idade > maior)
    {
        /* code */
    printf("Voce nao e obrigado a votar");
    }
    
}
 else
 {
    printf("Voce e obrigado a votar");
 }
return 0;
 }