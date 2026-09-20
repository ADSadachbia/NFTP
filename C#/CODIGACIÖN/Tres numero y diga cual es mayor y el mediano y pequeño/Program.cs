using System;

class Program
{
    static void Main(string[] args)
    {
        double mayor;
        double mediano;
        double menor;

        Console.WriteLine("Ingrese el primer numero: ");
        double numero1 = Convert.ToDouble(Console.ReadLine());


        Console.WriteLine("Ingrese el segundo numero: ");
        double numero2 = Convert.ToDouble(Console.ReadLine());


        Console.WriteLine("Ingrese el tercer numero: ");
        double numero3 = Convert.ToDouble(Console.ReadLine());



        if (numero1 >= numero2 && numero1 >= numero3 && numero2 >= numero3)
        {
            mayor = numero1;
            mediano = numero2;
            menor = numero3;
        }

        else if (numero2 >= numero1 && numero2 >= numero3 && numero1 >= numero3)
        {
            mayor = numero2;
            mediano = numero1;
            menor = numero3;
        }
        else if (numero3 >= numero1 && numero3 >= numero2 && numero2 >= numero1)
        {
            mayor = numero3;
            mediano = numero2;
            menor = numero1;
        }
        else
        {
            mayor = numero3;
            mediano = numero1;
            menor = numero2;

        }




        Console.WriteLine("El numero mayor es: " + mayor);

        Console.WriteLine("El numero mediano es: " + mediano);

        Console.WriteLine("El numero menor es: " + menor);




        Console.ReadKey();
    }
}