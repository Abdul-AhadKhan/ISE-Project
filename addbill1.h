#pragma once
#include<string>
#include<cstring>
#include <fstream>
#include"Class.h"
#include"bill.h"
#include"Teriff.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addbill1
	/// </summary>
	public ref class addbill1 : public System::Windows::Forms::Form
	{
	public:
		addbill1(void)
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
	public:	static void StringCopy(char* destination, std::string source, int& i)
	{
		int index = 0;
		for (index = 0; source[i] != '\0'; i++)
		{
			destination[index] = source[i];
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
	public:static int stringToint( std::string source)
	{
		
		int digitPlace = 1;
		int result = 0;
		
		for (int k =source.length()-1;k>=0 ; k--)
		{
			result = result + ((static_cast<int>(source[k]) - 48) * digitPlace);
			digitPlace = digitPlace * 10;
		}
		return result;
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addbill1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addbill1::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(121, 698);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 17;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(135, 433);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 24);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Enter Peak Hours Units:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(135, 544);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Select Date: ";
			this->label3->Click += gcnew System::EventHandler(this, &addbill1::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(135, 330);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Enter Regular Units: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(360, 430);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(287, 34);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &addbill1::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(360, 327);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 34);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &addbill1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(360, 213);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 34);
			this->textBox1->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(267, 3);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 159);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(135, 216);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 24);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Enter Coustmer Id: ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(360, 537);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(287, 34);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(822, 579);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 46);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Add Bill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addbill1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 591);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 34);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addbill1::button2_Click);
			// 
			// addbill1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 637);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"addbill1";
			this->Text = L"addbill1";
			this->Load += gcnew System::EventHandler(this, &addbill1::addbill1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Teriff T1;
		std::ofstream fout;

		std::string id;
		std::string reglrunit;
		std::string pkunit;
		int regularunit;
		int peakunit;
		int day = 0;
		int month = 0;
		int year = 0;
		int due_day = 0;
		int due_month = 0;

		int due_year = 0;
		char status[] = "Unpaid";
		int CostOfElectricity;
		
		int Sales_Tax = 0;
		int	TotalAmount =0;
		int FixedCharges=0  ;

		bool check = false;
		MarshalString(textBox1->Text, id);


		int len = id.length();

		char* id1 = new char[len + 1];
		int i = 0;
		while (i < len) {
			id1[i] = id[i];
			i++;
		}
		id1[i] = '\0';
		int totalCustomers = 0;
		char** CustomerId = 0;
		char* CustomerCNIC = new char[14];
		char* CustomerName = new char[25];
		char* address = new char[35];
		char* CustomerPhoneNo = new char[13];
		char* CustomerType = new char[12];
		char* MeterType = new char[2];
		char* ConnectionDate = new char[11];
		int RegularUnits=0   ;
		int PeakUnits=0;
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
		fin.open("CustomerInfo.txt");

		 i = 0;

		int number = 0;
		while (number < totalCustomers)
		{
			getline(fin, customer);
			i = 0;
			CopyTillComma(CustomerId[number], customer, i);
			number++;
		}
		fin.close();
		int currentCustomer = 0;
		for (int i = 0; i < totalCustomers; i++)
		{
			if (strcmp(CustomerId[i], id1) == 0)
			{
				check = true;
				currentCustomer = i;
				break;
			}
		}
		if (check) {
			fin.open("CustomerInfo.txt");
			number = 0;
			i = 0;
			while (number < totalCustomers) {
				
					getline(fin, customer);
					i = 0;
					CopyTillComma(CustomerId[number], customer, i);
					
					if(number==currentCustomer){
						i += 2;
					CopyTillComma(CustomerCNIC, customer, i);
					i += 2;
					CopyTillComma(CustomerName, customer, i);
					i += 2;
					CopyTillComma(address, customer, i);
					i += 2;
					CopyTillComma(CustomerPhoneNo, customer, i);
					i += 2;
					CopyTillComma(CustomerType, customer, i);
					i += 2;
					CopyTillComma(MeterType, customer, i);
					i += 2;
					CopyTillComma(ConnectionDate, customer, i);
					i += 2;
					RegularUnits = CharacterToInteger(&RegularUnits, customer, i);
					i += 2;
					PeakUnits = CharacterToInteger(&PeakUnits, customer, i);
					i += 2;
					break;
				}
				number++;
			}
			fin.close();
			
			if (MeterType[0] == 'S')
			{
				MarshalString(textBox2->Text, reglrunit);
				regularunit = stringToint(reglrunit);
				peakunit = 0;
				if (CustomerType[0] == 'D' || CustomerType[0]  == 'd')
				{
					CostOfElectricity = (regularunit - RegularUnits) * T1.RegularUnitPrice[0];
					TotalAmount = CostOfElectricity + T1.FixedCharges[0];
					Sales_Tax = (T1.TaxPerecent[0] * TotalAmount) / 100;
					TotalAmount = TotalAmount + Sales_Tax;
					FixedCharges = T1.FixedCharges[0];
				}
				else
				{
					CostOfElectricity = (regularunit - RegularUnits) * T1.RegularUnitPrice[1];
					TotalAmount = CostOfElectricity + T1.FixedCharges[1];
					Sales_Tax = (T1.TaxPerecent[1] * TotalAmount) / 100;
					TotalAmount = TotalAmount + Sales_Tax;
					FixedCharges = T1.FixedCharges[1];
				}
			}
			else
			{
				MarshalString(textBox2->Text, reglrunit);
				regularunit = stringToint(reglrunit);

				MarshalString(textBox3->Text, pkunit);
						peakunit = stringToint(pkunit);
				
				
				
				if (CustomerType[0] == 'd' || CustomerType[0] == 'D')
				{
					CostOfElectricity = ((regularunit - RegularUnits) * T1.RegularUnitPrice[2]) + ((peakunit - PeakUnits) * T1.PeakUnitPrice[2]);
					TotalAmount = CostOfElectricity + T1.FixedCharges[2];
					Sales_Tax = (T1.TaxPerecent[2] * TotalAmount) / 100;
					TotalAmount = TotalAmount + Sales_Tax;
					FixedCharges = T1.FixedCharges[2];
				}
				else
				{
					CostOfElectricity = ((regularunit - RegularUnits) * T1.RegularUnitPrice[3]) + ((peakunit - PeakUnits) * T1.PeakUnitPrice[3]);
					TotalAmount = CostOfElectricity + T1.FixedCharges[3];
					Sales_Tax = (T1.TaxPerecent[3] * TotalAmount) / 100;
					TotalAmount = TotalAmount + Sales_Tax;
					FixedCharges = T1.FixedCharges[3];
				}
			}
			time_t now = time(0);

#pragma warning(suppress : 4996)
			tm* ltm = localtime(&now);
			year = 1900 + ltm->tm_year;
			month = 1 + ltm->tm_mon;
			day = ltm->tm_mday;
			due_day = day;
			due_month = month;
			due_year = year;
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (due_day + 7 > 31)
				{
					due_day = (due_day + 7) - 31;
					due_month++;
					if (due_month > 12)
					{
						due_month = 1;
						due_year++;
					}
				}
				else
				{
					due_day = due_day + 7;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (due_day + 7 > 30)
				{
					due_day = (due_day + 7) - 30;
					due_month++;
				}
				else
				{
					due_day = due_day + 7;
				}
			}
			else
			{
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				{
					if (due_day + 7 > 29)
					{
						due_day = (due_day + 30) - 29;
						due_month++;
					}
					else
					{
						due_day = due_day + 7;
					}
				}
				else
				{
					if (due_day + 7 > 28)
					{
						due_day = (due_day + 7) - 28;
						due_month++;
					}
					else
					{
						due_day = due_day + 7;
					}
				}
			}
			
			fout.open("BillingInfo.txt",std:: ios::app);
			fout << CustomerId[currentCustomer] << ", " << month << ", " << regularunit << ", " << peakunit << ", " << day << "/" << month << "/" << year << ", ";
			fout << CostOfElectricity << ", " << Sales_Tax << ", " << FixedCharges << ", " << TotalAmount << ", ";
			fout << due_day << "/" << due_month << "/" << due_year << ", " << "Unpaid" << ", 00/00/0000" << "\n";
			fout.close();

			this->Close();
			
			
		}
		else {
		MessageBox::Show("Invalid Customer Id \nEnter Valid Customer Id");
		}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addbill1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
