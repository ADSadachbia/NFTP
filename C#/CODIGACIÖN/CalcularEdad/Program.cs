using System;
namespace EdadCalculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Calculadora de edad");


            DateTime fechaActual = DateTime.Now;


            int añoActual = fechaActual.Year;


            Console.Write("Ingrese su año de nacimiento: ");
            int añoNacimiento = Convert.ToInt16(Console.ReadLine());


            int edad = añoActual - añoNacimiento;


            Console.WriteLine("Su edad es: " + edad + " años");


            Console.ReadKey();
        }
    }
}
