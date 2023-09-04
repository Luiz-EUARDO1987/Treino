Algoritmo "estrurura Condicianal segundo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2023
Var
// Seção de Declarações das variáveis 
Nome, sexo, estadoCivil: caracter
tempoDeCasados:inteiro

Inicio
// Faça um algoritmo que leia o nome, o sexo e o estado civil
//de uma pessoa. Caso sexo seja “F” eestado civil seja “CASADA”,
//solicitar o tempo de casada (anos).
//Por fim, mostre os dados do usuário.

//cotela de dados e atribuições
escreval("Digite seu nome")
leia(nome)
limpatela

escreval("Digite seu sexo")
leia(sexo)
limpatela

escreval("Digite seu estadocivil")
leia(estadoCivil)
limpatela

//Estrutura condicional
se((sexo="feminino")e(estadoCivil="casada"))entao
escreval("Digite quantos anos você está casada")
leia(tempoDeCasados)
limpatela


fimse

    se((sexo= "feminino")e(estadoCivil="casada")) entao
      escreval("nome: ",nome)
      escreval("sexo:",sexo)
      escreval("Estado civil: ",estadoCivil)
      escreval("tempo de casados",tempoDeCasados)

      senao

      escreval("nome: ",nome)
      escreval("sexo:",sexo)
      escreval("Estado civil: ",estadoCivil)

     fimse


Fimalgoritmo