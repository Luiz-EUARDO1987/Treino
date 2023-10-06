Algoritmo "estruturas condicionais nona"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
// Seção de Declarações das variáveis 
valorImprestimo, salario,dezVezes,margemTrinta, boletoMensal:real
 numeroParcelas:inteiro

Inicio
//Uma financeira usa o seguinte critério para conceder empréstimos: o valor
//total do empréstimo deve ser até dez vezes o valor da renda mensal do
//solicitante e o valor da prestação deve ser no máximo 30% da renda mensal do
//solicitante. Escreva um programa que leia a renda mensal de um solicitante,
//o valor total do empréstimo solicitado e o número de prestações que o
//solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido.

//atribuição de variaveis

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
escreval("sua solicitação foi aprovada")
senao
escreval("sua solicitação foi rejeitada.")
fimse
escreval("sua solicitação não pode ser mais que ",dezVezes)
escreval("seu valor mensal não pode ser maior que ",margemTrinta)


Fimalgoritmo