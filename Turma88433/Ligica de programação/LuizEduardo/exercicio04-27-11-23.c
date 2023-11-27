#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct alunoNota
    {
        char nome[200];
        int idade;
        float notas[3];
    };
    int i,j;
    float media[3],soma=0;
    struct alunoNota alunos[3];

    for ( i = 0; i < 3; i++)
    {
        printf("Digite seu nome\n");
        gets(alunos[i].nome);
        system("cls || clear");
        
        printf("Digite sua idade\n");
        scanf("%i", &alunos[i].idade);
        getchar();
        system("cls || clear");
        for ( j = 0; j < 3; j++)
        {
             printf("Digite  as notas\n");
             scanf("%f", &alunos[i].notas[j]);
             soma += (alunos[i]).notas[j];
             system("cls || clear");
             getchar();
        }
        media[i]=soma/(float)3;
    }
    

    for ( i = 0; i < 3; i++)
    {
        printf("nome: %s\n",alunos[i].nome);
        printf("idade: %i\n",alunos[i].idade);
        for ( j = 0; j < 3; j++)
        {
             printf("notas: %.2f\n",alunos[i].notas[j]);
        }
        printf("media: %.2f\n",media[i]);
    }
    
    
    
    return 0;
}