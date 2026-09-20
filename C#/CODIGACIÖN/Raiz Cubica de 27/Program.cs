namespace Raiz_Cubica
{
    class Program
    {
        static void Main()
        {
            double numero = 27;
            double raizCubica = Math.Pow(numero, 1.0 / 3.0);

            Console.WriteLine("La raíz cúbica de {0} es: {1}", numero, raizCubica);
        }
    }

}