#pragma once
#include <array>
#include "func.h"
#include <time.h>
namespace Egam2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::CheckBox^ t2;
	private: System::Windows::Forms::CheckBox^ t3;
	private: System::Windows::Forms::CheckBox^ t4;
	private: System::Windows::Forms::CheckBox^ t5;
	private: System::Windows::Forms::CheckBox^ t6;
	private: System::Windows::Forms::CheckBox^ t7;
	private: System::Windows::Forms::CheckBox^ t8;
	private: System::Windows::Forms::CheckBox^ t9;
	private: System::Windows::Forms::CheckBox^ t10;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ size;
	private: System::Windows::Forms::Button^ Count;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ ot;
	private: System::Windows::Forms::TextBox^ to;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ isdoub;
	private: System::Windows::Forms::CheckBox^ det;
	private: System::Windows::Forms::CheckBox^ sim;
	private: System::Windows::Forms::CheckBox^ diag;
	private: System::Windows::Forms::CheckBox^ posD;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ acc;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ gaus;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Kramer1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ Zeidel1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ ei;
	private: System::Windows::Forms::Label^ afd2;
	private: System::Windows::Forms::Label^ relax;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ jor;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ matr;
















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->t2 = (gcnew System::Windows::Forms::CheckBox());
			this->t3 = (gcnew System::Windows::Forms::CheckBox());
			this->t4 = (gcnew System::Windows::Forms::CheckBox());
			this->t5 = (gcnew System::Windows::Forms::CheckBox());
			this->t6 = (gcnew System::Windows::Forms::CheckBox());
			this->t7 = (gcnew System::Windows::Forms::CheckBox());
			this->t8 = (gcnew System::Windows::Forms::CheckBox());
			this->t9 = (gcnew System::Windows::Forms::CheckBox());
			this->t10 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->size = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ot = (gcnew System::Windows::Forms::TextBox());
			this->to = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->isdoub = (gcnew System::Windows::Forms::CheckBox());
			this->det = (gcnew System::Windows::Forms::CheckBox());
			this->sim = (gcnew System::Windows::Forms::CheckBox());
			this->diag = (gcnew System::Windows::Forms::CheckBox());
			this->posD = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->acc = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gaus = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Kramer1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Zeidel1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ei = (gcnew System::Windows::Forms::Label());
			this->afd2 = (gcnew System::Windows::Forms::Label());
			this->relax = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->jor = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->matr = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// t2
			// 
			this->t2->AutoSize = true;
			this->t2->Location = System::Drawing::Point(25, 54);
			this->t2->Name = L"t2";
			this->t2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t2->Size = System::Drawing::Size(43, 17);
			this->t2->TabIndex = 121;
			this->t2->Text = L"2x2";
			this->t2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t2->UseVisualStyleBackColor = true;
			this->t2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// t3
			// 
			this->t3->AutoSize = true;
			this->t3->Location = System::Drawing::Point(25, 80);
			this->t3->Name = L"t3";
			this->t3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t3->Size = System::Drawing::Size(43, 17);
			this->t3->TabIndex = 122;
			this->t3->Text = L"3x3";
			this->t3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t3->UseVisualStyleBackColor = true;
			this->t3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t3_CheckedChanged);
			// 
			// t4
			// 
			this->t4->AutoSize = true;
			this->t4->Location = System::Drawing::Point(25, 106);
			this->t4->Name = L"t4";
			this->t4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t4->Size = System::Drawing::Size(43, 17);
			this->t4->TabIndex = 123;
			this->t4->Text = L"4x4";
			this->t4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t4->UseVisualStyleBackColor = true;
			this->t4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t4_CheckedChanged);
			// 
			// t5
			// 
			this->t5->AutoSize = true;
			this->t5->Location = System::Drawing::Point(25, 132);
			this->t5->Name = L"t5";
			this->t5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t5->Size = System::Drawing::Size(43, 17);
			this->t5->TabIndex = 124;
			this->t5->Text = L"5x5";
			this->t5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t5->UseVisualStyleBackColor = true;
			this->t5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t5_CheckedChanged);
			// 
			// t6
			// 
			this->t6->AutoSize = true;
			this->t6->Location = System::Drawing::Point(25, 158);
			this->t6->Name = L"t6";
			this->t6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t6->Size = System::Drawing::Size(43, 17);
			this->t6->TabIndex = 125;
			this->t6->Text = L"6x6";
			this->t6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t6->UseVisualStyleBackColor = true;
			this->t6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t6_CheckedChanged);
			// 
			// t7
			// 
			this->t7->AutoSize = true;
			this->t7->Location = System::Drawing::Point(25, 184);
			this->t7->Name = L"t7";
			this->t7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t7->Size = System::Drawing::Size(43, 17);
			this->t7->TabIndex = 126;
			this->t7->Text = L"7x7";
			this->t7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t7->UseVisualStyleBackColor = true;
			this->t7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t7_CheckedChanged);
			// 
			// t8
			// 
			this->t8->AutoSize = true;
			this->t8->Location = System::Drawing::Point(25, 210);
			this->t8->Name = L"t8";
			this->t8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t8->Size = System::Drawing::Size(43, 17);
			this->t8->TabIndex = 127;
			this->t8->Text = L"8x8";
			this->t8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t8->UseVisualStyleBackColor = true;
			this->t8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t8_CheckedChanged);
			// 
			// t9
			// 
			this->t9->AutoSize = true;
			this->t9->Location = System::Drawing::Point(25, 236);
			this->t9->Name = L"t9";
			this->t9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t9->Size = System::Drawing::Size(43, 17);
			this->t9->TabIndex = 128;
			this->t9->Text = L"9x9";
			this->t9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t9->UseVisualStyleBackColor = true;
			this->t9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t9_CheckedChanged);
			// 
			// t10
			// 
			this->t10->AutoSize = true;
			this->t10->Location = System::Drawing::Point(13, 262);
			this->t10->Name = L"t10";
			this->t10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->t10->Size = System::Drawing::Size(55, 17);
			this->t10->TabIndex = 129;
			this->t10->Text = L"10x10";
			this->t10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->t10->UseVisualStyleBackColor = true;
			this->t10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::t10_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(74, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->DividerHeight = 2;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(537, 249);
			this->dataGridView1->TabIndex = 130;
			// 
			// size
			// 
			this->size->AutoSize = true;
			this->size->Location = System::Drawing::Point(71, 9);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(0, 13);
			this->size->TabIndex = 131;
			this->size->Visible = false;
			// 
			// Count
			// 
			this->Count->Location = System::Drawing::Point(74, 482);
			this->Count->Name = L"Count";
			this->Count->Size = System::Drawing::Size(189, 51);
			this->Count->TabIndex = 132;
			this->Count->Text = L"Посчитать";
			this->Count->UseVisualStyleBackColor = true;
			this->Count->Click += gcnew System::EventHandler(this, &MyForm::Count_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(422, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 51);
			this->button2->TabIndex = 133;
			this->button2->Text = L"Сгенерировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ot
			// 
			this->ot->Location = System::Drawing::Point(377, 482);
			this->ot->Name = L"ot";
			this->ot->Size = System::Drawing::Size(39, 20);
			this->ot->TabIndex = 134;
			// 
			// to
			// 
			this->to->Location = System::Drawing::Point(377, 513);
			this->to->Name = L"to";
			this->to->Size = System::Drawing::Size(39, 20);
			this->to->TabIndex = 135;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(351, 485);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 136;
			this->label1->Text = L"От";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(349, 516);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 137;
			this->label2->Text = L"До";
			// 
			// isdoub
			// 
			this->isdoub->AutoSize = true;
			this->isdoub->Location = System::Drawing::Point(617, 516);
			this->isdoub->Name = L"isdoub";
			this->isdoub->Size = System::Drawing::Size(103, 17);
			this->isdoub->TabIndex = 138;
			this->isdoub->Text = L"Вещественные";
			this->isdoub->UseVisualStyleBackColor = true;
			// 
			// det
			// 
			this->det->AutoSize = true;
			this->det->Location = System::Drawing::Point(74, 23);
			this->det->Name = L"det";
			this->det->Size = System::Drawing::Size(63, 17);
			this->det->TabIndex = 139;
			this->det->Text = L"detA!=0";
			this->det->UseVisualStyleBackColor = true;
			// 
			// sim
			// 
			this->sim->AutoSize = true;
			this->sim->Location = System::Drawing::Point(144, 23);
			this->sim->Name = L"sim";
			this->sim->Size = System::Drawing::Size(71, 17);
			this->sim->TabIndex = 140;
			this->sim->Text = L"Simmetric";
			this->sim->UseVisualStyleBackColor = true;
			// 
			// diag
			// 
			this->diag->AutoSize = true;
			this->diag->Location = System::Drawing::Point(222, 23);
			this->diag->Name = L"diag";
			this->diag->Size = System::Drawing::Size(48, 17);
			this->diag->TabIndex = 141;
			this->diag->Text = L"Diag";
			this->diag->UseVisualStyleBackColor = true;
			// 
			// posD
			// 
			this->posD->AutoSize = true;
			this->posD->Location = System::Drawing::Point(277, 23);
			this->posD->Name = L"posD";
			this->posD->Size = System::Drawing::Size(60, 17);
			this->posD->TabIndex = 142;
			this->posD->Text = L"posDef";
			this->posD->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 37);
			this->button1->TabIndex = 143;
			this->button1->Text = L"Check Mat";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(74, 327);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(537, 58);
			this->dataGridView2->TabIndex = 144;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(280, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 145;
			this->label3->Text = L"Начальное приближение ";
			// 
			// acc
			// 
			this->acc->Location = System::Drawing::Point(74, 391);
			this->acc->Name = L"acc";
			this->acc->Size = System::Drawing::Size(63, 20);
			this->acc->TabIndex = 146;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 394);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 147;
			this->label4->Text = L"Точность";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(74, 417);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(537, 58);
			this->dataGridView3->TabIndex = 148;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(308, 393);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 149;
			this->label5->Text = L"Решение";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(680, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 150;
			this->label6->Text = L"Gauss:";
			// 
			// gaus
			// 
			this->gaus->AutoSize = true;
			this->gaus->Location = System::Drawing::Point(735, 101);
			this->gaus->Name = L"gaus";
			this->gaus->Size = System::Drawing::Size(0, 13);
			this->gaus->TabIndex = 151;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(677, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 152;
			this->label8->Text = L"Kramer:";
			// 
			// Kramer1
			// 
			this->Kramer1->AutoSize = true;
			this->Kramer1->Location = System::Drawing::Point(735, 136);
			this->Kramer1->Name = L"Kramer1";
			this->Kramer1->Size = System::Drawing::Size(0, 13);
			this->Kramer1->TabIndex = 153;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(681, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 154;
			this->label7->Text = L"Zeidel:";
			// 
			// Zeidel1
			// 
			this->Zeidel1->AutoSize = true;
			this->Zeidel1->Location = System::Drawing::Point(735, 174);
			this->Zeidel1->Name = L"Zeidel1";
			this->Zeidel1->Size = System::Drawing::Size(0, 13);
			this->Zeidel1->TabIndex = 155;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(638, 209);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 13);
			this->label9->TabIndex = 156;
			this->label9->Text = L"Easy Itterations:";
			// 
			// ei
			// 
			this->ei->AutoSize = true;
			this->ei->Location = System::Drawing::Point(735, 209);
			this->ei->Name = L"ei";
			this->ei->Size = System::Drawing::Size(0, 13);
			this->ei->TabIndex = 157;
			// 
			// afd2
			// 
			this->afd2->AutoSize = true;
			this->afd2->Location = System::Drawing::Point(669, 240);
			this->afd2->Name = L"afd2";
			this->afd2->Size = System::Drawing::Size(51, 13);
			this->afd2->TabIndex = 158;
			this->afd2->Text = L"Relaxing:";
			// 
			// relax
			// 
			this->relax->AutoSize = true;
			this->relax->Location = System::Drawing::Point(735, 240);
			this->relax->Name = L"relax";
			this->relax->Size = System::Drawing::Size(0, 13);
			this->relax->TabIndex = 159;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(678, 266);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 160;
			this->label10->Text = L"Jordan:";
			// 
			// jor
			// 
			this->jor->AutoSize = true;
			this->jor->Location = System::Drawing::Point(735, 266);
			this->jor->Name = L"jor";
			this->jor->Size = System::Drawing::Size(0, 13);
			this->jor->TabIndex = 161;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(643, 290);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 13);
			this->label11->TabIndex = 162;
			this->label11->Text = L"Matrix Method:";
			// 
			// matr
			// 
			this->matr->AutoSize = true;
			this->matr->Location = System::Drawing::Point(735, 290);
			this->matr->Name = L"matr";
			this->matr->Size = System::Drawing::Size(0, 13);
			this->matr->TabIndex = 163;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 545);
			this->Controls->Add(this->matr);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->jor);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->relax);
			this->Controls->Add(this->afd2);
			this->Controls->Add(this->ei);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Zeidel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Kramer1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gaus);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->acc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->posD);
			this->Controls->Add(this->diag);
			this->Controls->Add(this->sim);
			this->Controls->Add(this->det);
			this->Controls->Add(this->isdoub);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->to);
			this->Controls->Add(this->ot);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Count);
			this->Controls->Add(this->size);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->t10);
			this->Controls->Add(this->t9);
			this->Controls->Add(this->t8);
			this->Controls->Add(this->t7);
			this->Controls->Add(this->t6);
			this->Controls->Add(this->t5);
			this->Controls->Add(this->t4);
			this->Controls->Add(this->t3);
			this->Controls->Add(this->t2);
			this->Name = L"MyForm";
			this->Text = L"Решение СЛАУ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t5->Checked = false;
		this->t6->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->ColumnCount = 3;
		dataGridView1->RowCount = 2;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 2; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		size->Text = "2";
		dataGridView2->ColumnCount = 2;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 2; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[2]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	}

	private: System::Void t3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t2->Checked = false;
		this->t4->Checked = false;
		this->t5->Checked = false;
		this->t6->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->ColumnCount = 4;
		dataGridView1->RowCount = 3;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 3;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 3; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[3]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "3";
	}
	private: System::Void t4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t6->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->ColumnCount = 5;
		dataGridView1->RowCount = 4;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 4;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 4; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[4]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "4";
	}
	private: System::Void t5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t6->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 6;
		dataGridView1->RowCount = 5;
		for (int i = 0; i < 5; ++i) {
			for (int j = 0; j < 5; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 5;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 5; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[5]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "5";
	}
	private: System::Void t6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 7;
		dataGridView1->RowCount = 6;
		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 6; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 6;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 6; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[6]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "6";
	}
	private: System::Void t7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t6->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 8;
		dataGridView1->RowCount = 7;
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 7; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 7;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 7; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[7]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "7";

	}
	private: System::Void t8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t7->Checked = false;
		this->t6->Checked = false;
		this->t9->Checked = false;
		this->t10->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 9;
		dataGridView1->RowCount = 8;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 8;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 8; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[8]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "8";
	}
	private: System::Void t9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t6->Checked = false;
		this->t10->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 10;
		dataGridView1->RowCount = 9;
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 9;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 9; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[9]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "9";

	}
	private: System::Void t10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->t3->Checked = false;
		this->t4->Checked = false;
		this->t2->Checked = false;
		this->t5->Checked = false;
		this->t7->Checked = false;
		this->t8->Checked = false;
		this->t9->Checked = false;
		this->t6->Checked = false;
		dataGridView1->AutoResizeColumns();
		dataGridView1->AutoResizeRows();
		dataGridView1->ColumnCount = 11;
		dataGridView1->RowCount = 10;
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j) {
				dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		}
		dataGridView2->ColumnCount = 10;
		dataGridView2->AutoResizeColumns();
		dataGridView2->AutoResizeRows();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		for (int i = 0; i < 10; i++) {
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
		dataGridView1->Columns[10]->HeaderCell->Value = Convert::ToString("B");
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		size->Text = "10";

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bool doub = isdoub->Checked;
		int size = 0;
		if (this->size->Text != "")size = Convert::ToInt32(this->size->Text);
		int ot = 0;
		int to = 100;
		if (this->ot->Text != "") {
			ot = Convert::ToInt32(this->ot->Text);
		}
		if (this->to->Text != "") {
			to = Convert::ToInt32(this->to->Text);
		}
		Matrix mat = generateMatrix(size, ot, to, doub);
		std::vector<double> b = generateVector(size, ot, to, doub);
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(mat[i][j]);
			}
		}
		for (int i = 0; i < size; ++i) {
			dataGridView1->Rows[i]->Cells[size]->Value = Convert::ToString(b[i]);
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->size->Text == "")return;
		int size = Convert::ToInt32(this->size->Text);
		Matrix mat(size, std::vector<double>(size));
		for (size_t i = 0; i < mat.size(); ++i) {
			for (size_t j = 0; j < mat[0].size(); ++j) {
				mat[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		this->det->Checked = (deter(mat) != 0);
		this->sim->Checked = isSimmetric(mat);
		this->diag->Checked = isDiag(mat);
		this->posD->Checked = isAcceptedbySilveseter(mat);
	}
	private: System::Void Count_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->size->Text == "")return;
		bool deter = det->Checked;
		bool sim = this->sim->Checked;
		bool diag = this->diag->Checked;
		bool posD = this->posD->Checked;
		int size = Convert::ToInt32(this->size->Text);
		Matrix mat(size, std::vector<double>(size));
		for (size_t i = 0; i < mat.size(); ++i) {
			for (size_t j = 0; j < mat[0].size(); ++j) {
				mat[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		std::vector<double> b(size);
		for (int i = 0; i < size; ++i) {
			b[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[size]->Value);
		}
		std::vector<double> x(size);
		for (int i = 0; i < size; ++i) {
			x[i] = Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value);
		}
		double accuracy = 1;
		if (this->acc->Text != "") {
			accuracy = Convert::ToDouble(this->acc->Text);
		}
		dataGridView3->ColumnCount = size;
		int time[7];
		for (int i = 0; i < 7; ++i) {
			time[i] = 0;
		}
		Gauss(mat, b, x, time[0]);


		if (deter)Kramer(mat, b, x, time[1]);

		
		if (posD && diag)easyIterations(mat, b, x, accuracy, time[2]);
		
		
		if (posD && diag)Zeidel(mat, b, x, accuracy, time[3]);
		
	
		if (posD && diag)relaxing(mat, b, x, accuracy, time[4]);
	
		Jordan(mat, b, x, time[5]);

		std::vector<double> res = Matr_Method(mat, b, x, time[6]);

		for (int i = 0; i < size; ++i) {
			dataGridView3->Rows[0]->Cells[i]->Value = Convert::ToString(res[i]);
		}

		this->gaus->Text = Convert::ToString(time[0]) + " mсs";
		this->Kramer1->Text = Convert::ToString(time[1]) + " mсs";
		this->ei->Text = Convert::ToString(time[2]) + " mсs";
		this->Zeidel1->Text = Convert::ToString(time[3]) + " mсs";
		this->relax->Text = Convert::ToString(time[4]) + " mсs";
		this->jor->Text = Convert::ToString(time[5]) + " mсs";
		this->matr->Text = Convert::ToString(time[6]) + " mcs";
	}
	};
}