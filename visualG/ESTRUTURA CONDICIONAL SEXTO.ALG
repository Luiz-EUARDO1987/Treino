Algoritmo "estrutura condicional sexto"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
// Se��o de Declara��es das vari�veis 
nota1, nota2,nota3,nota4,media:real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
//atribui��o de valores para as variaveis
escreval("Digite a primeira nota")
leia(nota1)
limpatela

escreval("Digite a seguda nota")
leia(nota2)
limpatela

escreval("Digite a terceira nota")
leia(nota3)
limpatela

escreval("Digite a quarta nota")
leia(nota4)
limpatela
// opera��o e trabui��o da media
media <- (nota1 + nota2+ nota3 +nota4) /4

//condicionais
se(media >= 6)entao

escreval("parab�ns voc� est� aprovado, sua nota � ", media)

senao
se(media >= 4)entao
escreval("voc� est� em recupera��o ",media)
senao
escreval("voc� est� reprovado ",media)
fimse

fimse


Fimalgoritmo