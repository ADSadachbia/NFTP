using System;
using System.Timers;

namespace Interes_simple
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            double principal = 100; double tasa = 0.15; int tiempo = 10;
            {
                double interes = principal * tasa * tiempo;
                Console.WriteLine("El interes es {0}: Pues {1} * {2} * {3} : ", interes, principal, tasa, tiempo);
                
            }
            
        }
    }
}