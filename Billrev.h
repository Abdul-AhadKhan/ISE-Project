#pragma once
#include<string>
#include<fstream>
#include<cstring>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Billrev
	/// </summary>
	public ref class Billrev : public System::Windows::Forms::Form
	{
	public:
		Billrev(void)
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
		for (index = 0; index < len; )
		{
			destination[index] = source[index];
			index++;
		}
		destination[index] = '\0';
	}
	public:	static void StringCopy(char* destination, char* source)
	{
		int i = 0;
		for (i = 0; source[i] != '\0'; i++)
		{
			destination[i] = source[i];
		}
		destination[i] = '\0';
	}
	public:static int CharacterToInteger(int* destination, std::string source, int& i)
	{
		int AlternateOfi = i;
		int digitPlace = 1;
		int result = 0;
		for (; source[i] != ',' && source[i] != '\0'; i++)
		{

		}
		for (int k = i - 1; k >= AlternateOfi; k--)
		{
			result = result + ((static_cast<int>(source[k]) - 48) * digitPlace);
			digitPlace = digitPlace * 10;
		}
		return result;
	}
	public:static int stringToint(std::string source)
	{

		int digitPlace = 1;
		int result = 0;

		for (int k = source.length() - 1; k >= 0; k--)
		{
			result = result + ((static_cast<int>(source[k]) - 48) * digitPlace);
			digitPlace = digitPlace * 10;
		}
		return result;
	}
	public:	static void CopyTillCommaString(std:: string  &destination, std::string source, int& i)
	{
		int index = 0;
		for (index = 0; source[i] != ','; i++)
		{
			destination[index] = source[i];
			index++;
		}
		destination[index] = '\0';
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Billrev()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;




	private: System::Windows::Forms::Label^ runit;
	private: System::Windows::Forms::Label^ punit;
	private: System::Windows::Forms::Label^ tbill;
	private: System::Windows::Forms::Label^ stax;
	private: System::Windows::Forms::Label^ stat;










	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ d_date;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Billrev::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->runit = (gcnew System::Windows::Forms::Label());
			this->punit = (gcnew System::Windows::Forms::Label());
			this->tbill = (gcnew System::Windows::Forms::Label());
			this->stax = (gcnew System::Windows::Forms::Label());
			this->stat = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->d_date = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(286, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(404, 146);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Enter Customer ID :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(399, 190);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 31);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Billrev::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(102, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 21);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Regular Reading :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(102, 363);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 21);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Peak Reading";
			this->label7->Click += gcnew System::EventHandler(this, &Billrev::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(102, 433);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 21);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Total Bill :";
			this->label8->Click += gcnew System::EventHandler(this, &Billrev::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(102, 519);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 21);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Sales Tax :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(102, 589);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 21);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Bill Status :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(102, 653);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 21);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Due Date:";
			// 
			// runit
			// 
			this->runit->AutoSize = true;
			this->runit->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->runit->Location = System::Drawing::Point(415, 290);
			this->runit->Name = L"runit";
			this->runit->Size = System::Drawing::Size(26, 22);
			this->runit->TabIndex = 27;
			this->runit->Text = L"--";
			// 
			// punit
			// 
			this->punit->AutoSize = true;
			this->punit->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->punit->Location = System::Drawing::Point(415, 363);
			this->punit->Name = L"punit";
			this->punit->Size = System::Drawing::Size(26, 22);
			this->punit->TabIndex = 28;
			this->punit->Text = L"--";
			// 
			// tbill
			// 
			this->tbill->AutoSize = true;
			this->tbill->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbill->Location = System::Drawing::Point(415, 433);
			this->tbill->Name = L"tbill";
			this->tbill->Size = System::Drawing::Size(26, 22);
			this->tbill->TabIndex = 29;
			this->tbill->Text = L"--";
			this->tbill->Click += gcnew System::EventHandler(this, &Billrev::tbill_Click);
			// 
			// stax
			// 
			this->stax->AutoSize = true;
			this->stax->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stax->Location = System::Drawing::Point(415, 519);
			this->stax->Name = L"stax";
			this->stax->Size = System::Drawing::Size(26, 22);
			this->stax->TabIndex = 30;
			this->stax->Text = L"--";
			this->stax->Click += gcnew System::EventHandler(this, &Billrev::label20_Click);
			// 
			// stat
			// 
			this->stat->AutoSize = true;
			this->stat->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stat->Location = System::Drawing::Point(415, 589);
			this->stat->Name = L"stat";
			this->stat->Size = System::Drawing::Size(26, 22);
			this->stat->TabIndex = 31;
			this->stat->Text = L"--";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(0, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(54, 17);
			this->label22->TabIndex = 32;
			this->label22->Text = L"label22";
			// 
			// d_date
			// 
			this->d_date->AutoSize = true;
			this->d_date->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d_date->Location = System::Drawing::Point(415, 653);
			this->d_date->Name = L"d_date";
			this->d_date->Size = System::Drawing::Size(26, 22);
			this->d_date->TabIndex = 33;
			this->d_date->Text = L"--";
			this->d_date->Click += gcnew System::EventHandler(this, &Billrev::d_date_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Indigo;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(652, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 29);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Show Bill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Billrev::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(910, 640);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 47);
			this->button2->TabIndex = 35;
			this->button2->Text = L"BACK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Billrev::button2_Click);
			// 
			// Billrev
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1055, 684);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->d_date);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->stat);
			this->Controls->Add(this->stax);
			this->Controls->Add(this->tbill);
			this->Controls->Add(this->punit);
			this->Controls->Add(this->runit);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Billrev";
			this->Text = L"Billrev";
			this->Load += gcnew System::EventHandler(this, &Billrev::Billrev_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Billrev_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int totalBills = 0;
		char** CustomerId = nullptr;

		std::string RegualrUnits = 0;
		std::string PeakUnits = 0;
		std::string garbage;

		std::string SalesTax = 0;

		std::string TotalBIllingAmount = 0;
		std::string DueDate = 0;
		std::string Status = 0;
		std::string  bill;
		std::ifstream fin;
		fin.open("BillingInfo.txt");
		while (!fin.eof())
		{
			getline(fin, bill);
			totalBills++;
		}
		totalBills--;
		fin.close();
		CustomerId = new char* [totalBills];
		for (int i = 0; i < totalBills; i++)
		{
			CustomerId[i] = new char[5];
		}
		fin.open("BillingInfo.txt");

		int i = 0;
		int number = 0;

		while (number < totalBills)
		{
			i = 0;
			getline(fin, bill);
			CopyTillComma(CustomerId[number], bill, i);
			number++;
		}
		fin.close();
		std::string c_id;
		MarshalString(textBox1->Text, c_id);
		char* id = new char[5];
		StringCopy(id, c_id);
		bool check = false;
		int current;
		for (int k = 0; k < totalBills; k++) {
			if (strcmp(id, CustomerId[k]) == 0)
			{
				check = true;
				current = k;
				break;
			}
		}
		if (check) {
			

			i = 0;
			number = 0;

			while (number < totalBills)
			{
				i = 0;
				getline(fin, bill);

				CopyTillComma(CustomerId[number], bill, i);
				i += 2;
				if (number == current) {
					CopyTillCommaString(garbage, bill, i);
					i += 2;
					CopyTillCommaString(RegualrUnits, bill, i);
					i += 2;
					CopyTillCommaString(PeakUnits, bill, i);
					i += 2;
					CopyTillCommaString(garbage, bill, i);
					i += 2;
					CopyTillCommaString(garbage, bill, i);
					i += 2;
					CopyTillCommaString(SalesTax, bill, i);
					i += 2;
					CopyTillCommaString(garbage, bill, i);
					i += 2;
					CopyTillCommaString(TotalBIllingAmount, bill, i);
					i += 2;
					CopyTillCommaString(DueDate, bill, i);
					i += 2;
					CopyTillCommaString(Status, bill, i);
					i += 2;
					break;
				}
				number++;
			}
			fin.close();


			runit->Text = gcnew String(RegualrUnits.data());
			punit->Text = gcnew String(PeakUnits.data());
			tbill->Text = gcnew String(TotalBIllingAmount.data());
			stax->Text = gcnew String(SalesTax.data());
			stat->Text = gcnew String(Status.data());
			d_date->Text = gcnew String(DueDate.data());





		}
	
	else {
	MessageBox::Show("Invalid Customer Id ");
	}
}
private: System::Void tbill_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void d_date_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
