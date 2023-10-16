#include <stdio.h>
#include <stdlib.h>


int main(){
//declaração de variavies
    int idade;
    float peso;
    //o char em se so aceita um caracter e com aspas somples
    char sexo;
    // para char caietar uma caideia de caracter deve se especificar  a quantidade
    char nome [30];
//atribuição de variaveis
printf("Digite seu nome\n");
//scanf("%s",&nome);
gets(nome);

printf("Digite seu peso\n");
scanf("%f",&peso);

printf("Digite sua idade\n");
scanf("%d",&idade);

//saidade dos dados. % mais uma letra indica que as variaveis serao chamadas naquele local especificado
printf("nome: %s \n peso: %.2f \n idade: %d \n sexo: %c",nome,peso,idade,sexo);
return 0;
}