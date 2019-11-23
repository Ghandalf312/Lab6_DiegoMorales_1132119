#pragma once
#include "Cuadrado.h"
#include "TrianguloE.h"
#include "PoligonosRegulares.h"
namespace Lab6DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbTriangulo;
	private: System::Windows::Forms::Button^ btnTriangulo;
	private: System::Windows::Forms::Button^ btnCuadrado;

	private: System::Windows::Forms::TextBox^ tbCuadrado;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ tbPoligono;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPoligono2;

	private: System::Windows::Forms::TextBox^ tbPoligono1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbTriangulo = (gcnew System::Windows::Forms::TextBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->tbCuadrado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tbPoligono = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPoligono2 = (gcnew System::Windows::Forms::TextBox());
			this->tbPoligono1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Triángulo Equilátero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(348, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Polígonos Regulares:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cuadrado:";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(16, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(115, 109);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(181, 38);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(115, 109);
			this->panel2->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(351, 38);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(158, 109);
			this->panel3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Medida del lado:";
			// 
			// tbTriangulo
			// 
			this->tbTriangulo->Location = System::Drawing::Point(21, 184);
			this->tbTriangulo->Name = L"tbTriangulo";
			this->tbTriangulo->Size = System::Drawing::Size(100, 20);
			this->tbTriangulo->TabIndex = 7;
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(32, 212);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(75, 23);
			this->btnTriangulo->TabIndex = 8;
			this->btnTriangulo->Text = L"Calcular";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::BtnTriangulo_Click);
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(202, 212);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(75, 23);
			this->btnCuadrado->TabIndex = 11;
			this->btnCuadrado->Text = L"Calcular";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::BtnCuadrado_Click);
			// 
			// tbCuadrado
			// 
			this->tbCuadrado->Location = System::Drawing::Point(191, 184);
			this->tbCuadrado->Name = L"tbCuadrado";
			this->tbCuadrado->Size = System::Drawing::Size(100, 20);
			this->tbCuadrado->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(199, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Medida del lado:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(392, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// tbPoligono
			// 
			this->tbPoligono->Location = System::Drawing::Point(319, 184);
			this->tbPoligono->Name = L"tbPoligono";
			this->tbPoligono->Size = System::Drawing::Size(100, 20);
			this->tbPoligono->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(327, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Medida del lado:";
			// 
			// tbPoligono2
			// 
			this->tbPoligono2->Location = System::Drawing::Point(381, 236);
			this->tbPoligono2->Name = L"tbPoligono2";
			this->tbPoligono2->Size = System::Drawing::Size(100, 20);
			this->tbPoligono2->TabIndex = 15;
			// 
			// tbPoligono1
			// 
			this->tbPoligono1->Location = System::Drawing::Point(437, 184);
			this->tbPoligono1->Name = L"tbPoligono1";
			this->tbPoligono1->Size = System::Drawing::Size(100, 20);
			this->tbPoligono1->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(443, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Número de lados:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(379, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Medida del Apotema:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 290);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPoligono1);
			this->Controls->Add(this->tbPoligono2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tbPoligono);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnCuadrado);
			this->Controls->Add(this->tbCuadrado);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnTriangulo);
			this->Controls->Add(this->tbTriangulo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
 		TrianguloE* tri = new TrianguloE();
		double medida = Convert::ToDouble(tbTriangulo->Text);
		MessageBox::Show("Área del triángulo: " + tri->ObtenerArea(medida).ToString() + "\nPerímetro del triángulo: " + tri->ObtenerPerimetro(medida).ToString());
	}
	private: System::Void BtnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
		Cuadrado* cua = new Cuadrado();
		double medida = Convert::ToDouble(tbCuadrado->Text);
		MessageBox::Show("Área del cuadrado: " + cua->ObtenerArea(medida).ToString() + "\nPerímetro del cuadrado: " + cua->ObtenerPerimetro(medida).ToString());
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PoligonosRegulares* pol = new PoligonosRegulares();
		double Medida = Convert::ToDouble(tbPoligono->Text);
		double NumLados = Convert::ToDouble(tbPoligono1->Text);
		double Apotema = Convert::ToDouble(tbPoligono2->Text);
		MessageBox::Show("Área del Polígono: " + pol->ObtenerArea(NumLados, Medida, Apotema).ToString() + "\nPerímetro del polígono: " + pol->ObtenerPerimetro(NumLados, Medida).ToString());
	}
};
}
