CREATE TABLE Estudiantes (
  ID_Curso Varchar (60) ,
  codigo_estudiante INT Primary Key,
  nombre VARCHAR(MAX),
  apellido VARCHAR(MAX),
  edad INT,
  telefono VARCHAR(MAX),
  cedula VARCHAR(MAX),
  region VARCHAR(MAX),
  FOREIGN KEY (ID_Curso) REFERENCES Talleres_Modulos (Cursos)
  );


INSERT INTO Estudiantes (ID_Curso, codigo_estudiante, nombre, apellido, edad, telefono, cedula, region)
VALUES

('Mecánica Industrial', 390163,'Gregory', 'Pérez', 25, '809-555-1234', '001-1234567-8', 'Santo Domingo'),
('Metrología', 459747, 'Julio', 'González', 23, '809-555-2345', '002-2345678-9', 'Santiago'),
('Mecanica Automotriz', 385190, 'Mannery', 'Santana', 20, '809-555-3456', '003-3456789-0', 'La Vega'),
('Electrónica aplicada a la informatica', 478719, 'Grandeil', 'Díaz', 22, '809-555-4567', '004-4567890-1', 'San Pedro de Macorís'),
('Soldadura de procesos especiales', 804368, 'Ignacio', 'Ramírez', 21, '809-555-5678', '005-5678901-2', 'Puerto Plata'),
('Refigeración', 980614, 'Darling', 'Fernández', 24, '809-555-6789', '006-6789012-3', 'Santo Domingo'),
('Desabolladura y Pintura de Vehículos', 448756, 'Manuel', 'Núñez', 19, '809-555-7890', '007-7890123-4', 'Santiago'),
('Muebles de Madera', 248001, 'Orelys', 'García', 26, '809-555-8901', '008-8901234-5', 'San Juan'),
('Confección Industrial de Prendas de Vestir', 170195, 'Adalberto', 'Reyes', 22, '809-555-9012', '009-9012345-6', 'Azua'),
('Panadería y Repostería', 427559, 'Josias', 'De la Cruz', 23, '809-555-0123', '010-0123456-7', 'Higüey'),
('Electricidad', 121382, 'Jorge', 'Martínez', 21, '809-555-1234', '011-1234567-8', 'San Francisco de Macorís'),
('Telecomunicaciones', 782133, 'María', 'Rodríguez', 20, '809-555-2345', '012-2345678-9', 'Santo Domingo'),
('Informática', 524748, 'Divina', 'Sánchez', 24, '809-555-3456', '013-3456789-0', 'La Romana'),
('Artes Gráficas', 331182,'Daynir', 'Guerrero', 22, '809-555-4567', '014-4567890-1', 'Santo Domingo'),
('Producción de Televisión', 262435,'Alan', 'Peralta', 23, '809-555-5678', '015-5678901-2', 'Santiago'),
('Energías Renovables', 720726,'Ariel', 'Jimenez', 20, '809-123-4567', '001-2345678-9', 'Norte'),
('Masaje', 640564,'Adelso', 'Perez', 22, '809-234-5678', '001-3456789-0', 'Este')

select * from Talleres_Modulos
select * from estudiantes
se