namespace Organizar_Numeros_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalcularNumeros()
        {
            double mayor;
            double mediano;
            double menor;

            double numero1 = 10;  // Primer número
            double numero2 = 5;   // Segundo número
            double numero3 = 8;   // Tercer número

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

            lblMayor.Text = "El número mayor es: " + mayor;
            lblMediano.Text = "El número mediano es: " + mediano;
            lblMenor.Text = "El número menor es: " + menor;
        }
    }
}
