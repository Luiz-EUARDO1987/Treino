#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"");
    float notas[4] = {0,0,0,0};
    int i = 0;
    float media = 0;
    char estado[250] = "";
    int contador = 0;
   do
    {
        printf("Digite nota %iº\n",i + 1);
        scanf("%f",&notas[i]);
        system("cls || clear");
        //setbuf(notas,NULL);
        fflush(stdin);
        if(notas[i] >= 0 && notas[i] <= 10)
        {
            media += notas[i];
            i++;
        }
        else
        {
            printf("Erro São aceitos noats de zero a dez.\n");
        }

    } while(i < 4);
    media /= i;
    if(media >= 7)
    {
        strcpy(estado, "aprovado");
    }
    else if(media >= 5)
    {
        strcpy(estado, "Recuperação");
    }
    else
    {
        strcpy(estado, "Reprovado");
    }
    printf("media: %.2f\nEstudante: %s\n",media,estado);
    for(contador =0; contador < i; contador++)
    {
        printf("notas %i: %.2fº\n",contador+1,notas[contador]);
    }
    
    return 0;
}