-- Active: 1699824460077@@127.0.0.1@3306@CadastroTesteDo
use CadastroTesteDois;
create table pessoas(
    id int not null AUTO_INCREMENT,
    nome varchar (30) not null,
    nascimento date,
    sexo ENUM('M','F'),
    peso decimal(5,2),
    altura decimal(3,2),
    nacionalidade VARCHAR (20) default 'Brasil',
    primary key(id)
) default charset = utf8;