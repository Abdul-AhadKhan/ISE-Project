#pragma once
#include<fstream>
#include<string>
#include<cstring>
#include"Cmenu.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CLogin
	/// </summary>
	public ref class CLogin : public System::Windows::Forms::Form
	{
	public:
		CLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:static void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	public:	static void CopyTillComma(char* destination, std::string source, int& i)
	{
		int index = 0;
		for (index = 0; source[i] != ','; i++)
		{
			destination[index] = source[i];
			index++;
		}
		destination[index] = '\0';
	}
	public:	static void StringCopy(char* destination, std::string source)
	{
		int index = 0;
		int len = source.length();
		for (index = 0; index<len; )
		{
			destination[index] = source[index];
			index++;
		}
		destination[index] = '\0';
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CLogin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(138, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(601, 195);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(134, 279);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter Customer Id :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(134, 378);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Enter CNIC :";
			this->label2->Click += gcnew System::EventHandler(this, &CLogin::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(345, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 34);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CLogin::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(345, 276);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 34);
			this->textBox2->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(641, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 44);
			this->button1->TabIndex = 13;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CLogin::button1_Click);
			// 
			// CLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 544);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CLogin";
			this->Text = L"CLogin";
			this->Load += gcnew System::EventHandler(this, &CLogin::CLogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CLogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int totalCustomers = 0;
	char** CustomerId = 0;
	char** CustomerCNIC = 0;
	char** CustomerName = 0;
	std::string customer;
	std::ifstream fin;
	fin.open("CustomerInfo.txt");
	while (!fin.eof())
	{
		getline(fin, customer);
		totalCustomers++;
	}
	fin.close();
	totalCustomers--;
	CustomerId = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		CustomerId[i] = new char[5];
	}
	CustomerCNIC = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		CustomerCNIC[i] = new char[14];
	}
	fin.open("CustomerInfo.txt");

	int i = 0;

	int number = 0;
	while (number < totalCustomers)
	{
		getline(fin, customer);
		i = 0;
		CopyTillComma(CustomerId[number], customer, i);
		i += 2;
		CopyTillComma(CustomerCNIC[number], customer, i);
		
		number++;
	}
	fin.close();
	std::string idc;
	std::string cnic1;
	bool check = false;
	char* c_id = new char[5];
	char* c_cnic = new char[15];
	MarshalString(textBox2->Text, idc);
	StringCopy(c_id,idc);
	MarshalString(textBox1->Text, cnic1);
	StringCopy(c_cnic, cnic1);
	for (int i = 0; i < totalCustomers; i++)
	{
		if (strcmp(c_id, CustomerId[i]) == 0)
		{
			if (strcmp(CustomerCNIC[i], c_cnic) == 0)
			{
				check = true;
			}
		}
	}
	if (check) {
		Cmenu cm;
		this->Hide();
		cm.ShowDialog();
	}
	else {
		MessageBox::Show("Invalid Customer Id or CNIC");
	}

}
};
}
