#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota = 0;
    float media = 0;
    int i = 0;
    do 
    {
            printf("Digite a nota:\n");
            scanf("%f",&nota);
            system("cls || clear");
        if(nota >= 0 && nota <= 10)
        {
            media+=nota;
            i++;
        }
    }while(i < 2);
    media = media/2; 
    printf("media: %.2f",media);
    return 0;
}