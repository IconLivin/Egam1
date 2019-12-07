#include <fstream> 
#include "spline.h"
#include <vector>
#include <algorithm>
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
	private: System::Windows::Forms::Label^ Errors;
	private: System::Windows::Forms::TextBox^ x1;
	private: System::Windows::Forms::TextBox^ x2;
	private: System::Windows::Forms::TextBox^ x3;
	private: System::Windows::Forms::TextBox^ x4;
	private: System::Windows::Forms::TextBox^ x5;
	private: System::Windows::Forms::TextBox^ x6;
	private: System::Windows::Forms::TextBox^ x7;
	private: System::Windows::Forms::TextBox^ x8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button4;












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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->Errors = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x5 = (gcnew System::Windows::Forms::TextBox());
			this->x6 = (gcnew System::Windows::Forms::TextBox());
			this->x7 = (gcnew System::Windows::Forms::TextBox());
			this->x8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->AntiAliasing = System::Windows::Forms::DataVisualization::Charting::AntiAliasingStyles::None;
			chartArea1->AlignmentOrientation = static_cast<System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations>((System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Vertical | System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal));
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->IsStartedFromZero = false;
			chartArea1->AxisX->LabelStyle->Format = L"0";
			chartArea1->AxisX->MajorGrid->Interval = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffset = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorTickMark->Interval = 0;
			chartArea1->AxisX->MajorTickMark->IntervalOffset = 0;
			chartArea1->AxisX->MajorTickMark->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorTickMark->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea1->AxisX2->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX2->IsStartedFromZero = false;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->IsStartedFromZero = false;
			chartArea1->AxisY2->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY2->IsStartedFromZero = false;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(41, 149);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::VerticalCenter;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->LabelBorderWidth = 5;
			series1->MarkerBorderWidth = 2;
			series1->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->MarkerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
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
			this->button1->Location = System::Drawing::Point(198, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Построить! ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(342, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(198, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(413, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(270, 58);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(483, 58);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 58);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(55, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(128, 58);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(55, 20);
			this->textBox8->TabIndex = 10;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(623, 58);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(55, 20);
			this->textBox9->TabIndex = 11;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(413, 92);
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
			this->label1->Location = System::Drawing::Point(147, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Y1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Y2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(284, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Y3";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(358, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Y4";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(428, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Y5";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(497, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Y6";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(568, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Y7";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(641, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Y8";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(657, 92);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(657, 122);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(622, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"От";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(620, 125);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"До";
			// 
			// Errors
			// 
			this->Errors->AutoSize = true;
			this->Errors->Location = System::Drawing::Point(198, 560);
			this->Errors->Name = L"Errors";
			this->Errors->Size = System::Drawing::Size(0, 13);
			this->Errors->TabIndex = 19;
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(128, 19);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(55, 20);
			this->x1->TabIndex = 20;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(198, 19);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(55, 20);
			this->x2->TabIndex = 21;
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(270, 19);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(55, 20);
			this->x3->TabIndex = 22;
			// 
			// x4
			// 
			this->x4->Location = System::Drawing::Point(342, 19);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(55, 20);
			this->x4->TabIndex = 23;
			// 
			// x5
			// 
			this->x5->Location = System::Drawing::Point(413, 19);
			this->x5->Name = L"x5";
			this->x5->Size = System::Drawing::Size(55, 20);
			this->x5->TabIndex = 24;
			// 
			// x6
			// 
			this->x6->Location = System::Drawing::Point(483, 19);
			this->x6->Name = L"x6";
			this->x6->Size = System::Drawing::Size(55, 20);
			this->x6->TabIndex = 25;
			// 
			// x7
			// 
			this->x7->Location = System::Drawing::Point(557, 19);
			this->x7->Name = L"x7";
			this->x7->Size = System::Drawing::Size(55, 20);
			this->x7->TabIndex = 26;
			// 
			// x8
			// 
			this->x8->Location = System::Drawing::Point(623, 19);
			this->x8->Name = L"x8";
			this->x8->Size = System::Drawing::Size(55, 20);
			this->x8->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(147, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"X1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(218, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"X2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(284, 3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"X3";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(358, 3);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 13);
			this->label16->TabIndex = 31;
			this->label16->Text = L"X4";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(428, 4);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"X5";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(497, 3);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 13);
			this->label18->TabIndex = 33;
			this->label18->Text = L"X6";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(568, 3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 13);
			this->label19->TabIndex = 34;
			this->label19->Text = L"X7";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(641, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 13);
			this->label20->TabIndex = 35;
			this->label20->Text = L"X8";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(-56, 587);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 36;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(829, 597);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->x8);
			this->Controls->Add(this->x7);
			this->Controls->Add(this->x6);
			this->Controls->Add(this->x5);
			this->Controls->Add(this->x4);
			this->Controls->Add(this->x3);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->Errors);
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
				std::vector<double> xs;

				if (this->x1->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х1!";
					return;
				}

				if (this->x2->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х2!";
					return;
				}

				if (this->x3->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х3!";
					return;
				}

				if (this->x4->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х4!";
					return;
				}

				if (this->x5->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х5!";
					return;
				}

				if (this->x6->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х6!";
					return;
				}

				if (this->x7->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х7!";
					return;
				}

				if (this->x8->Text == "") {
					this->Errors->Text = "Нет значения в ячейке Х8!";
					return;
				}

				xs.push_back(Convert::ToDouble(this->x1->Text));
				max = Convert::ToDouble(this->x1->Text);
				min = Convert::ToDouble(this->x1->Text);

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x2->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x2->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x3->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x3->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}
				
				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x4->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x4->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x5->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x5->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x6->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x6->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x7->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x7->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

				if (std::find(xs.begin(), xs.end(), Convert::ToDouble(this->x8->Text)) == xs.end()) {
					xs.push_back(Convert::ToDouble(this->x8->Text));
				}
				else {
					this->Errors->Text = "Значения иксов не могут совпадать!";
				}

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

				for (int i = 0; i < xs.size(); ++i) {
					min = min > xs[i] ? xs[i] : min;
					max = max < xs[i] ? xs[i] : max;
				}

				//заносим точки
				for (int i = 0; i < n; i++)
				{
					x[i] = xs[i];
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
	std::vector<int> xs;
	double arr[8];
	for (int i = 0; i < 8; ++i) {
		arr[i] = a + rand() % (b - a);
		xs.push_back(a + rand() % (b - a));
	}
	
	std::sort(xs.begin(), xs.end());

	this->textBox8->Text = Convert::ToString(arr[0]);
	this->textBox3->Text = Convert::ToString(arr[1]);
	this->textBox5->Text = Convert::ToString(arr[2]);
	this->textBox1->Text = Convert::ToString(arr[3]);
	this->textBox4->Text = Convert::ToString(arr[4]);
	this->textBox6->Text = Convert::ToString(arr[5]);
	this->textBox7->Text = Convert::ToString(arr[6]);
	this->textBox9->Text = Convert::ToString(arr[7]);

	this->x8->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x7->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x6->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x5->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x4->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x3->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x2->Text = Convert::ToString(xs.back());
	xs.pop_back();
	this->x1->Text = Convert::ToString(xs.back());
	xs.pop_back();
	
	
	
	
	
	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Errors->Text = "ПРОГА by Тоха!";
}
};
}

