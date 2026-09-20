namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double a, b, suma = 0, resta = 0, multi = 0, divi = 0;
            Console.WriteLine("Entre primer valor");
            a = double.Parse(Console.ReadLine());
            Console.WriteLine("Entre segundo valor");
            b= double.Parse(Console.ReadLine());
            suma = (a + b);
            resta = (a-b);
            multi = (a*b);
            divi = (a/b);
            Console.WriteLine("La Suma es:" + suma,"La resta es" + resta);
            Console.WriteLine("La resta es {0}, la Multipliación es {1}, La división es {2}",resta, multi, divi);
            Console.ReadKey();
        }
    }
}