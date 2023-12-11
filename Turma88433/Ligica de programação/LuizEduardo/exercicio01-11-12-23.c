#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tamanhoNome 250
#define tam 3
struct alunosFicha
{
   char nome[tamanhoNome];
   int anoNascimento;
   float notas[tam];
    float media;
}alunos[tam];
char* estado(float  media);
float mediaF(float notas[]);
int main()
{
    int nota[tam];
    float media;
    int i;
    char* retorno[tamanhoNome];
    for ( i = 0; i < tam; i++)
    {
        printf("\tDigite a nota: %i\n\t", i+1);
        scanf("%f", &nota[i]);
        getchar();
        system("cls || clear");
    }
    media = mediaF(nota);
    strcpy(retorno,estado(media));
    printf("Media: %.2f",media);
    printf("Resultado: %s",retorno);
    return 0;
}

float mediaF(float notas[])
{
    float media;
    int i;
    for ( i = 0; i < tam; i++)
    {
        media += notas[i];
    }
    media /=(float)tam;
    return media;
}

char* estado(float media)
{
    char voltar[tamanhoNome];
    if (media>7)
    {
       strcpy(voltar,"aprovado");
    }
    else
    {
        strcpy(voltar,"Reprovado");
    }
    return voltar;
}