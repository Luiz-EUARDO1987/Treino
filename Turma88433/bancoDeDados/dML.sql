use CadastroTesteDois;
insert into pessoas
(nome, nascimento, sexo, peso, altura, nacionalidade)
value
('Godofredo', '1984-01-02', 'M', '78.5', '1.83', 'Brasil');

select * from pessoas;

insert into pessoas
(nome, nascimento, sexo, peso, altura, nacionalidade)
VALUE
('Maria', '1999-12-30', 'F', '55.6', '1.30','Portugal');

select * from pessoas;

insert into pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
VALUE
(default, 'Creusa', '1920-12-30', 'F', '50.6', '1.65', default);

select * from pessoas;