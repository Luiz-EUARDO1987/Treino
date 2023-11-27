#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    struct alunoNota
    {
        char nome[200];
        int idade;
        float notas[3];
        char estado[200];
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

        soma=0;
        for ( j = 0; j < 3; j++)
        {
             printf("Digite  as notas\n");
             scanf("%f", &alunos[i].notas[j]);
             soma += (alunos[i]).notas[j];
             system("cls || clear");
             getchar();
        }
        media[i]=soma/(float)3;
        if (media[i]>=7)
        {
            strcpy(alunos[i].estado,"Aprovado!");
        }
        else if (media[i]>=5)
        {
            strcpy(alunos[i].estado,"Recuperação");         
        }
        else
        {
            strcpy(alunos[i].estado,"Reprovado");
        }
        
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
        printf("Estado: %s\n",alunos[i].estado);
    }
    
    
    
    return 0;
}