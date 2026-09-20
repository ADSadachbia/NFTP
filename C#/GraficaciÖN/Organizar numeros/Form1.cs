namespace Organizar_numeros
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Numero1_TextChanged(object sender, EventArgs e)
        {

        }
        private void btnCalcular_Click(object sender, EventArgs e)
        {
            double mayor;
            double mediano;
            double menor;

            double numero1 = Convert.ToDouble(txtNumero1.Text);
            double numero2 = Convert.ToDouble(txtNumero2.Text);
            double numero3 = Convert.ToDouble(txtNumero3.Text);

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

            lblMayor.Text = "El número mayor es: " + mayor.ToString();
            lblMediano.Text = "El número mediano es: " + mediano.ToString();
            lblMenor.Text = "El número menor es: " + menor.ToString();
        }
    }
}


