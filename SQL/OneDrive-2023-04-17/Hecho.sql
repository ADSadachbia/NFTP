Create database INFOTEP

use INFOTEP


Create table Por_región
(
Id INT primary key identity (1,1) not null,
Región varchar (50) not null,
Ubicado text not null,
Talleres text not null,
)
Insert into Por_región (Región, Ubicado, Talleres) 
values ('Metropolitana', 'Santo Domingo', 'Electronica'), ('Josefa Brea', 'Calle Josefa Brea #57', 'NuC'), ('Josefa Brea', 'CallJosefaBrea #57', 'Nu C')


select * from Por_región