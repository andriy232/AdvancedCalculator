#pragma once
#include <msclr\marshal_cppstd.h>
#include <vcclr.h>

namespace AdvancedCalculator {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
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
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtBox;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnSign;
	private: System::Windows::Forms::Button^  btnDot;
	private: System::Windows::Forms::Button^  btnFib;
	private: System::Windows::Forms::Button^  btnMed;
	private: System::Windows::Forms::Button^  btnDeg;
	private: System::Windows::Forms::Label^  lbl;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Button^  btnDelLast;
	private: System::Windows::Forms::Button^  btnDelAll;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnMulti;
	private: System::Windows::Forms::Button^  btnMin;
	private: System::Windows::Forms::Button^  btnPlus;
	private: System::Windows::Forms::Button^  btnEq;
	private: System::Windows::Forms::Button^  btnRoot;


	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form::typeid));
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnSign = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btnRoot = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnFib = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnDeg = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnMed = (gcnew System::Windows::Forms::Button());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->btnDelLast = (gcnew System::Windows::Forms::Button());
			this->btnDelAll = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// txtBox
			// 
			this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBox->Location = System::Drawing::Point(12, 49);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtBox->Size = System::Drawing::Size(182, 26);
			this->txtBox->TabIndex = 0;
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(3, 129);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(38, 36);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &form::btn1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				43)));
			this->tableLayoutPanel1->Controls->Add(this->btnSign, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn1, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn4, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn7, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn0, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn2, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn5, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnRoot, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn8, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnDot, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn3, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn6, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnFib, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn9, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnDeg, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnDiv, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnMulti, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnMin, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnPlus, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnEq, 3, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 81);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(182, 227);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btnSign
			// 
			this->btnSign->Location = System::Drawing::Point(3, 171);
			this->btnSign->Name = L"btnSign";
			this->btnSign->Size = System::Drawing::Size(38, 36);
			this->btnSign->TabIndex = 11;
			this->btnSign->Text = L"+/-";
			this->btnSign->UseVisualStyleBackColor = true;
			this->btnSign->Click += gcnew System::EventHandler(this, &form::btnSign_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(3, 87);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(38, 36);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &form::btn4_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(3, 45);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(38, 36);
			this->btn7->TabIndex = 7;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &form::btn7_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(49, 171);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(38, 36);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &form::btn0_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(49, 129);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(38, 36);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &form::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(49, 87);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(38, 36);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &form::btn5_Click);
			// 
			// btnRoot
			// 
			this->btnRoot->Location = System::Drawing::Point(49, 3);
			this->btnRoot->Name = L"btnRoot";
			this->btnRoot->Size = System::Drawing::Size(38, 36);
			this->btnRoot->TabIndex = 14;
			this->btnRoot->Text = L"√";
			this->btnRoot->UseVisualStyleBackColor = true;
			this->btnRoot->Click += gcnew System::EventHandler(this, &form::btnRoot_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(49, 45);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(38, 36);
			this->btn8->TabIndex = 9;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &form::btn8_Click);
			// 
			// btnDot
			// 
			this->btnDot->Location = System::Drawing::Point(95, 171);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(38, 36);
			this->btnDot->TabIndex = 12;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &form::btnDot_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(95, 129);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(38, 36);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &form::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(95, 87);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(38, 36);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &form::btn6_Click);
			// 
			// btnFib
			// 
			this->btnFib->Location = System::Drawing::Point(3, 3);
			this->btnFib->Name = L"btnFib";
			this->btnFib->Size = System::Drawing::Size(38, 36);
			this->btnFib->TabIndex = 13;
			this->btnFib->Text = L"Fib";
			this->btnFib->UseVisualStyleBackColor = true;
			this->btnFib->Click += gcnew System::EventHandler(this, &form::btnFib_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(95, 45);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(38, 36);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &form::btn9_Click);
			// 
			// btnDeg
			// 
			this->btnDeg->Location = System::Drawing::Point(95, 3);
			this->btnDeg->Name = L"btnDeg";
			this->btnDeg->Size = System::Drawing::Size(38, 36);
			this->btnDeg->TabIndex = 15;
			this->btnDeg->Text = L"x^n";
			this->btnDeg->UseVisualStyleBackColor = true;
			this->btnDeg->Click += gcnew System::EventHandler(this, &form::btnDeg_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(142, 3);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(37, 36);
			this->btnDiv->TabIndex = 8;
			this->btnDiv->Text = L"÷";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &form::btnDiv_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->Location = System::Drawing::Point(142, 45);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(37, 36);
			this->btnMulti->TabIndex = 8;
			this->btnMulti->Text = L"×";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &form::btnMulti_Click);
			// 
			// btnMin
			// 
			this->btnMin->Location = System::Drawing::Point(142, 87);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(37, 36);
			this->btnMin->TabIndex = 8;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &form::btnMin_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(142, 129);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(37, 36);
			this->btnPlus->TabIndex = 8;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &form::btnPlus_Click);
			// 
			// btnEq
			// 
			this->btnEq->Location = System::Drawing::Point(142, 171);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(37, 36);
			this->btnEq->TabIndex = 8;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = true;
			this->btnEq->Click += gcnew System::EventHandler(this, &form::btnEq_Click);
			// 
			// btnMed
			// 
			this->btnMed->Location = System::Drawing::Point(12, 397);
			this->btnMed->Name = L"btnMed";
			this->btnMed->Size = System::Drawing::Size(133, 36);
			this->btnMed->TabIndex = 14;
			this->btnMed->Text = L"Calculate Median";
			this->btnMed->UseVisualStyleBackColor = true;
			this->btnMed->Click += gcnew System::EventHandler(this, &form::btnMed_Click);
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(12, 18);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(0, 13);
			this->lbl->TabIndex = 3;
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AllowUserToDeleteRows = false;
			this->dgv->AllowUserToResizeColumns = false;
			this->dgv->AllowUserToResizeRows = false;
			this->dgv->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(12, 336);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(302, 47);
			this->dgv->TabIndex = 4;
			this->dgv->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &form::dgv_CellBeginEdit);
			this->dgv->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &form::dgv_CellEndEdit);
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(12, 320);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(0, 13);
			this->lblInfo->TabIndex = 5;
			// 
			// btnDelLast
			// 
			this->btnDelLast->Location = System::Drawing::Point(154, 397);
			this->btnDelLast->Name = L"btnDelLast";
			this->btnDelLast->Size = System::Drawing::Size(77, 36);
			this->btnDelLast->TabIndex = 6;
			this->btnDelLast->Text = L"Delete last";
			this->btnDelLast->UseVisualStyleBackColor = true;
			this->btnDelLast->Click += gcnew System::EventHandler(this, &form::btnDelLast_Click);
			// 
			// btnDelAll
			// 
			this->btnDelAll->Location = System::Drawing::Point(237, 397);
			this->btnDelAll->Name = L"btnDelAll";
			this->btnDelAll->Size = System::Drawing::Size(77, 36);
			this->btnDelAll->TabIndex = 7;
			this->btnDelAll->Text = L"Delete all";
			this->btnDelAll->UseVisualStyleBackColor = true;
			this->btnDelAll->Click += gcnew System::EventHandler(this, &form::btnDelAll_Click);
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(330, 446);
			this->Controls->Add(this->btnDelAll);
			this->Controls->Add(this->btnDelLast);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtBox);
			this->Controls->Add(this->btnMed);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"form";
			this->Text = L"Advanced Calculator";
			this->Load += gcnew System::EventHandler(this, &form::form_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "0";
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "1";
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "2";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "3";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "4";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "5";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "6";
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "7";
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += "9";
}
private: System::Void btnRoot_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtBox->Text != "") {
		txtBox->Text = Convert::ToString(Math::Sqrt(Convert::ToDouble(txtBox->Text)));
	}
}
		 int action;
private: System::Void btnDeg_Click(System::Object^  sender, System::EventArgs^  e) {
	action = 5;//raise in the degree
	if (txtBox->Text != "")
		txtBox->Tag = txtBox->Text;
	txtBox->Text = "";
};
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	action = 3;//button for dividing 
	if (txtBox->Text)
		txtBox->Tag = txtBox->Text;
	txtBox->Text = "";
};
private: System::Void btnMulti_Click(System::Object^  sender, System::EventArgs^  e) {
	action = 4;//button for multiplying
	if (txtBox->Text)
		txtBox->Tag = txtBox->Text;
	txtBox->Text = "";
};
private: System::Void btnMin_Click(System::Object^  sender, System::EventArgs^  e) {
	action = 2;//button for minus
	if (txtBox->Text)
		txtBox->Tag = txtBox->Text;
	txtBox->Text = "";
};
private: System::Void btnPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	action = 1;//button for plus
	if (txtBox->Text)
		txtBox->Tag = txtBox->Text;
	txtBox->Text = "";
};
private: System::Void btnEq_Click(System::Object^  sender, System::EventArgs^  e) {
	//equal symbol
	double text = Convert::ToDouble(txtBox->Text);
	double tag = Convert::ToDouble(txtBox->Tag);
	switch (action)
	{
	case 1:
		txtBox->Text = Convert::ToString(text + tag);
		break;
	case 2:
		txtBox->Text = Convert::ToString(tag - text);
		break;
	case 3:
		if (tag != 0)
			txtBox->Text = Convert::ToString(tag / text);
		break;
	case 4:
		txtBox->Text = Convert::ToString(text * tag);
		break;
	case 5:
		txtBox->Text = Convert::ToString(Math::Pow(tag, text));
		break;
	}
};

private: System::Void btnFib_Click(System::Object^  sender, System::EventArgs^  e) {
	//button to calculate fibonacci element
	double num = Convert::ToDouble(txtBox->Text);
	if (num > 48) {
		lbl->Text = Convert::ToString("Max Fibonacci element more than 47!");
	} else {
		txtBox->Text = Convert::ToString(fibonaccy(num));
	}
}
double fibonaccy(double num)
{
	//function to finding the Fibonacci sequence n-element
	if (num < 1) return 0;
	if (num == 1) return 1;
	unsigned long oldValue = 0;
	unsigned long value = 1;
	unsigned long hold;
	for (int i = 1; i < num; i++)
	{
		hold = value;
		value += oldValue;
		oldValue = hold;
	}
	return(value);
};
private: System::Void btnSign_Click(System::Object^  sender, System::EventArgs^  e) {
	//if number isnt 0 then * to -1
	double num = Convert::ToDouble(txtBox->Text);
	if (txtBox->Text != "0") {
			txtBox->Text = Convert::ToString(num*(-1));
	}
}

private: System::Void btnDot_Click(System::Object^  sender, System::EventArgs^  e) {
	//if textbox isnt empty add an .
	System::String ^ str = txtBox->Text;
	if (str != "") {
		if (!str->Contains(".")) {
			txtBox->Text += ".";
		}
	}
	else txtBox->Text += "0.";
}

void sort(int mas[], int n) {
	//sorting function
	int z, j, t;
	for (int i = 1; i < n; i++) {
		t = mas[i];
		for (j = i - 1; j >= 0 && t < mas[j]; j--)
			mas[j + 1] = mas[j];
		mas[j + 1] = t;
	}
}
private: System::Void btnMed_Click(System::Object^  sender, System::EventArgs^  e) {
	//button for finding median of set of numbers
	int size = Convert::ToInt32(dgv->ColumnCount);
	//new array for numbers
	int *mas = new int[size];
	if (Convert::ToString(dgv->Rows[0]->Cells[dgv->ColumnCount - 1]->Value) == "")
		--size;
	//get the numbers from datagridview
	for (int i = 0; i < size; i++) {
		mas[i] = Convert::ToDouble(dgv->Rows[0]->Cells[i]->Value);
	}
	//calculate average
	float avg = 0;
	for (int i = 0; i < size; i++) {
		avg += Convert::ToDouble(dgv->Rows[0]->Cells[i]->Value);
	}

	//sorting array
	sort(mas, size);

	//put the numbers back to datagridview
	for (int i = 0; i < size; i++) {
		dgv->Rows[0]->Cells[i]->Value = mas[i];
	}
	//display results
	lblInfo->Text = Convert::ToString("Median of set: " + mas[size / 2] + ", Average: " + avg/size);
	//delete array
	delete[] mas;
}
private: System::Void dgv_CellBeginEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^  e) {
	
	if (Convert::ToString(dgv->Rows[0]->Cells[dgv->ColumnCount - 2]->Value) != "") {
		//add a column
		dgv->ColumnCount += 1;
	}
	for (int i = 0; i < (dgv->ColumnCount - 1); i++) {
		//numbered columns
		dgv->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
	}
}
private: System::Void dgv_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	int q;
	//check for errors when entering value in table
	if (!Int32::TryParse(Convert::ToString(dgv->CurrentCell->Value), q))
	{
		MessageBox::Show("Accepted only numbers!", "Error");
		dgv->CurrentCell->Value = 0;
	}
	dgv->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dgv->AutoResizeColumns();

}
private: System::Void form_Load(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text += Convert::ToString("0");
	dgv->TopLeftHeaderCell->Value = "Numbers";
	dgv->ColumnCount = 2;
	dgv->Columns[0]->HeaderCell->Value = Convert::ToString(1);
	dgv->RowCount = 1;

}
private: System::Void btnDelLast_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgv->ColumnCount != 2) {
		dgv->ColumnCount -= 1;
	}
}
private: System::Void btnDelAll_Click(System::Object^  sender, System::EventArgs^  e) {
	int size = Convert::ToInt32(dgv->ColumnCount)-1;
	for (int i = 0; i < size; i++) {
		if (dgv->ColumnCount != 2) {
			dgv->ColumnCount -= 1;
			dgv->Rows[0]->Cells[size - i]->Value = Convert::ToString("");
		}
	}
}
};
}
