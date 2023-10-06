Algoritmo "estururas condicionais treceiro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
primeiroValor, SegundoValor,resultado: inteiro

Inicio
// Faça um algoritmo que leia dois valores inteiros A e B se os
//valores forem iguais deverá se somar os dois, caso contrário
//multiplique A por B. Ao final de qualquer um dos cálculos
//deve-se atribuir o resultado para uma variável C e mostrar
//seu conteúdo na tela.

//atribuição de variaveis
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
   escreval("multiplicação: ",resultado)
 fimse

Fimalgoritmo