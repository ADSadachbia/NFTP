namespace Edad
{


    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Calculadora de edad");
            Console.WriteLine("--------------------");

            DateTime fechaActual = DateTime.Now;

            Console.Write("Ingrese su fecha de nacimiento (yyyy-mm-dd): ");
            DateTime fechaNacimiento = DateTime.Parse(Console.ReadLine());


            int edad = fechaActual.Year - fechaNacimiento.Year;


            if ((fechaActual.Month < fechaNacimiento.Month) || (fechaActual.Month == fechaNacimiento.Month && fechaActual.Day < fechaNacimiento.Day))
            {
                edad--;
            }

            Console.WriteLine("Su edad es: " + edad + " años");
            // Console.WriteLine("El interes es {0}: Pues {1} * {2} * {3} : ", interes, principal, tasa, tiempo);

            Console.ReadKey();
        }
    }

}