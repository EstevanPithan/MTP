#pragma once

namespace projGUI2 {

	#define MAXCHARDISP 15
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  Dividido;



	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  Multiplicação;





	private: System::Windows::Forms::Button^  btn7;


	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  Subtração;




	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  Virgula;


	private: System::Windows::Forms::Button^  MudarSinal;

	private: System::Windows::Forms::Button^  Soma;
	private: System::Windows::Forms::Button^  exp;


	private: System::Windows::Forms::Button^  raiz;

	private: System::Windows::Forms::Button^  Fatorial;

	private: System::Windows::Forms::Button^  cls;
	private: System::Windows::Forms::Button^  Igual;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->Dividido = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->Multiplicação = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->Subtração = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->Virgula = (gcnew System::Windows::Forms::Button());
			this->MudarSinal = (gcnew System::Windows::Forms::Button());
			this->Soma = (gcnew System::Windows::Forms::Button());
			this->exp = (gcnew System::Windows::Forms::Button());
			this->raiz = (gcnew System::Windows::Forms::Button());
			this->Fatorial = (gcnew System::Windows::Forms::Button());
			this->cls = (gcnew System::Windows::Forms::Button());
			this->Igual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(253, 68);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Silver;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(26, 238);
			this->btn1->Name = L"btn1";
			this->btn1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn1->Size = System::Drawing::Size(56, 40);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Silver;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(82, 146);
			this->btn8->Name = L"btn8";
			this->btn8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn8->Size = System::Drawing::Size(56, 40);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Silver;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(138, 146);
			this->btn9->Name = L"btn9";
			this->btn9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn9->Size = System::Drawing::Size(56, 40);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// Dividido
			// 
			this->Dividido->BackColor = System::Drawing::Color::Silver;
			this->Dividido->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Dividido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Dividido->Location = System::Drawing::Point(194, 146);
			this->Dividido->Name = L"Dividido";
			this->Dividido->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Dividido->Size = System::Drawing::Size(56, 40);
			this->Dividido->TabIndex = 1;
			this->Dividido->Text = L"÷";
			this->Dividido->UseVisualStyleBackColor = false;
			this->Dividido->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Silver;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(26, 192);
			this->btn4->Name = L"btn4";
			this->btn4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn4->Size = System::Drawing::Size(56, 40);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Silver;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(82, 192);
			this->btn5->Name = L"btn5";
			this->btn5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn5->Size = System::Drawing::Size(56, 40);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Silver;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(138, 192);
			this->btn6->Name = L"btn6";
			this->btn6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn6->Size = System::Drawing::Size(56, 40);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// Multiplicação
			// 
			this->Multiplicação->BackColor = System::Drawing::Color::Silver;
			this->Multiplicação->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Multiplicação->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Multiplicação->Location = System::Drawing::Point(194, 192);
			this->Multiplicação->Name = L"Multiplicação";
			this->Multiplicação->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Multiplicação->Size = System::Drawing::Size(56, 40);
			this->Multiplicação->TabIndex = 1;
			this->Multiplicação->Text = L"x";
			this->Multiplicação->UseVisualStyleBackColor = false;
			this->Multiplicação->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Silver;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(26, 146);
			this->btn7->Name = L"btn7";
			this->btn7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn7->Size = System::Drawing::Size(56, 40);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Silver;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(82, 238);
			this->btn2->Name = L"btn2";
			this->btn2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn2->Size = System::Drawing::Size(56, 40);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Silver;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(138, 238);
			this->btn3->Name = L"btn3";
			this->btn3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn3->Size = System::Drawing::Size(56, 40);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// Subtração
			// 
			this->Subtração->BackColor = System::Drawing::Color::Silver;
			this->Subtração->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Subtração->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Subtração->Location = System::Drawing::Point(194, 238);
			this->Subtração->Name = L"Subtração";
			this->Subtração->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Subtração->Size = System::Drawing::Size(56, 40);
			this->Subtração->TabIndex = 1;
			this->Subtração->Text = L"-";
			this->Subtração->UseVisualStyleBackColor = false;
			this->Subtração->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Silver;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(26, 284);
			this->btn0->Name = L"btn0";
			this->btn0->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn0->Size = System::Drawing::Size(56, 40);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// Virgula
			// 
			this->Virgula->BackColor = System::Drawing::Color::Silver;
			this->Virgula->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Virgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Virgula->Location = System::Drawing::Point(82, 284);
			this->Virgula->Name = L"Virgula";
			this->Virgula->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Virgula->Size = System::Drawing::Size(56, 40);
			this->Virgula->TabIndex = 1;
			this->Virgula->Text = L",";
			this->Virgula->UseVisualStyleBackColor = false;
			this->Virgula->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// MudarSinal
			// 
			this->MudarSinal->BackColor = System::Drawing::Color::Silver;
			this->MudarSinal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->MudarSinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MudarSinal->Location = System::Drawing::Point(138, 284);
			this->MudarSinal->Name = L"MudarSinal";
			this->MudarSinal->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->MudarSinal->Size = System::Drawing::Size(56, 40);
			this->MudarSinal->TabIndex = 1;
			this->MudarSinal->Text = L"±";
			this->MudarSinal->UseVisualStyleBackColor = false;
			this->MudarSinal->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// Soma
			// 
			this->Soma->BackColor = System::Drawing::Color::Silver;
			this->Soma->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Soma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Soma->Location = System::Drawing::Point(194, 284);
			this->Soma->Name = L"Soma";
			this->Soma->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Soma->Size = System::Drawing::Size(56, 40);
			this->Soma->TabIndex = 1;
			this->Soma->Text = L"+";
			this->Soma->UseVisualStyleBackColor = false;
			this->Soma->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// exp
			// 
			this->exp->BackColor = System::Drawing::Color::Silver;
			this->exp->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exp->Location = System::Drawing::Point(82, 100);
			this->exp->Name = L"exp";
			this->exp->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->exp->Size = System::Drawing::Size(56, 40);
			this->exp->TabIndex = 1;
			this->exp->Text = L"xʸ";
			this->exp->UseVisualStyleBackColor = false;
			this->exp->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// raiz
			// 
			this->raiz->BackColor = System::Drawing::Color::Silver;
			this->raiz->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->raiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->raiz->Location = System::Drawing::Point(138, 100);
			this->raiz->Name = L"raiz";
			this->raiz->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->raiz->Size = System::Drawing::Size(56, 40);
			this->raiz->TabIndex = 1;
			this->raiz->Text = L"√";
			this->raiz->UseVisualStyleBackColor = false;
			this->raiz->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// Fatorial
			// 
			this->Fatorial->BackColor = System::Drawing::Color::Silver;
			this->Fatorial->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Fatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Fatorial->Location = System::Drawing::Point(26, 100);
			this->Fatorial->Name = L"Fatorial";
			this->Fatorial->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Fatorial->Size = System::Drawing::Size(56, 40);
			this->Fatorial->TabIndex = 1;
			this->Fatorial->Text = L"n!";
			this->Fatorial->UseVisualStyleBackColor = false;
			this->Fatorial->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// cls
			// 
			this->cls->BackColor = System::Drawing::Color::Silver;
			this->cls->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->cls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cls->Location = System::Drawing::Point(194, 100);
			this->cls->Name = L"cls";
			this->cls->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cls->Size = System::Drawing::Size(56, 40);
			this->cls->TabIndex = 1;
			this->cls->Text = L"C";
			this->cls->UseVisualStyleBackColor = false;
			this->cls->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// Igual
			// 
			this->Igual->BackColor = System::Drawing::Color::Silver;
			this->Igual->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Igual->Location = System::Drawing::Point(26, 330);
			this->Igual->Name = L"Igual";
			this->Igual->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Igual->Size = System::Drawing::Size(224, 49);
			this->Igual->TabIndex = 2;
			this->Igual->Text = L"=";
			this->Igual->UseVisualStyleBackColor = false;
			this->Igual->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(277, 396);
			this->Controls->Add(this->Igual);
			this->Controls->Add(this->Soma);
			this->Controls->Add(this->Subtração);
			this->Controls->Add(this->MudarSinal);
			this->Controls->Add(this->Multiplicação);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->Virgula);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->cls);
			this->Controls->Add(this->Dividido);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->Fatorial);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->raiz);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->exp);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora over 9000";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		bool separado;
		double numero;
		char op;

		void LimpaDisplay()
		{
			separado = false;
			lblDisplay->Text = "0";
		}

		void LimpaTudo()
		{
			LimpaDisplay();
			numero = 0.0;
			op = '\0';
		}

#pragma endregion
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text !="0")
				 lblDisplay->Text = lblDisplay->Text + "0";
			}
			 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			LimpaTudo();
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '+';
			LimpaDisplay();
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '-';
			LimpaDisplay();
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '*';
			LimpaDisplay();
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="3";
			 else
				 lblDisplay->Text = lblDisplay->Text+"3";
			}
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if(lblDisplay->Text->Length<MAXCHARDISP && separado == false){
				lblDisplay->Text = lblDisplay->Text + ",";
				separado = true;
			}
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="6";
			 else
				 lblDisplay->Text = lblDisplay->Text+"6";
			}
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="2";
			 else
				 lblDisplay->Text = lblDisplay->Text+"2";
			}
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			double numero2 = numero;
			numero = System::Convert::ToDouble(lblDisplay->Text);
			switch(op){
			case '+':
				lblDisplay->Text = System::Convert::ToString(numero + numero2);
				break;
			case '-':
				lblDisplay->Text = System::Convert::ToString(numero2 - numero);
				break;
			case '*':
				lblDisplay->Text = System::Convert::ToString(numero * numero2);
				break;
			case '/':
				lblDisplay->Text = System::Convert::ToString(numero2 / numero);
				break;
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '/';
			LimpaDisplay();
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="5";
			 else
				 lblDisplay->Text = lblDisplay->Text+"5";
			}
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="7";
			 else
				 lblDisplay->Text = lblDisplay->Text+"7";
			}
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="9";
			 else
				 lblDisplay->Text = lblDisplay->Text+"9";
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '^';
			LimpaDisplay();
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="4";
			 else
				 lblDisplay->Text = lblDisplay->Text+"4";
			}
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="8";
			 else
				 lblDisplay->Text = lblDisplay->Text+"8";
			}
		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length<MAXCHARDISP){
			 if(lblDisplay-> Text =="0")
				 lblDisplay->Text ="1";
			 else
				 lblDisplay->Text = lblDisplay->Text+"1";
			}
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 separado = false;
		 }
};
}

