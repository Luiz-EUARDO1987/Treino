Algoritmo "estruturas condicionais nona"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
// Se��o de Declara��es das vari�veis 
valorImprestimo, salario,dezVezes,margemTrinta, boletoMensal:real
 numeroParcelas:inteiro

Inicio
//Uma financeira usa o seguinte crit�rio para conceder empr�stimos: o valor
//total do empr�stimo deve ser at� dez vezes o valor da renda mensal do
//solicitante e o valor da presta��o deve ser no m�ximo 30% da renda mensal do
//solicitante. Escreva um programa que leia a renda mensal de um solicitante,
//o valor total do empr�stimo solicitado e o n�mero de presta��es que o
//solicitante deseja pagar e informe se o empr�stimo pode ou n�o ser concedido.

//atribui��o de variaveis

escreval("digite sua renda mensal")
leia(salario)
limpatela

escreval("digite o valor desejado")
leia(ValorImprestimo)
limpatela

escreval("digite o numero de parcelas desejado")
leia(numeroParcelas)
limpatela

boletoMensal <- valorImprestimo/numeroParcelas
dezVezes <- salario *10
margemTrinta <- (salario * 30)/100

//estruturas condicionais
se((boletoMensal <= margemTrinta) e (valorImprestimo <= dezVezes))entao
escreval("sua solicita��o foi aprovada")
senao
escreval("sua solicita��o foi rejeitada.")
fimse
escreval("sua solicita��o n�o pode ser mais que ",dezVezes)
escreval("seu valor mensal n�o pode ser maior que ",margemTrinta)


Fimalgoritmo