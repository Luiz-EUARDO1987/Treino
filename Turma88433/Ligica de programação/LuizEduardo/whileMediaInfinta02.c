//adicionando as bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
//#define letraN "N"

//criando uma fun��o para converter string
void maiuscula(char s1[], char s2[])//função sem retorno, declarando que serão usados duas  variáveis do tipo string.
{
    int I = 0;//declarando a variável de interação (I).
    while(s1[I] != '\0')//estrutura de repetição,variável s1 vai repetir até (I)ser diferente(\0) que é o ultimo carácter da string.
    {
        s2[I] = toupper(s1[I]);//s2[I] vai receber a mesma posição S1[I] convertida para maiúscula.
        I++;//Interação recebe uma adição de um em cada ciclo de repetição.
    }
    s2[I] = '\0';//quando sair do laço, vai adicionar o carácter que finaliza a string para não ocorrer falhas.
}
//iniciando o corpo principal do programa
int main()
{
    //modificando a linguagem do programa para aceitar a acentua��o gr�fica
    setlocale(LC_ALL,"portuguese");
    //declarando as vari�veis
    float media=0,nota=0;
    int contador=0;
    char estado[250]="Estudando";
    char letraN[250]="N";
    char letraD[250]="D";
    char letraEscolha[250]="";
    int sair=1;
    //estrutura de repeti��o principal
    do
    {
        //menu de escolha
        printf("------ Menu ------\nOp��es\n(D) | Adicionar mais notas.\n(N) | Sair Mostra medias.\n");//Menu de escolha
        //scanf("%s", &letraEscolha[250]);
        gets(letraEscolha,250);//entrada de dados d usuário
        //getchar();
        system("cls || clear");//limpar tela
        maiuscula(letraEscolha,letraEscolha);//chamando a função para as letra serem convertidas para maiúsculas
       

        if(strcmp(letraD,letraEscolha)==0)//função condicional com uma comparação de strings.
        {
            do//estrutura de repetição do-while para as notas
            {
                
            printf("Digite a nota: %i\n",contador+1);// informação para o usuário saber o que esta sendo solicitado.
            scanf("%f", &nota);//entrada de dados, nota
            system("cls || clear");//limpar tela
            if(nota>=0 && nota<=10)//estrutura de decisão para media e contador
            {
                media += nota;
                contador++;
            }
            }while(nota <0 || nota >10);
        }
        else   if(strcmp(letraN,letraEscolha)==0)sair =0;//estrutura condicional para Saida
        //teste para saber o que esta ocorrendo com as variáveis
       printf(" letraEscolhida = %s\n letraN = %s\n",letraEscolha,letraN);
       printf(" Sair = %i\ncontinuar: %s\n",sair,letraD);
       printf(" contador = %i\nmedia: %.1f\n",contador,media);
       sleep(5);// pausa cinco segundos.
       system("cls || clear");
    }while(sair != 0);
    media /= contador;
    if(media > 7)//condicional Aprovado,Recuperação e Reprovado.
    {
        strcpy(estado,"Aprovado");
    }
    else if(media > 5)
    {
        strcpy(estado,"Recuperação");
    }
    else
    {
        strcpy(estado,"Reprovado");
    }
    printf("media: %.1f\n",media);
    printf("media: %s\n",estado);
    return 0;
}

