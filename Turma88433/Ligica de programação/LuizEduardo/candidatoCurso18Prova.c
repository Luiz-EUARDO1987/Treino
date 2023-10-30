/*Um candidato que deseja se inscrever para um curso, contudo, este precisa ter 18 anos ou mais para realizar sua inscrição. Crie um algoritmo que leia os seguintes dados do candidato: 
- Nome;
- Sexo.
- Ano de nascimento;

Com base nos dados solicitados, verifique se o candidato pode se inscrever no curso, caso atenda o critério da idade, mostre os dados do candidato. Caso contrário, mostre a mensagem: "Não é possível realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais." */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char nome[250] = "";
    char sexo;
    int anoNascimento = 0;

    printf("Digite seu nome\n");
    gets(nome);
    
    system("cls || clear");
    
    printf("Digite seu sexo (M)masculino ou (F)para feminino\n");
    scanf("%c",&sexo);
    getchar();
    system("cls || clear");
    sexo = toupper(sexo);
    
    printf("Digite o ano de seu nascimento\n");
    scanf("%i",&anoNascimento);
    system("cls || clear");
    if (2023-anoNascimento >=18)
    {
       printf("Nome: %s\n",nome);
       printf("Sexo: %c\n",sexo);
       printf("idade: %i\n",2023-anoNascimento);
    }
    else
    {
        printf("Não é possível realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais.");
    }//fim do se
    
    return 0;
}