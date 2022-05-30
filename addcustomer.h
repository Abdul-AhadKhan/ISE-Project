#pragma once
#include<string>
#include<cstring>
#include <fstream>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for addcustomer
	/// </summary>
	public ref class addcustomer : public System::Windows::Forms::Form
	{
	public:
		addcustomer(void)
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addcustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addcustomer::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(367, 522);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(374, 31);
			this->dateTimePicker1->TabIndex = 34;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(-2, 546);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 35);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addcustomer::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(904, 522);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 59);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Add Coustmer ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addcustomer::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->AccessibleName = L"metertype";
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Single Phase", L"Three Phase" });
			this->comboBox2->Location = System::Drawing::Point(367, 459);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(374, 28);
			this->comboBox2->TabIndex = 31;
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleName = L"coustmerbox";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Commercial", L"Domestic" });
			this->comboBox1->Location = System::Drawing::Point(367, 408);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(374, 28);
			this->comboBox1->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(294, 301);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(447, 31);
			this->textBox4->TabIndex = 29;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(294, 355);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(447, 31);
			this->textBox3->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(294, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(447, 31);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->AccessibleName = L"";
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(294, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(447, 31);
			this->textBox1->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(146, 522);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 24);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Select Date :";
			// 
			// label6
			// 
			this->label6->AccessibleName = L"";
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(137, 463);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 24);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Choose Meter Type";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(137, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(211, 24);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Choose Coustmer Type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(137, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 24);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Enter Phone No: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(137, 302);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 24);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Enter Address :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(137, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 24);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Enter Name : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(137, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 24);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Enter CNIC : ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(283, -16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(477, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// addcustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1123, 591);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"addcustomer";
			this->Text = L"addcustomer";
			this->Load += gcnew System::EventHandler(this, &addcustomer::addcustomer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int totalCustomers = 0;
	char** CustomerId = 0;
	char** CustomerCNIC = 0;
	char** CustomerName = 0;
	char** address = 0;
	char** CustomerPhoneNo = 0;
	char** CustomerType = 0;
	char** MeterType = 0;
	char** ConnectionDate = 0;
	int* RegularUnits = 0;
	int* PeakUnits = 0;
	char** Status = 0;
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
	CustomerName = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		CustomerName[i] = new char[25];
	}
	address = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		address[i] = new char[35];
	}
	CustomerPhoneNo = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		CustomerPhoneNo[i] = new char[13];
	}
	CustomerType = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		CustomerType[i] = new char[12];
	}
	MeterType = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		MeterType[i] = new char[2];
	}
	ConnectionDate = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		ConnectionDate[i] = new char[11];
	}
	RegularUnits = new int[totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		RegularUnits[i] = 0;
	}
	PeakUnits = new int[totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		PeakUnits[i] = 0;
	}
	Status = new char* [totalCustomers];
	for (int i = 0; i < totalCustomers; i++)
	{
		Status[i] = new char[7];
	}
	fin.open("CustomerInfo.txt");

	int i = 0;
	int index = 0;
	int number = 0;
	while (number < totalCustomers)
	{
		getline(fin, customer);
		i = 0;
		CopyTillComma(CustomerId[number], customer, i);
		i += 2;
		CopyTillComma(CustomerCNIC[number], customer, i);
		i += 2;
		CopyTillComma(CustomerName[number], customer, i);
		i += 2;
		CopyTillComma(address[number], customer, i);
		i += 2;
		CopyTillComma(CustomerPhoneNo[number], customer, i);
		i += 2;
		CopyTillComma(CustomerType[number], customer, i);
		i += 2;
		CopyTillComma(MeterType[number], customer, i);
		i += 2;
		CopyTillComma(ConnectionDate[number], customer, i);
		i += 2;
		RegularUnits[number] = CharacterToInteger(&RegularUnits[number], customer, i);
		i += 2;
		PeakUnits[number] = CharacterToInteger(&PeakUnits[number], customer, i);
		i += 2;
		StringCopy(Status[number], customer, i);
		number++;
	}

	fin.close();
	
std::string name;

std::ofstream fout;
srand((int)time(0));
int id = (rand() % 10000) + 1000;
std::string cnic;
std::string caddress;
std::string phonenumber;

std::string metertype;
std::string connectiondate;
MarshalString( dateTimePicker1->Text,connectiondate);
MarshalString (textBox1->Text,cnic);
MarshalString( textBox2->Text,name);
MarshalString( textBox4->Text,caddress);
MarshalString( textBox3->Text,phonenumber);

std::string customertype;
MarshalString( comboBox1->Text,customertype);
MarshalString( comboBox2->Text,metertype);
int connections = 0;
std::string cnic1;
char* cnic2;

int len = cnic.length();
cnic2 = new char[len + 1];

for ( i = 0; i < len; i++) {
	cnic2[i] = cnic[i];
}
cnic2[i] = '\0';
//IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(cnic);
// cnic1 = static_cast<char*>(ptrToNativeString.ToPointer());


for (int i = 0; i < totalCustomers; i++)
{
	if (strcmp(cnic2, CustomerCNIC[i]) == 0)
	{
		connections++;
	}
}
if (connections > 3)
{
	MessageBox::Show("Already 3 connections on this CNIC ");
	this->Close();
}
else
{
	fout.open("CustomerInfo.txt",std:: ios::app);
	fout << id << ", " << cnic << ", " << name << ", " << caddress << ", " << phonenumber << ", " << customertype << ", " << metertype << ", " << connectiondate << ", " << "0" << ", " << "0" << ", Paid" << "\n";
	fout.close();
	
	this->Close();
}

}
private: System::Void addcustomer_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
