namespace Programa_que_cuente_los_numeros_de1_al_50__uy_ta_del_6_al_60
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("numero del 1 al 50:");{
            for (int i=1;i<= 50; i++)
                {
                    Console.Write("{0}", i);

                } 
        }
        Console.WriteLine("numero impares del 6 al 60:");
            for (int i=2;i<= 60;i++) 
             if (i% 2 != 0) { 
             Console.Write("{0}",i)
                }

    }
}