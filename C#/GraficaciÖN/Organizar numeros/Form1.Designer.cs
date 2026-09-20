namespace Organizar_numeros
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
            lblMayor = new Label();
            txtNumero1 = new TextBox();
            btnCalcular = new Button();
            txtNumero2 = new TextBox();
            lblMediano = new Label();
            txtNumero3 = new TextBox();
            lblMenor = new Label();
            SuspendLayout();
            // 
            // lblMayor
            // 
            lblMayor.AutoSize = true;
            lblMayor.Location = new Point(358, 117);
            lblMayor.Name = "lblMayor";
            lblMayor.Size = new Size(41, 15);
            lblMayor.TabIndex = 0;
            lblMayor.Text = "Mayor";
            // 
            // txtNumero1
            // 
            txtNumero1.Location = new Point(234, 109);
            txtNumero1.Name = "txtNumero1";
            txtNumero1.Size = new Size(100, 23);
            txtNumero1.TabIndex = 1;
            txtNumero1.TextChanged += Numero1_TextChanged;
            // 
            // btnCalcular
            // 
            btnCalcular.Location = new Point(321, 225);
            btnCalcular.Name = "btnCalcular";
            btnCalcular.Size = new Size(75, 23);
            btnCalcular.TabIndex = 2;
            btnCalcular.Text = "Organizar";
            btnCalcular.UseVisualStyleBackColor = true;
            // 
            // txtNumero2
            // 
            txtNumero2.Location = new Point(234, 151);
            txtNumero2.Name = "txtNumero2";
            txtNumero2.Size = new Size(100, 23);
            txtNumero2.TabIndex = 4;
            // 
            // lblMediano
            // 
            lblMediano.AutoSize = true;
            lblMediano.Location = new Point(358, 159);
            lblMediano.Name = "lblMediano";
            lblMediano.Size = new Size(41, 15);
            lblMediano.TabIndex = 3;
            lblMediano.Text = "Medio";
            // 
            // txtNumero3
            // 
            txtNumero3.Location = new Point(234, 196);
            txtNumero3.Name = "txtNumero3";
            txtNumero3.Size = new Size(100, 23);
            txtNumero3.TabIndex = 6;
            // 
            // lblMenor
            // 
            lblMenor.AutoSize = true;
            lblMenor.Location = new Point(358, 204);
            lblMenor.Name = "lblMenor";
            lblMenor.Size = new Size(42, 15);
            lblMenor.TabIndex = 5;
            lblMenor.Text = "Menor";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(txtNumero3);
            Controls.Add(lblMenor);
            Controls.Add(txtNumero2);
            Controls.Add(lblMediano);
            Controls.Add(btnCalcular);
            Controls.Add(txtNumero1);
            Controls.Add(lblMayor);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label lblMayor;
        private TextBox txtNumero1;
        private Button btnCalcular;
        private TextBox txtNumero2;
        private Label lblMediano;
        private TextBox txtNumero3;
        private Label lblMenor;
    }
}