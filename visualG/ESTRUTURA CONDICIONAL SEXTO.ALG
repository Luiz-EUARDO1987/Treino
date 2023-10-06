Algoritmo "estrutura condicional sexto"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 4/9/2023
Var
// Seção de Declarações das variáveis 
nota1, nota2,nota3,nota4,media:real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
//atribuição de valores para as variaveis
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
// operação e trabuição da media
media <- (nota1 + nota2+ nota3 +nota4) /4

//condicionais
se(media >= 6)entao

escreval("parabéns você está aprovado, sua nota é ", media)

senao
se(media >= 4)entao
escreval("você está em recuperação ",media)
senao
escreval("você está reprovado ",media)
fimse

fimse


Fimalgoritmo