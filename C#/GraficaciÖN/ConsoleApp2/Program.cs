using System;

namespace MatrizSumaResta
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ingrese el número de filas de la matriz:");
            int filas = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese el número de columnas de la matriz:");
            int columnas = int.Parse(Console.ReadLine());

            int[,] matriz = new int[filas, columnas];

            for (int i = 0; i < filas; i++)
            {
                for (int j = 0; j < columnas; j++)
                {
                    Console.WriteLine($"Ingrese el valor para la posición [{i},{j}]:");
                    matriz[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("Ingrese la fila del primer elemento:");
            int fila1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese la columna del primer elemento:");
            int columna1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese la fila del segundo elemento:");
            int fila2 = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese la columna del segundo elemento:");
            int columna2 = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese el valor que desea agregar o restar:");
            int valor = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese la operación que desea realizar (+ para sumar, - para restar):");
            string operacion = Console.ReadLine();

            if (operacion == "+")
            {
                matriz[fila1, columna1] += valor;
                matriz[fila2, columna2] += valor;
            }
            else if (operacion == "-")
            {
                matriz[fila1, columna1] -= valor;
                matriz[fila2, columna2] -= valor;
            }
            else
            {
                Console.WriteLine("Operación no válida.");
            }

            Console.WriteLine("Matriz resultante:");

            for (int i = 0; i < filas; i++)
            {
                for (int j = 0; j < columnas; j++)
                {
                    Console.Write(matriz[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}