namespace Interés_Simple_pero_Mejor
{
 class Program
 { 
  private static void Main()
  {
        Console.WriteLine("Cálculo de interés simple");

        Console.Write("Ingrese el monto principal: ");
        double principal = Convert.ToDouble(Console.ReadLine());

        Console.Write("Ingrese la tasa de interés (en decimal): ");
        double tasa = Convert.ToDouble(Console.ReadLine());

        Console.Write("Ingrese el período de tiempo (en años): ");
        int tiempo = Convert.ToInt32(Console.ReadLine());

        double calcularInteresSimple(double principal, double tasa, int tiempo)
   {
        double interes = principal * tasa * tiempo;
        return interes;
   }
        double interes = calcularInteresSimple(principal, tasa, tiempo);

        Console.WriteLine("El interés simple es: " + interes);

        Console.ReadKey();
  }

    
 }
}
