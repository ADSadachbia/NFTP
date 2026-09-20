namespace Tablas_de_multiplicar
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            Calcular = new Button();
            Número = new TextBox();
            Tabla = new ListBox();
            SuspendLayout();
            // 
            // Calcular
            // 
            Calcular.Location = new Point(195, 38);
            Calcular.Name = "Calcular";
            Calcular.Size = new Size(75, 23);
            Calcular.TabIndex = 0;
            Calcular.Text = "Calcular";
            Calcular.UseVisualStyleBackColor = true;
            Calcular.Click += this.button1_Click;
            // 
            // Número
            // 
            Número.Location = new Point(43, 38);
            Número.Name = "Número";
            Número.Size = new Size(100, 23);
            Número.TabIndex = 1;
            Número.TextChanged += textBox1_TextChanged;
            // 
            // Tabla
            // 
            Tabla.FormattingEnabled = true;
            Tabla.ItemHeight = 15;
            Tabla.Location = new Point(104, 85);
            Tabla.Name = "Tabla";
            Tabla.Size = new Size(120, 214);
            Tabla.TabIndex = 2;
            Tabla.SelectedIndexChanged += this.listBox1_SelectedIndexChanged;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(421, 383);
            Controls.Add(Tabla);
            Controls.Add(Número);
            Controls.Add(Calcular);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button Calcular;
        private TextBox Número;
        private ListBox Tabla;
    }
}