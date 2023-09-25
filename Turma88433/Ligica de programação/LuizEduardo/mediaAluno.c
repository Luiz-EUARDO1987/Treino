#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaraçao de variaveis
    float nota1,nota2,media;
    //atribuiçao de variaveis pelo susario.entrada de dados
    printf("Digite a primeira nota: \n");
    scanf("%f",&nota1);
    system("cls || clear");

    printf("Digite a segunda nota: \n");
    scanf("%f",nota2);
    system("cls || clear");
    //opreçao aritimetica
    media = (nota1+nota2)/2;
    //saida de dados.exibindo os dados para o usuario.
    printf("media: %.2f",media);
}