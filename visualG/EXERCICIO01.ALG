Algoritmo "exercicio01"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
numero1,numero2:inteiro
resultado:real

operacao:caracter

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

//atribui��o de valores
escreval("digite o primeiro numero")
leia(numero1)
limpatela

escreval("Dgite o segundo numero")
leia(numero2)
limpatela

escreval("Dgite a oprea��o desejada")
leia(operacao)
limpatela

//estrutura condicional
escolha  operacao

caso "-"
resultado <- numero1 - numero2
escreval("subtra��o ", resultado)

caso "+"
resultado <- numero1 + numero2
escreval("soma ", resultado)

caso "*"
resultado <- numero1 * numero2
escreval("multiplica��o ", resultado)

caso "/"
resultado <- numero1 / numero2
escreval("divis�o ", resultado)

fimescolha




Fimalgoritmo