namespace TablaMultiplicar
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
            btnCalcular = new Button();
            txtNumero = new TextBox();
            TablasMultiplicar = new ListBox();
            SuspendLayout();
            // 
            // btnCalcular
            // 
            btnCalcular.Location = new Point(274, 83);
            btnCalcular.Name = "btnCalcular";
            btnCalcular.Size = new Size(75, 23);
            btnCalcular.TabIndex = 0;
            btnCalcular.Text = "Calcular";
            btnCalcular.UseVisualStyleBackColor = true;
            btnCalcular.Click += button1_Click;
            // 
            // txtNumero
            // 
            txtNumero.Location = new Point(56, 83);
            txtNumero.Name = "txtNumero";
            txtNumero.Size = new Size(100, 23);
            txtNumero.TabIndex = 3;
            txtNumero.TextChanged += textBox1_TextChanged;
            // 
            // TablasMultiplicar
            // 
            TablasMultiplicar.Enabled = false;
            TablasMultiplicar.FormattingEnabled = true;
            TablasMultiplicar.ItemHeight = 15;
            TablasMultiplicar.Location = new Point(156, 112);
            TablasMultiplicar.Name = "TablasMultiplicar";
            TablasMultiplicar.Size = new Size(120, 229);
            TablasMultiplicar.TabIndex = 4;
            TablasMultiplicar.SelectedIndexChanged += listBox1_SelectedIndexChanged;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(352, 345);
            Controls.Add(TablasMultiplicar);
            Controls.Add(txtNumero);
            Controls.Add(btnCalcular);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnCalcular;
        private TextBox txtNumero;
        private ListBox TablasMultiplicar;
    }
}