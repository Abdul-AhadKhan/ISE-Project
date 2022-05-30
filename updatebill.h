#pragma once
#include"Class.h"
#include"bill.h"
#include<fstream>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for updatebill
	/// </summary>
	public ref class updatebill : public System::Windows::Forms::Form
	{
	public:
		updatebill(void)
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
	public:	static void StringCopy(char* destination, char* source)
	{
		int i = 0;
		for (i = 0; source[i] != '\0'; i++)
		{
			destination[i] = source[i];
		}
		destination[i] = '\0';
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~updatebill()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(updatebill::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(240, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &updatebill::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(354, 235);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 34);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &updatebill::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(123, 238);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Enter Coustmer Id :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(333, 332);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(309, 62);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Received Bill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &updatebill::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(33, 422);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L" Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &updatebill::button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(701, 235);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(279, 34);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// updatebill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 475);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"updatebill";
			this->Text = L"updatebill";
			this->Load += gcnew System::EventHandler(this, &updatebill::updatebill_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void updatebill_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream fout;
	Customer C1;
	bill B1;

	std::string Id;
	bool check = false;
	int CurrentCustomer = 0;
	int CurrentBill = 0;
	char status[] = "Paid";
	char date[11];
	MarshalString(textBox1->Text, Id);


	int len = Id.length();

	char* id1 = new char[len + 1];
	int i = 0;
	while (i < len) {
		id1[i] = Id[i];
		i++;
	}
	id1[i] = '\0';
	for (int i = 0; i < C1.totalCustomers; i++)
	{
		if (strcmp(C1.CustomerId[i], id1) == 0)
		{
			CurrentCustomer = i;
			check = true;
			break;
		}
	}
	if (!check) {
		MessageBox::Show("Invalid Coustmer Id");
	}
	for (int i = 0; i < B1.totalBills; i++)
	{
		if (strcmp(B1.CustomerId[i], C1.CustomerId[CurrentCustomer]) == 0)
		{
			CurrentBill = i;
		}
	}
	if(check)
	{
		C1.RegularUnits[CurrentCustomer] = B1.RegualrUnits[CurrentBill];
		C1.PeakUnits[CurrentCustomer] = B1.PeakUnits[CurrentBill];
		StringCopy(B1.Status[CurrentBill], status);
		StringCopy(C1.Status[CurrentCustomer], status);
		std::string date;
		MarshalString(dateTimePicker1->Text,date);
		int len = date.length();
		int k = 0;
		char date1[11];
		for (; k < len; k++) {
			date1[k] = date[k];
		}
		date1[k] = '\0';
		StringCopy(B1.PaymentDate[CurrentBill], date1);
		fout.open("CustomerInfo.txt");
		for (int i = 0; i < C1.totalCustomers; i++)
		{
			fout << C1.CustomerId[i] << ", " << C1.CustomerCNIC[i] << ", " << C1.CustomerName[i] << ", " << C1.address[i] << ", " << C1.CustomerPhoneNo[i] << ", "
				<< C1.CustomerType[i] << ", " << C1.MeterType[i] << ", " << C1.ConnectionDate[i] << ", " << C1.RegularUnits[i]
				<< ", " << C1.PeakUnits[i] << ", " << C1.Status[i] << "\n";
		}
		fout.close();
		fout.open("BillingInfo.txt");
		for (int i = 0; i < B1.totalBills; i++)
		{
			fout << B1.CustomerId[i] << ", " << B1.Month[i] << ", " << B1.RegualrUnits[i] << ", " << B1.PeakUnits[i] << ", " << B1.ReadingDate[i] << ", ";
			fout << B1.CostofElectricity[i] << ", " << B1.SalesTax[i] << ", " << B1.fixedCHarges[i] << ", " << B1.TotalBIllingAmount[i] << ", ";
			fout << B1.DueDate[i] << ", " << B1.Status[i] << ", " << B1.PaymentDate[i] << "\n";
		}
		fout.close();
		this->Close();
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
