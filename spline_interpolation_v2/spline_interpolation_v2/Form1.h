#include <fstream> 
#include "spline.h"
#include <vector>
#pragma once

namespace spline_interpolation_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;







	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;











	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->AntiAliasing = System::Windows::Forms::DataVisualization::Charting::AntiAliasingStyles::None;
			chartArea2->AxisX->LabelStyle->Format = L"0";
			chartArea2->AxisY->IsLabelAutoFit = false;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(41, 138);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series3->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::VerticalCenter;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->LabelBorderWidth = 5;
			series3->MarkerBorderWidth = 2;
			series3->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series4->Name = L"Series2";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(732, 415);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Шаг";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(54, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 131072 });
			this->numericUpDown2->Location = System::Drawing::Point(6, 40);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(75, 20);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 65536 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(166, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Точность:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(198, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Построить! ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(342, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(198, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(413, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(270, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(483, 43);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 43);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(55, 20);
			this->textBox7->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(128, 43);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(55, 20);
			this->textBox8->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(623, 43);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(55, 20);
			this->textBox9->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(413, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 51);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Случайная генерация";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Y1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Y2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(284, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Y3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(358, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Y4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(428, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Y5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(497, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Y6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(568, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Y7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(641, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Y8";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(673, 81);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(673, 111);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(628, 81);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"От";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(626, 111);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"До";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(794, 597);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"Form1";
			this->Text = L"Сплайн-интерполяция";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			{
				//удаляем старые графики и точки
				this->chart1->Series["Series1"]->Points->Clear();
				this->chart1->Series["Series2"]->Points->Clear();

				//границы интервалов
				float min = 0;
				float max = 8;

				 //строим график
				std::vector<double> ys;

				if (this->textBox8->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox8->Text);
					ys.push_back(x);
				}

				if (this->textBox3->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox3->Text);
					ys.push_back(x);
				}
				
				if (this->textBox5->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox5->Text);
					ys.push_back(x);
				}

				if (this->textBox1->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox1->Text);
					ys.push_back(x);
				}

				if (this->textBox4->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox4->Text);
					ys.push_back(x);
				}

				if (this->textBox6->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox6->Text);
					ys.push_back(x);
				}

				if (this->textBox7->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox7->Text);
					ys.push_back(x);
				}

				if (this->textBox9->Text == "") {
					ys.push_back(0);
				}
				else {
					double x = Convert::ToDouble(this->textBox9->Text);
					ys.push_back(x);
				}
				int n = 0;
				n = 8; //количество точек
			
				double* x = new double[n];
				double* y = new double[n];

				//заносим точки
				for (int i = 0; i < n; i++)
				{
					x[i] = i;
					y[i] = ys[i];
				}



				cubic_spline cs;
				
				cs.build_spline(x, y, n);

				//рисуем получившийся график
				try
				{
					for(float i = min; i < max; i = i + 0.01)
					{
						this->chart1->Series["Series2"]->Points->AddXY(i, cs.f(i));
					}
				}
				catch(...)
				{
					MessageBox::Show("Invalid function!", "Error!");
					return;
				}				
			}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int a=0;
	if (this->textBox10->Text != "") {
		a = Convert::ToInt32(this->textBox10->Text);
	}
	int b = 1000;
	if (this->textBox11->Text != "") {
		b = Convert::ToInt32(this->textBox11->Text);
	}
	double arr[8];
	for (int i = 0; i < 8; ++i) {
		arr[i] = a + rand() % (b - a);
	}
	
	this->textBox8->Text = Convert::ToString(arr[0]);
	this->textBox3->Text = Convert::ToString(arr[1]);
	this->textBox5->Text = Convert::ToString(arr[2]);
	this->textBox1->Text = Convert::ToString(arr[3]);
	this->textBox4->Text = Convert::ToString(arr[4]);
	this->textBox6->Text = Convert::ToString(arr[5]);
	this->textBox7->Text = Convert::ToString(arr[6]);
	this->textBox9->Text = Convert::ToString(arr[7]);


}
};
}

