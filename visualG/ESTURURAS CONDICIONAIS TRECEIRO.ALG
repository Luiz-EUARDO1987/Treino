Algoritmo "estururas condicionais treceiro"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
primeiroValor, SegundoValor,resultado: inteiro

Inicio
// Fa�a um algoritmo que leia dois valores inteiros A e B se os
//valores forem iguais dever� se somar os dois, caso contr�rio
//multiplique A por B. Ao final de qualquer um dos c�lculos
//deve-se atribuir o resultado para uma vari�vel C e mostrar
//seu conte�do na tela.

//atribui��o de variaveis
 escreval("Digite o primeiro valor")
 leia(primeiroValor)
 limpatela
 
 escreval("Digite o segundo valor")
 leia(segundoValor)
 limpatela
 
 //condicionais
 
 se(primeiroValor= segundoValor)entao
   resultado<-primeiroValor+segundoValor
   escreval("soma: ",resultado)
 senao
   resultado<-primeiroValor*segundoValor
   escreval("multiplica��o: ",resultado)
 fimse

Fimalgoritmo