#include "List.h"
#pragma once


namespace LAB5CESARMEJIA1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Lista nuevalista;
	

	/// <summary>
	/// Resumen de MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtindexof;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ lblcontar;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txtexiste;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblexiste;
	private: System::Windows::Forms::TextBox^ txtcambioindex;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtcambiovalor;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ txtultima;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblultima;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ txtremove;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ txtremoveat;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtindexof = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lblcontar = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtexiste = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblexiste = (gcnew System::Windows::Forms::Label());
			this->txtcambioindex = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtcambiovalor = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->txtultima = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblultima = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txtremove = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->txtremoveat = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Agregar a List";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(728, 29);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(131, 468);
			this->listBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Index Of";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// txtindexof
			// 
			this->txtindexof->Location = System::Drawing::Point(44, 42);
			this->txtindexof->Multiline = true;
			this->txtindexof->Name = L"txtindexof";
			this->txtindexof->Size = System::Drawing::Size(100, 24);
			this->txtindexof->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Index Of";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(751, 517);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// lblcontar
			// 
			this->lblcontar->AutoSize = true;
			this->lblcontar->Location = System::Drawing::Point(14, 96);
			this->lblcontar->Name = L"lblcontar";
			this->lblcontar->Size = System::Drawing::Size(0, 16);
			this->lblcontar->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(64, 34);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Contar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtexiste
			// 
			this->txtexiste->Location = System::Drawing::Point(36, 55);
			this->txtexiste->Multiline = true;
			this->txtexiste->Name = L"txtexiste";
			this->txtexiste->Size = System::Drawing::Size(100, 24);
			this->txtexiste->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(49, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 32);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 32);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Ingrese un elemento \r\npara verificar si existe\r\n";
			// 
			// lblexiste
			// 
			this->lblexiste->AutoSize = true;
			this->lblexiste->Location = System::Drawing::Point(33, 142);
			this->lblexiste->Name = L"lblexiste";
			this->lblexiste->Size = System::Drawing::Size(0, 16);
			this->lblexiste->TabIndex = 16;
			// 
			// txtcambioindex
			// 
			this->txtcambioindex->Location = System::Drawing::Point(24, 52);
			this->txtcambioindex->Multiline = true;
			this->txtcambioindex->Name = L"txtcambioindex";
			this->txtcambioindex->Size = System::Drawing::Size(66, 24);
			this->txtcambioindex->TabIndex = 19;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(63, 106);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 32);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Buscar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 32);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Ingrese elemento y su\r\n index para cambiarlo";
			// 
			// txtcambiovalor
			// 
			this->txtcambiovalor->Location = System::Drawing::Point(96, 52);
			this->txtcambiovalor->Multiline = true;
			this->txtcambiovalor->Name = L"txtcambiovalor";
			this->txtcambiovalor->Size = System::Drawing::Size(75, 24);
			this->txtcambiovalor->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Index";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(115, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Valor";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(51, 89);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 32);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Mostrar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// txtultima
			// 
			this->txtultima->Location = System::Drawing::Point(41, 61);
			this->txtultima->Name = L"txtultima";
			this->txtultima->Size = System::Drawing::Size(100, 22);
			this->txtultima->TabIndex = 24;
			this->txtultima->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 64);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Ingrese un numero para\r\nmostrarle la última \r\nocurrencia\r\n\r\n";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// lblultima
			// 
			this->lblultima->AutoSize = true;
			this->lblultima->Location = System::Drawing::Point(86, 142);
			this->lblultima->Name = L"lblultima";
			this->lblultima->Size = System::Drawing::Size(0, 16);
			this->lblultima->TabIndex = 26;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(49, 89);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 32);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Eliminar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// txtremove
			// 
			this->txtremove->Location = System::Drawing::Point(34, 52);
			this->txtremove->Name = L"txtremove";
			this->txtremove->Size = System::Drawing::Size(100, 22);
			this->txtremove->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 32);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Ingrese un numero para\r\nelimininarlo de la lista\r\n";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(49, 99);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 32);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Eliminar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// txtremoveat
			// 
			this->txtremoveat->Location = System::Drawing::Point(34, 60);
			this->txtremoveat->Name = L"txtremoveat";
			this->txtremoveat->Size = System::Drawing::Size(100, 22);
			this->txtremoveat->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 32);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Ingrese una posicion para\r\neliminarla de la lista\r\n";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(37, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 172);
			this->panel1->TabIndex = 33;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->txtindexof);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(269, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(196, 169);
			this->panel2->TabIndex = 34;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->lblcontar);
			this->panel3->Location = System::Drawing::Point(498, 28);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(193, 169);
			this->panel3->TabIndex = 10;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->txtexiste);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->lblexiste);
			this->panel4->Location = System::Drawing::Point(40, 220);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(193, 169);
			this->panel4->TabIndex = 35;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->txtcambiovalor);
			this->panel5->Controls->Add(this->txtcambioindex);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Location = System::Drawing::Point(269, 220);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(193, 169);
			this->panel5->TabIndex = 36;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->txtultima);
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->lblultima);
			this->panel6->Location = System::Drawing::Point(498, 220);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(193, 166);
			this->panel6->TabIndex = 37;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->txtremove);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Location = System::Drawing::Point(43, 413);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(190, 163);
			this->panel7->TabIndex = 38;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->txtremoveat);
			this->panel8->Controls->Add(this->button9);
			this->panel8->Location = System::Drawing::Point(269, 418);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(190, 160);
			this->panel8->TabIndex = 39;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 620);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		nuevalista.Add(Convert::ToInt32(textBox1->Text));
		for (int i = 0; i <= nuevalista.Count()-1; i++)
		{
			listBox1->Items->Add(Convert::ToString(nuevalista.GetItem(i)));
		}
		textBox1->Text = "";
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = Convert::ToInt32(txtindexof->Text);
	int valor = nuevalista.Count()-1;
	label2->Text = Convert::ToString(nuevalista.GetItem(valor-index));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	nuevalista.Clear();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	lblcontar->Text = "La cantidad de elementos \n en la lista es : " + Convert::ToString(nuevalista.Count());
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	lblexiste->Text = "";
	if (nuevalista.Contains(Convert::ToInt32(txtexiste->Text)))
	{
		lblexiste->Text = "Si existe";
	}
	else
	{
		lblexiste->Text = "No existe";
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int contador = nuevalista.Count(), daniel=contador-Convert::ToInt32(txtcambioindex->Text);
	nuevalista.Insert(daniel, Convert::ToInt32(txtcambiovalor->Text));
	listBox1->Items->Clear();
	for (int i = 0; i <= nuevalista.Count() - 1; i++)
	{
		listBox1->Items->Add(Convert::ToString(nuevalista.GetItem(i)));
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	lblultima->Text = Convert::ToString(nuevalista.LastIndexOf(Convert::ToInt32(txtultima->Text)));

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	nuevalista.Remove(Convert::ToInt32(txtremove->Text));
	listBox1->Items->Clear();
	for (int i = 0; i <= nuevalista.Count() - 1; i++)
	{
		listBox1->Items->Add(Convert::ToString(nuevalista.GetItem(i)));
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	nuevalista.RemoveAt(nuevalista.Count() - 1 - Convert::ToInt32(txtremoveat->Text), nuevalista.Count() - 1);
	for (int i = 0; i <= nuevalista.Count() - 1; i++)
	{
		listBox1->Items->Add(Convert::ToString(nuevalista.GetItem(i)));
	}
}
};
}
