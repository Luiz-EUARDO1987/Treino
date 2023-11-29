#include<stdio.h>
#include<stdlib.h>
int main()
{
    float desconto(float preco);
    struct bibliotecaLivros
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
    }livros[3];
    //struct bibliotecaLivros livros[3];
    int i=0;
    float desc[3]={0};
    float transporte;
    do
    {
        printf("\nDigite o nome do livro: ");
        gets(livros[i].nome);
        system("cls || clear");

        printf("\nDigite o autor do livro: ");
        gets(livros[i].autor);
        system("cls || clear");

        printf("\nDigite a categoria do livro: ");
        gets(livros[i].categoria);
        system("cls || clear");

        printf("\nDigite o preço do livro: ");
        scanf("%f",&livros[i].preco);
        getchar();
        system("cls || clear");
        i++;

        transporte = livros[i].preco;
        transporte = desconto(transporte);
        

    } while (i<3);
   for ( i = 0; i < 3; i++)
   {
     printf("\nNome: %s\nAutor: %s\nCategoria: %s\nPreco: %.2f\ndesconto: %.2f",livros[i].nome,livros[i].autor,livros[i].categoria,livros[i].preco,desc[i]);
   }
 
    return 0;
}//fimMain
float desconto(float precoDesconto)
{
    float resultado;
    if (precoDesconto >=100) 
    {
       return resultado=(precoDesconto*10)/100;
    }
    else if (precoDesconto>=50) 
    {
       return resultado=(precoDesconto*5)/100; 
    }
    else
    {
       return resultado =0;
    }
   
}