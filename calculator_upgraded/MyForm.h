#pragma once

namespace calculatorupgraded {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn6;



	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnMinus;



	private: System::Windows::Forms::Button^ btnDot;

	private: System::Windows::Forms::Button^ btnErase;

	private: System::Windows::Forms::Button^ btnEnter;


	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMin;


	private: System::Windows::Forms::Button^ btnMax;
	private: System::Windows::Forms::Button^ btnMid;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn0;


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
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnErase = (gcnew System::Windows::Forms::Button());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnMax = (gcnew System::Windows::Forms::Button());
			this->btnMid = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(14, 129);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(41, 25);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(51, 129);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(41, 25);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(89, 129);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(41, 25);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(14, 173);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(41, 25);
			this->btn1->TabIndex = 3;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(89, 151);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(41, 25);
			this->btn6->TabIndex = 4;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(51, 151);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(41, 25);
			this->btn5->TabIndex = 5;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(14, 151);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(41, 25);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(89, 173);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(41, 25);
			this->btn3->TabIndex = 7;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(51, 173);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(41, 25);
			this->btn2->TabIndex = 8;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(173, 129);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(41, 25);
			this->btnClear->TabIndex = 9;
			this->btnClear->Text = L"Clr";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(14, 194);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(41, 25);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(89, 194);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(41, 25);
			this->btnMinus->TabIndex = 11;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(51, 194);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(41, 25);
			this->btnDot->TabIndex = 12;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// btnErase
			// 
			this->btnErase->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnErase->Location = System::Drawing::Point(173, 160);
			this->btnErase->Name = L"btnErase";
			this->btnErase->Size = System::Drawing::Size(41, 25);
			this->btnErase->TabIndex = 13;
			this->btnErase->Text = L"←";
			this->btnErase->UseVisualStyleBackColor = true;
			this->btnErase->Click += gcnew System::EventHandler(this, &MyForm::btnErase_Click);
			// 
			// btnEnter
			// 
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->Location = System::Drawing::Point(14, 235);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(78, 25);
			this->btnEnter->TabIndex = 16;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MyForm::btnEnter_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(135, 235);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(78, 25);
			this->btnExit->TabIndex = 17;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnMin
			// 
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMin->Location = System::Drawing::Point(14, 84);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(70, 25);
			this->btnMin->TabIndex = 20;
			this->btnMin->Text = L"Min";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::btnMin_Click);
			// 
			// btnMax
			// 
			this->btnMax->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMax->Location = System::Drawing::Point(144, 84);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(70, 25);
			this->btnMax->TabIndex = 21;
			this->btnMax->Text = L"Max";
			this->btnMax->UseVisualStyleBackColor = true;
			this->btnMax->Click += gcnew System::EventHandler(this, &MyForm::btnMax_Click);
			// 
			// btnMid
			// 
			this->btnMid->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMid->Location = System::Drawing::Point(80, 84);
			this->btnMid->Name = L"btnMid";
			this->btnMid->Size = System::Drawing::Size(70, 25);
			this->btnMid->TabIndex = 22;
			this->btnMid->Text = L"Mid";
			this->btnMid->UseVisualStyleBackColor = true;
			this->btnMid->Click += gcnew System::EventHandler(this, &MyForm::btnMid_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Set to...";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 21);
			this->textBox1->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Result";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(229, 277);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMid);
			this->Controls->Add(this->btnMax);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->btnErase);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Font = (gcnew System::Drawing::Font(L"Symbol", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();
}
private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {

	Button^ button = safe_cast<Button^>(sender);


	textBox1->Text = textBox1->Text + button->Text;
}
private: System::Void btnErase_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Done");
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Goodbye");
	Application::Exit();
}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();
	textBox1->Text = textBox1->Text + 50;
}
private: System::Void btnMid_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();
	textBox1->Text = textBox1->Text + 100;
}
private: System::Void btnMax_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();
	textBox1->Text = textBox1->Text + 250;
}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Length == 0) {
		textBox1->Text = textBox1->Text + "-";
	}
}
};
}
