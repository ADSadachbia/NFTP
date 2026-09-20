select a.Nombre, a.apellido, a.edad, a.telefono, a.cedula, a.region, b.tanda from Estudiantes a inner join Talleres_Modulos b on a.Cursos=b.Cursos where b.Cursos= 'Mecanica Automotriz' and b.Tanda='Tarde'










select cursos, modulos, duración, tanda from Talleres_Modulos where Cursos= 'Mecanica automotriz'




















Alter table Talleres_modulos add Tanda nvarchar (25)



insert into Talleres_Modulos (ID_Cursos, Modulos,Duración,Tanda) values ('Mecánica automotriz','Mecanica', 60, 'Mañana')

select ID_Cursos from Talleres_Modulos where ID_Cursos= 'Mecanica automotriz'




select * from Talleres_Modulos

Update Talleres_Modulos set duración= 80 where id_cursos= 'mecanica automotriz'