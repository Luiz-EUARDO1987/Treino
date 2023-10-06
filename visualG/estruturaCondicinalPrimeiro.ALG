Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
alfa, beta, celta: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
//1. Faça um algoritmo que leia os valores A, B, C e imprima
// na tela se a soma de A + B é menor
//que C, caso contrário, imprima que a A + B é maior que C.
// ler os três valores e fazer as devidas atribuições
escreval("Digite o primeiro valor")
leia(alfa)
limpatela

escreval("Digite o segundo valor")
leia(beta)
limpatela

escreval("Digite o terceiro valor")
leia(celta)
limpatela

// imprementação das condicionais

se((alfa+beta)<celta) entao
escreval("a soma de primeiro com o segundo numero é ",(alfa+beta)," menor que ", celta)
senao
     se((alfa+beta)> celta)entao
     escreval("a soma de primeiro com o segundo numero é ",(alfa+beta)," Maior que ", celta)

     senao
     escreval("a soma de primeiro com o segundo numero é ",(alfa+beta)," é igual a ", celta)

     fimse
fimse

Fimalgoritmo