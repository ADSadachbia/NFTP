namespace La_raiz_cuadrada
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double num ;
            Console.WriteLine("Escribe el Valor");
            num=Convert.ToDouble(Console.ReadLine());


            double raiz = Math.Sqrt(num); 
            Console.WriteLine("raiz cuadrada de {0} es {1}",num,raiz);

            Console.ReadKey();
        }
    }
}