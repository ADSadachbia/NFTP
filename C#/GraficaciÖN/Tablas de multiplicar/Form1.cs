namespace Tablas_de_multiplicar
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            using System;
            using System.Windows.Forms;
            private void button1_Click(object sender, EventArgs e)
            {

            }
            private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
            {

            }namespace TablaMultiplicar
    {
        public partial class MainForm : Form
        {
            public MainForm()
            {
                InitializeComponent();
            }

            private void btnCalcular_Click(object sender, EventArgs e)
            {
                if (int.TryParse(txtNumero.Text, out int numero))
                {
                    lstTabla.Items.Clear();
                    for (int i = 1; i <= 12; i++)
                    {
                        int resultado = numero * i;
                        lstTabla.Items.Add($"{numero} x {i} = {resultado}");
                    }
                }
                else
                {
                    MessageBox.Show("Por favor, ingrese un número válido.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }
    }

}
    }
}