Algoritmo "media com variavel de comtrole em loop"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/09/2023
Var
// Se��o de Declara��es das vari�veis 
media, nota1:real
respoista:caracter
contador:inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
//atribuido uma valor a veriavel de controle
respoista <- "sim"

//estrutura de repeti��o
enquanto respoista = "sim" faca

//atribui��o da variavel nota
escreval("Digite o valor da nota")
leia(nota1)
limpatela
//estrutura condicional de atrubui��o de nota e contador
se(nota1 > -1)e (nota1 < 11)entao

media <- media + nota1
contador <- contador + 1

fimse
//atribui��o de variavel de saida do l�oop
escreval("deseja inserir uma nota")
leia(respoista)
limpatela

fimenquanto
//media
media <- media/contador
escreval("media: ",media)


Fimalgoritmo