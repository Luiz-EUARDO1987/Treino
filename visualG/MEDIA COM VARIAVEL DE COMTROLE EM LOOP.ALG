Algoritmo "media com variavel de comtrole em loop"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
// Seção de Declarações das variáveis 
media, nota1:real
respoista:caracter
contador:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
//atribuido uma valor a veriavel de controle
respoista <- "sim"

//estrutura de repetição
enquanto respoista = "sim" faca

//atribuição da variavel nota
escreval("Digite o valor da nota")
leia(nota1)
limpatela
//estrutura condicional de atrubuição de nota e contador
se(nota1 > -1)e (nota1 < 11)entao

media <- media + nota1
contador <- contador + 1

fimse
//atribuição de variavel de saida do lçoop
escreval("deseja inserir uma nota")
leia(respoista)
limpatela

fimenquanto
//media
media <- media/contador
escreval("media: ",media)


Fimalgoritmo