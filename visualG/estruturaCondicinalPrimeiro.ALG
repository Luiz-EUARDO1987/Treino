Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Se��o de Declara��es das vari�veis 
alfa, beta, celta: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
//1. Fa�a um algoritmo que leia os valores A, B, C e imprima
// na tela se a soma de A + B � menor
//que C, caso contr�rio, imprima que a A + B � maior que C.
// ler os tr�s valores e fazer as devidas atribui��es
escreval("Digite o primeiro valor")
leia(alfa)
limpatela

escreval("Digite o segundo valor")
leia(beta)
limpatela

escreval("Digite o terceiro valor")
leia(celta)
limpatela

// imprementa��o das condicionais

se((alfa+beta)<celta) entao
escreval("a soma de primeiro com o segundo numero � ",(alfa+beta)," menor que ", celta)
senao
     se((alfa+beta)> celta)entao
     escreval("a soma de primeiro com o segundo numero � ",(alfa+beta)," Maior que ", celta)

     senao
     escreval("a soma de primeiro com o segundo numero � ",(alfa+beta)," � igual a ", celta)

     fimse
fimse

Fimalgoritmo