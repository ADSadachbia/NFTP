Create Database INFOTEP

USE INFOTEP

create table Talleres_Modulos
(
Cursos varchar (60) primary key not null,
Modulos varchar (900) not null,
Duracion nchar (20) null
)

insert into Talleres_Modulos (Cursos, Modulos, Duracion)
values 
('Mecánica Industrial', 'Matemática básica aplicada a la Mecánica industrial, Seguridad, Salud Ocupacional y Medio, Comunicación Oral y Escrita, Introducción a la Metrología, Introducción al Dibujo Técnico, Mecanización de Piezas con Herramientas Manuales, Conformación de Piezas con Herramientas Manuales, Afilado Básico de Herramientas, Preparación y Mecanización de Piezas con Máquinas básicas', NULL),

('Metrología', 'Cursos varios sin modulo especifico', 'Duracion'),

('Mecanica Automotriz', 'Electrónica del Automóvil', 'Duracion'),

('Electrónica aplicada a la informatica', 'Fundamentos de Informática y Sistemas Operativos, Manejo de Internet.', 'Duracion'),

('Soldadura de procesos especiales', 'Dibujo Técnico III., Ciencias de los Materiales, Mantenimiento Preventivo de Equipos, Soldaduras Especiales Mig/Mag, Soldaduras Especiales Tig', 'Duracion'),

('Refigeración', 'Reparador e Instalador de Equipos de Refrigeración y A/A Doméstico', 'Duracion'),

('Desabolladura y Pintura de Vehículos', 'Cursos Varios sin modulo especifico', '50'),

('Muebles de Madera', 'Cursos varios sin modulo especifico', 'Duracion'),

('Confección Industrial de Prendas de Vestir', 'Operador (a) de máquinas planas industriales de una aguja, Operador (a) de máquinas de coser industriales especiales, Confeccionista industrial de ropa femenina básica I, Patronista industrial de nudos y drapeados, Confeccionista industrial en diseño de alta costura, Confeccionista industrial en diseño de ropa femenina, Manejador (a) informática aplicada, Manejador (a) de inglés técnico aplicado,Pantrista (patronista) industrial de prendas de vestir básica,Confeccionista industrial en diseño de ropa femenina con nudos y drapeados', 'Duracion'),

('Panadería y Repostería', 'Sin modulo especifico', '60'),

('Electricidad', 'Sin Modulo especifico', 'Duracion'),

('Telecomunicaciones', 'Distintos sub-cursos con sus respectivos modulos', 'Duracion'),

('Informática', 'Distintos sub-cursos con sus respectivos modulos', 'Duracion'),

('Artes Gráficas', 'Distintos sub-cursos sin modulos especificos', 'Duracion'),

('Producción de Televisión', 'Formatos de Guiones Televisivos, Actividades de la Producción, Planificación y Organización de la Producción Informativa, Revista de Variedades y Entretenimiento, Planificación y Organización de la Producción de Eventos', 'Duracion'),

('Energías Renovables', 'Sin Datos', 'Duracion'),

('Masaje', 'Sin modulos especificos', 'Duracion')


select * from Por_región


Update Talleres_Modulos set Duración=60   where Cursos='Confección industrial de prendas de vestir'




Select Duración As D from Talleres_Modulos 
inner 
Select Talleres as T from Por_región










Alter table Talleres_Modulos Alter Column Duración Varchar (20) 

Alter table Talleres_Modulos Drop Column Duración

Alter table Talleres_Modulos ADD Duración time  null



