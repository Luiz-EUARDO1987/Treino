/*Exercício: • Implemente um programa que leia as informações de um livro com
os seguintes dados: 
• Nome
• Autor 
• Categoria
• Preço

Armazene os dados em uma estrutura com vetor para 3 livros.
Mostre os dados do livro.*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    struct fichaLivro 
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
    }livros[3];
    int i=0;
    while (i<3)
    {
        printf("Digite o nome do livro %d:\n",(i+1));
        gets(livros[i].nome);
        system("cls || clear");

        printf("\nDigite o autor do livro %d:\n",(i+1));
        gets(livros[i].autor);
        system("cls || clear");

        printf("\nDigite a categoria do livro %d:\n",(i+1));
        gets(livros[i].categoria);
        system("cls || clear");

        printf("\nDigite o preço do livro %d:\n",(i+1));
        scanf("%f",&livros[i].preco);
        getchar();
        system("cls || clear");
        i++;
    }//fimEnquanto
    for ( i = 0; i < 3; i++)
    {
        printf("\nNome: %s\nAutor: %s\nCategoria: %s\nPreço R$ %.2f\n",livros[i].nome,livros[i].autor,livros[i].categoria,livros[i].preco);
    }
    
    
    return 0;
}