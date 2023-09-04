Algoritmo "exercicio01"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
numero1,numero2:inteiro
resultado:real

operacao:caracter

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

//atribuição de valores
escreval("digite o primeiro numero")
leia(numero1)
limpatela

escreval("Dgite o segundo numero")
leia(numero2)
limpatela

escreval("Dgite a opreação desejada")
leia(operacao)
limpatela

//estrutura condicional
escolha  operacao

caso "-"
resultado <- numero1 - numero2
escreval("subtração ", resultado)

caso "+"
resultado <- numero1 + numero2
escreval("soma ", resultado)

caso "*"
resultado <- numero1 * numero2
escreval("multiplicação ", resultado)

caso "/"
resultado <- numero1 / numero2
escreval("divisão ", resultado)

fimescolha




Fimalgoritmo