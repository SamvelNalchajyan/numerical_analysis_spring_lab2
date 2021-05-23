#pragma once
//#include <math.h>
#include "../Lab2/Lab2/Algorithms.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;







	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;







	private: System::Windows::Forms::TextBox^ textBox_n_graph;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::TextBox^ textBox_delta_f;
	private: System::Windows::Forms::TextBox^ textBox_delta_df;
	private: System::Windows::Forms::TextBox^ textBox_delta_ddf;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n_graph = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_delta_f = (gcnew System::Windows::Forms::TextBox());
			this->textBox_delta_df = (gcnew System::Windows::Forms::TextBox());
			this->textBox_delta_ddf = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Test Task";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->X, this->F_1,
					this->F_2, this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(559, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(1071, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// X
			// 
			this->X->HeaderText = L"i";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"x_i-1";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 150;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"x_i";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"a_i";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"b_i";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"c_i";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"d_i";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(330, 379);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"10";
			// 
			// textBox_n_graph
			// 
			this->textBox_n_graph->Location = System::Drawing::Point(75, 379);
			this->textBox_n_graph->Name = L"textBox_n_graph";
			this->textBox_n_graph->Size = System::Drawing::Size(100, 20);
			this->textBox_n_graph->TabIndex = 9;
			this->textBox_n_graph->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 383);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"n_graph";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView2->Location = System::Drawing::Point(559, 374);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(1071, 327);
			this->dataGridView2->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"j";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"x_j";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"F(x_j)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"S(x_j)";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"F(x_j) - S(x_j)";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"F\'(x_j)";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"S\'(x_j)";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"F\'(x_j) - S\'(x_j)";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"F\'\'(x_j)";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"S\'\'(x_j)";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"F\'\'(x_j) - S\'\'(x_j)";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// textBox_delta_f
			// 
			this->textBox_delta_f->Location = System::Drawing::Point(75, 478);
			this->textBox_delta_f->Name = L"textBox_delta_f";
			this->textBox_delta_f->Size = System::Drawing::Size(154, 20);
			this->textBox_delta_f->TabIndex = 12;
			// 
			// textBox_delta_df
			// 
			this->textBox_delta_df->Location = System::Drawing::Point(75, 504);
			this->textBox_delta_df->Name = L"textBox_delta_df";
			this->textBox_delta_df->Size = System::Drawing::Size(154, 20);
			this->textBox_delta_df->TabIndex = 13;
			// 
			// textBox_delta_ddf
			// 
			this->textBox_delta_ddf->Location = System::Drawing::Point(75, 530);
			this->textBox_delta_ddf->Name = L"textBox_delta_ddf";
			this->textBox_delta_ddf->Size = System::Drawing::Size(154, 20);
			this->textBox_delta_ddf->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 481);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"max|F - S|";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 507);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"max|F\' - S\'|";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 533);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"max|F\'\' - S\'\'|";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Main Task 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(411, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 29);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Main Task 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1657, 733);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_delta_ddf);
			this->Controls->Add(this->textBox_delta_df);
			this->Controls->Add(this->textBox_delta_f);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_n_graph);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Lab2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f4_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = -1;
		double xmax = 1;

		int n = Convert::ToInt64(textBox3->Text);
		double h = (xmax - xmin) / n;


		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		//---------------------------------------------------------//
		std::vector<double> y;
		std::vector<double> alpha;
		std::vector<double> beta;


		y.push_back(1);
		alpha.push_back(0);
		beta.push_back(0);

		for (int i = 1; i < n; i++)
		{
			y.push_back(4 * h + h * alpha.back());
			alpha.push_back(-h / y.back());
			double right = (6.0 / h) * (function_fi(xmin + i * h + h) - 2 * function_fi(xmin + i * h) + function_fi(xmin + i * h - h));
			beta.push_back((right - h * beta.back()) / y.back());
		}
		y.push_back(1);
		beta.push_back(0);

		std::vector<double> c(n + 1);
		std::vector<double> a(n + 1);
		std::vector<double> b(n + 1);
		std::vector<double> d(n + 1);

		c[n] = beta[n];
		// c
		for (int i = n - 1; i >= 0; i--)
		{
			c[i] = alpha[i] * c[i + 1] + beta[i];
		}
		// a
		for (int i = 1; i <= n; i++)
		{
			a[i] = function_fi(xmin + i * h);
		}
		// d
		for (int i = 1; i <= n; i++)
		{
			d[i] = (c[i] - c[i - 1]) / h;
		}
		// b
		for (int i = 1; i <= n; i++)
		{
			b[i] = (function_fi(xmin + i * h) - function_fi(xmin + i * h - h)) / h + c[i] * (h / 3.0) + c[i - 1] * (h / 6.0);
		}
		//---------------------------------------------------------//


		// Список точек
		double n_graph = Convert::ToDouble(textBox_n_graph->Text);
		double h_graph = (xmax - xmin) / n_graph;
		//int i = 0;
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		for (double x = xmin; x <= xmax; x += h_graph)
		{
			double S_x;
			for (int i = 1; i <= n; i++)
			{
				if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
				{
					S_x = a[i] + b[i] * (x - xmin - i * h) + 0.5 * c[i] * (x - xmin - i * h) * (x - xmin - i * h) + (d[i] / 6.0) * (x - xmin - i * h) * (x - xmin - i * h) * (x - xmin - i * h);
					break;
				}
			}
			double dS_x;
			for (int i = 1; i <= n; i++)
			{
				if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
				{
					dS_x = b[i] + c[i] * (x - xmin - i * h) + 0.5 * d[i] * (x - xmin - i * h) * (x - xmin - i * h);
					break;
				}
			}
			double ddS_x;
			for (int i = 1; i <= n; i++)
			{
				if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
				{
					ddS_x = c[i] + d[i] * (x - xmin - i * h);
					break;
				}
			}

			//Добавление на график
			f1_list->Add(x, function_fi(x));
			f2_list->Add(x, S_x);
			f3_list->Add(x, function_dfi(x));
			f4_list->Add(x, dS_x);
			//Печать в таблицу
			/*
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x; 			
			dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			*/
			//i++;
		}
		//i = 1;
		//Печать таблицы
		double max_delta_f = 0;
		double max_delta_df = 0;
		double max_delta_ddf = 0;

		for (int i = 1; i <= n; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView1->Rows[i - 1]->Cells[1]->Value = xmin + i * h - h;
			dataGridView1->Rows[i - 1]->Cells[2]->Value = xmin + i * h;
			dataGridView1->Rows[i - 1]->Cells[3]->Value = a[i];
			dataGridView1->Rows[i - 1]->Cells[4]->Value = b[i];
			dataGridView1->Rows[i - 1]->Cells[5]->Value = c[i];
			dataGridView1->Rows[i - 1]->Cells[6]->Value = d[i];
		}

		for (int j = 1; j <= 2 * n; j++)
		{
			double S_x;
			for (int i = 1; i <= n; i++)
			{
				if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
				{
					S_x = a[i] + b[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * c[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) + (d[i] / 6.0) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
					break;
				}
			}

			double dS_x;
			for (int i = 1; i <= n; i++)
			{
				if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
				{
					dS_x = b[i] + c[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * d[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
					break;
				}
			}

			double ddS_x;
			for (int i = 1; i <= n; i++)
			{
				if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
				{
					ddS_x = c[i] + d[i] * (xmin + j * 0.5 * h - xmin - i * h);
					break;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[j - 1]->Cells[0]->Value = j;
			dataGridView2->Rows[j - 1]->Cells[1]->Value = xmin + j * h * 0.5;
			dataGridView2->Rows[j - 1]->Cells[2]->Value = function_fi(xmin + j * 0.5 * h);
			dataGridView2->Rows[j - 1]->Cells[3]->Value = S_x;
			dataGridView2->Rows[j - 1]->Cells[4]->Value = function_fi(xmin + j * 0.5 * h) - S_x;
			if (abs(function_fi(xmin + j * 0.5 * h) - S_x) > max_delta_f)
			{
				max_delta_f = abs(function_fi(xmin + j * 0.5 * h) - S_x);
			}
			dataGridView2->Rows[j - 1]->Cells[5]->Value = function_dfi(xmin + j * 0.5 * h);
			dataGridView2->Rows[j - 1]->Cells[6]->Value = dS_x;
			dataGridView2->Rows[j - 1]->Cells[7]->Value = function_dfi(xmin + j * 0.5 * h) - dS_x;
			if (abs(function_dfi(xmin + j * 0.5 * h) - dS_x) > max_delta_df)
			{
				max_delta_df = abs(function_dfi(xmin + j * 0.5 * h) - dS_x);
			}
			dataGridView2->Rows[j - 1]->Cells[8]->Value = function_ddfi(xmin + j * 0.5 * h);
			dataGridView2->Rows[j - 1]->Cells[9]->Value = ddS_x;
			dataGridView2->Rows[j - 1]->Cells[10]->Value = function_ddfi(xmin + j * 0.5 * h) - ddS_x;
			if (abs(function_ddfi(xmin + j * 0.5 * h) - ddS_x) > max_delta_ddf)
			{
				max_delta_ddf = abs(function_ddfi(xmin + j * 0.5 * h) - ddS_x);
			}
		}

		textBox_delta_f->Text = Convert::ToString(max_delta_f);
		textBox_delta_df->Text = Convert::ToString(max_delta_df);
		textBox_delta_ddf->Text = Convert::ToString(max_delta_ddf);

		LineItem Curve1 = panel->AddCurve("fi(x)", f1_list, Color::Red,SymbolType::None);
		LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::Plus);
		LineItem Curve3 = panel->AddCurve("fi'(x)", f3_list, Color::Green, SymbolType::None);
		LineItem Curve4 = panel->AddCurve("S'(x)", f4_list, Color::BlueViolet, SymbolType::Plus);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f4_list = gcnew ZedGraph::PointPairList();

	// Интервал, где есть данные
	double xmin = 0;
	double xmax = 2;

	int n = Convert::ToInt64(textBox3->Text);
	double h = (xmax - xmin) / n;


	double xmin_limit = xmin - 0.1;
	double xmax_limit = xmax + 0.1;
	/*
			double ymin_limit = -1.0;
			double ymax_limit = 100.0;
	*/
	//---------------------------------------------------------//
	std::vector<double> y;
	std::vector<double> alpha;
	std::vector<double> beta;


	y.push_back(1);
	alpha.push_back(0);
	beta.push_back(0);

	for (int i = 1; i < n; i++)
	{
		y.push_back(4 * h + h * alpha.back());
		alpha.push_back(-h / y.back());
		double right = (6.0 / h) * (function_f(xmin + i * h + h) - 2 * function_f(xmin + i * h) + function_f(xmin + i * h - h));
		beta.push_back((right - h * beta.back()) / y.back());
	}
	y.push_back(1);
	beta.push_back(0);

	std::vector<double> c(n + 1);
	std::vector<double> a(n + 1);
	std::vector<double> b(n + 1);
	std::vector<double> d(n + 1);

	c[n] = beta[n];
	// c
	for (int i = n - 1; i >= 0; i--)
	{
		c[i] = alpha[i] * c[i + 1] + beta[i];
	}
	// a
	for (int i = 1; i <= n; i++)
	{
		a[i] = function_f(xmin + i * h);
	}
	// d
	for (int i = 1; i <= n; i++)
	{
		d[i] = (c[i] - c[i - 1]) / h;
	}
	// b
	for (int i = 1; i <= n; i++)
	{
		b[i] = (function_f(xmin + i * h) - function_f(xmin + i * h - h)) / h + c[i] * (h / 3.0) + c[i - 1] * (h / 6.0);
	}
	//---------------------------------------------------------//


	// Список точек
	double n_graph = Convert::ToDouble(textBox_n_graph->Text);
	double h_graph = (xmax - xmin) / n_graph;
	//int i = 0;
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	for (double x = xmin; x <= xmax; x += h_graph)
	{
		double S_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				S_x = a[i] + b[i] * (x - xmin - i * h) + 0.5 * c[i] * (x - xmin - i * h) * (x - xmin - i * h) + (d[i] / 6.0) * (x - xmin - i * h) * (x - xmin - i * h) * (x - xmin - i * h);
				break;
			}
		}
		double dS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				dS_x = b[i] + c[i] * (x - xmin - i * h) + 0.5 * d[i] * (x - xmin - i * h) * (x - xmin - i * h);
				break;
			}
		}
		double ddS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				ddS_x = c[i] + d[i] * (x - xmin - i * h);
				break;
			}
		}

		//Добавление на график
		f1_list->Add(x, function_f(x));
		f2_list->Add(x, S_x);
		f3_list->Add(x, function_df(x));
		f4_list->Add(x, dS_x);
		//Печать в таблицу
		/*
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = x;
		dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
		dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
		*/
		//i++;
	}
	//i = 1;
	//Печать таблицы
	double max_delta_f = 0;
	double max_delta_df = 0;
	double max_delta_ddf = 0;

	for (int i = 1; i <= n; i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView1->Rows[i - 1]->Cells[1]->Value = xmin + i * h - h;
		dataGridView1->Rows[i - 1]->Cells[2]->Value = xmin + i * h;
		dataGridView1->Rows[i - 1]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i - 1]->Cells[4]->Value = b[i];
		dataGridView1->Rows[i - 1]->Cells[5]->Value = c[i];
		dataGridView1->Rows[i - 1]->Cells[6]->Value = d[i];
	}

	for (int j = 1; j <= 2 * n; j++)
	{
		double S_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				S_x = a[i] + b[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * c[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) + (d[i] / 6.0) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		double dS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				dS_x = b[i] + c[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * d[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		double ddS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				ddS_x = c[i] + d[i] * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		dataGridView2->Rows->Add();
		dataGridView2->Rows[j - 1]->Cells[0]->Value = j;
		dataGridView2->Rows[j - 1]->Cells[1]->Value = xmin + j * h * 0.5;
		dataGridView2->Rows[j - 1]->Cells[2]->Value = function_f(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[3]->Value = S_x;
		dataGridView2->Rows[j - 1]->Cells[4]->Value = function_f(xmin + j * 0.5 * h) - S_x;
		if (abs(function_f(xmin + j * 0.5 * h) - S_x) > max_delta_f)
		{
			max_delta_f = abs(function_f(xmin + j * 0.5 * h) - S_x);
		}
		dataGridView2->Rows[j - 1]->Cells[5]->Value = function_df(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[6]->Value = dS_x;
		dataGridView2->Rows[j - 1]->Cells[7]->Value = function_df(xmin + j * 0.5 * h) - dS_x;
		if (abs(function_df(xmin + j * 0.5 * h) - dS_x) > max_delta_df)
		{
			max_delta_df = abs(function_df(xmin + j * 0.5 * h) - dS_x);
		}
		dataGridView2->Rows[j - 1]->Cells[8]->Value = function_ddf(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[9]->Value = ddS_x;
		dataGridView2->Rows[j - 1]->Cells[10]->Value = function_ddf(xmin + j * 0.5 * h) - ddS_x;
		if (abs(function_ddf(xmin + j * 0.5 * h) - ddS_x) > max_delta_ddf)
		{
			max_delta_ddf = abs(function_ddf(xmin + j * 0.5 * h) - ddS_x);
		}
	}

	textBox_delta_f->Text = Convert::ToString(max_delta_f);
	textBox_delta_df->Text = Convert::ToString(max_delta_df);
	textBox_delta_ddf->Text = Convert::ToString(max_delta_ddf);

	LineItem Curve1 = panel->AddCurve("f(x)", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::Plus);
	LineItem Curve3 = panel->AddCurve("f'(x)", f3_list, Color::Green, SymbolType::None);
	LineItem Curve4 = panel->AddCurve("S'(x)", f4_list, Color::BlueViolet, SymbolType::Plus);

	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin_limit;
	panel->XAxis->Scale->Max = xmax_limit;
	/*
			// Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = ymin_limit;
			panel->YAxis->Scale->Max = ymax_limit;
	*/
	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f4_list = gcnew ZedGraph::PointPairList();

	// Интервал, где есть данные
	double xmin = 0;
	double xmax = 2;

	int n = Convert::ToInt64(textBox3->Text);
	double h = (xmax - xmin) / n;


	double xmin_limit = xmin - 0.1;
	double xmax_limit = xmax + 0.1;
	/*
			double ymin_limit = -1.0;
			double ymax_limit = 100.0;
	*/
	//---------------------------------------------------------//
	std::vector<double> y;
	std::vector<double> alpha;
	std::vector<double> beta;


	y.push_back(1);
	alpha.push_back(0);
	beta.push_back(0);

	for (int i = 1; i < n; i++)
	{
		y.push_back(4 * h + h * alpha.back());
		alpha.push_back(-h / y.back());
		double right = (6.0 / h) * (function_f_cos10(xmin + i * h + h) - 2 * function_f_cos10(xmin + i * h) + function_f_cos10(xmin + i * h - h));
		beta.push_back((right - h * beta.back()) / y.back());
	}
	y.push_back(1);
	beta.push_back(0);

	std::vector<double> c(n + 1);
	std::vector<double> a(n + 1);
	std::vector<double> b(n + 1);
	std::vector<double> d(n + 1);

	c[n] = beta[n];
	// c
	for (int i = n - 1; i >= 0; i--)
	{
		c[i] = alpha[i] * c[i + 1] + beta[i];
	}
	// a
	for (int i = 1; i <= n; i++)
	{
		a[i] = function_f_cos10(xmin + i * h);
	}
	// d
	for (int i = 1; i <= n; i++)
	{
		d[i] = (c[i] - c[i - 1]) / h;
	}
	// b
	for (int i = 1; i <= n; i++)
	{
		b[i] = (function_f_cos10(xmin + i * h) - function_f_cos10(xmin + i * h - h)) / h + c[i] * (h / 3.0) + c[i - 1] * (h / 6.0);
	}
	//---------------------------------------------------------//


	// Список точек
	double n_graph = Convert::ToDouble(textBox_n_graph->Text);
	double h_graph = (xmax - xmin) / n_graph;
	//int i = 0;
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	for (double x = xmin; x <= xmax; x += h_graph)
	{
		double S_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				S_x = a[i] + b[i] * (x - xmin - i * h) + 0.5 * c[i] * (x - xmin - i * h) * (x - xmin - i * h) + (d[i] / 6.0) * (x - xmin - i * h) * (x - xmin - i * h) * (x - xmin - i * h);
				break;
			}
		}
		double dS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				dS_x = b[i] + c[i] * (x - xmin - i * h) + 0.5 * d[i] * (x - xmin - i * h) * (x - xmin - i * h);
				break;
			}
		}
		double ddS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
			{
				ddS_x = c[i] + d[i] * (x - xmin - i * h);
				break;
			}
		}

		//Добавление на график
		f1_list->Add(x, function_f_cos10(x));
		f2_list->Add(x, S_x);
		f3_list->Add(x, function_df_dcos10(x));
		f4_list->Add(x, dS_x);
		//Печать в таблицу
		/*
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = x;
		dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
		dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
		*/
		//i++;
	}
	//i = 1;
	//Печать таблицы
	double max_delta_f = 0;
	double max_delta_df = 0;
	double max_delta_ddf = 0;

	for (int i = 1; i <= n; i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i - 1]->Cells[0]->Value = i;
		dataGridView1->Rows[i - 1]->Cells[1]->Value = xmin + i * h - h;
		dataGridView1->Rows[i - 1]->Cells[2]->Value = xmin + i * h;
		dataGridView1->Rows[i - 1]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i - 1]->Cells[4]->Value = b[i];
		dataGridView1->Rows[i - 1]->Cells[5]->Value = c[i];
		dataGridView1->Rows[i - 1]->Cells[6]->Value = d[i];
	}

	for (int j = 1; j <= 2 * n; j++)
	{
		double S_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				S_x = a[i] + b[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * c[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) + (d[i] / 6.0) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		double dS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				dS_x = b[i] + c[i] * (xmin + j * 0.5 * h - xmin - i * h) + 0.5 * d[i] * (xmin + j * 0.5 * h - xmin - i * h) * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		double ddS_x;
		for (int i = 1; i <= n; i++)
		{
			if ((xmin + j * 0.5 * h >= xmin + i * h - h) && (xmin + j * 0.5 * h <= xmin + i * h))
			{
				ddS_x = c[i] + d[i] * (xmin + j * 0.5 * h - xmin - i * h);
				break;
			}
		}

		dataGridView2->Rows->Add();
		dataGridView2->Rows[j - 1]->Cells[0]->Value = j;
		dataGridView2->Rows[j - 1]->Cells[1]->Value = xmin + j * h * 0.5;
		dataGridView2->Rows[j - 1]->Cells[2]->Value = function_f_cos10(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[3]->Value = S_x;
		dataGridView2->Rows[j - 1]->Cells[4]->Value = function_f_cos10(xmin + j * 0.5 * h) - S_x;
		if (abs(function_f_cos10(xmin + j * 0.5 * h) - S_x) > max_delta_f)
		{
			max_delta_f = abs(function_f_cos10(xmin + j * 0.5 * h) - S_x);
		}
		dataGridView2->Rows[j - 1]->Cells[5]->Value = function_df_dcos10(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[6]->Value = dS_x;
		dataGridView2->Rows[j - 1]->Cells[7]->Value = function_df_dcos10(xmin + j * 0.5 * h) - dS_x;
		if (abs(function_df_dcos10(xmin + j * 0.5 * h) - dS_x) > max_delta_df)
		{
			max_delta_df = abs(function_df_dcos10(xmin + j * 0.5 * h) - dS_x);
		}
		dataGridView2->Rows[j - 1]->Cells[8]->Value = function_ddf_ddcos10(xmin + j * 0.5 * h);
		dataGridView2->Rows[j - 1]->Cells[9]->Value = ddS_x;
		dataGridView2->Rows[j - 1]->Cells[10]->Value = function_ddf_ddcos10(xmin + j * 0.5 * h) - ddS_x;
		if (abs(function_ddf_ddcos10(xmin + j * 0.5 * h) - ddS_x) > max_delta_ddf)
		{
			max_delta_ddf = abs(function_ddf_ddcos10(xmin + j * 0.5 * h) - ddS_x);
		}
	}

	textBox_delta_f->Text = Convert::ToString(max_delta_f);
	textBox_delta_df->Text = Convert::ToString(max_delta_df);
	textBox_delta_ddf->Text = Convert::ToString(max_delta_ddf);

	LineItem Curve1 = panel->AddCurve("f(x)+cos(10x)", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("S(x)", f2_list, Color::Blue, SymbolType::None);
	LineItem Curve3 = panel->AddCurve("f'(x)+cos'(10x)", f3_list, Color::Green, SymbolType::None);
	LineItem Curve4 = panel->AddCurve("S'(x)", f4_list, Color::BlueViolet, SymbolType::None);

	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin_limit;
	panel->XAxis->Scale->Max = xmax_limit;
	/*
			// Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = ymin_limit;
			panel->YAxis->Scale->Max = ymax_limit;
	*/
	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
};
}
