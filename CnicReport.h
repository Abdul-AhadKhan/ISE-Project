#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<cstring>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CnicReport
	/// </summary>
	public ref class CnicReport : public System::Windows::Forms::Form
	{
	public:
		CnicReport(void)
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
	public:static std :: string convertToString(char* a, int size)
	{
		int i;
		std:: string s = "";
		for (i = 0; i < size; i++) {
			s = s + a[i];
		}
		return s;
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CnicReport()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CnicReport::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(290, -15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(274, 181);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Number Of CNIC Expiring Next Month :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(472, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"--";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(687, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 39);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Show Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CnicReport::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CnicReport::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L" " });
			this->listBox1->Location = System::Drawing::Point(249, 359);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(249, 100);
			this->listBox1->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 359);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"CNIC List :";
			this->label3->Click += gcnew System::EventHandler(this, &CnicReport::label3_Click);
			// 
			// CnicReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 557);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CnicReport";
			this->Text = L"CnicReport";
			this->Load += gcnew System::EventHandler(this, &CnicReport::CnicReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	char** CNIC = 0;
	char** IssuanceDate = 0;
	char** ExpiryDate = 0;
	int people = 0;
	std:: ifstream fin;
	fin.open("Nadra.txt");
	std:: string nadra;
	while (!fin.eof())
	{
		getline(fin, nadra);
		people++;
	}
	people--;
	CNIC = new char* [people];
	for (int i = 0; i < people; i++)
	{
		CNIC[i] = new char[14];
	}
	IssuanceDate = new char* [people];
	for (int i = 0; i < people; i++)
	{
		IssuanceDate[i] = new char[11];
	}
	ExpiryDate = new char* [people];
	for (int i = 0; i < people; i++)
	{
		ExpiryDate[i] = new char[11];
	}
	fin.close();
	int position = 0;
	fin.open("Nadra.txt");
	for (int number = 0; number < people; number++)
	{
		position = 0;
		getline(fin, nadra);
		CopyTillComma(CNIC[number], nadra, position);
		position += 2;
		CopyTillComma(IssuanceDate[number], nadra, position);
		position += 2;
		StringCopy(ExpiryDate[number], nadra, position);
	}
	fin.close();
	int num = 0;
	int day = 0, month = 0, year = 0;
	int CurrentDay = 0, CurrentMonth = 0, CurrentYear = 0;
	int i = 0, digit = 0;
	bool check = false;
	for (int number = 0; number < people; number++)
	{
		digit = 1;
		day = 0, month = 0, year = 0;
		for (i = strlen(ExpiryDate[number]) - 1; ExpiryDate[number][i] != '/'; i--)
		{
			year = year + ((static_cast<int>(ExpiryDate[number][i]) - 48) * digit);
			digit *= 10;
		}
		i--;
		digit = 1;
		for (; ExpiryDate[number][i] != '/'; i--)
		{
			month = month + ((static_cast<int>(ExpiryDate[number][i]) - 48) * digit);
			digit *= 10;
		}
		i--;
		digit = 1;
		for (; i >= 0; i--)
		{
			day = day + ((static_cast<int>(ExpiryDate[number][i]) - 48) * digit);
			digit *= 10;
		}

		time_t now = time(0);

#pragma warning(suppress : 4996)
		tm* ltm = localtime(&now);
		CurrentYear = 1900 + ltm->tm_year;
		CurrentMonth = 1 + ltm->tm_mon;
		CurrentDay = ltm->tm_mday;
		if (CurrentMonth == 1 || CurrentMonth == 3 || CurrentMonth == 5 || CurrentMonth == 7 || CurrentMonth == 8 || CurrentMonth == 10 || CurrentMonth == 12)
		{
			if (CurrentDay + 30 > 31)
			{
				CurrentDay = (CurrentDay + 30) - 31;
				CurrentMonth++;
				if (CurrentMonth > 12)
				{
					CurrentMonth = 1;
					CurrentYear++;
				}
			}
			else
			{
				CurrentDay = CurrentDay + 30;
			}
		}
		else if (CurrentMonth == 4 || CurrentMonth == 6 || CurrentMonth == 9 || CurrentMonth == 11)
		{
			if (CurrentDay + 30 > 30)
			{
				CurrentDay = (CurrentDay + 30) - 30;
				CurrentMonth++;
			}
		}
		else
		{
			if ((CurrentYear % 4 == 0 && CurrentYear % 100 != 0) || CurrentYear % 400 == 0)
			{
				if (CurrentDay + 30 > 29)
				{
					CurrentDay = (CurrentDay + 30) - 29;
					CurrentMonth++;
				}
			}
			else
			{
				if (CurrentDay + 30 > 28)
				{
					CurrentDay = (CurrentDay + 30) - 28;
					CurrentMonth++;
				}
			}
		}

		if (CurrentDay >= day && CurrentMonth >= month && CurrentYear >= year)
		{
			num++;
			std::string str;
			str = convertToString(CNIC[number], strlen(CNIC[number]));
			String^ s = gcnew String(str.data());
			listBox1->Items->Add(s);
			check = true;
		}
	}
	if (check) {
		label2->Text = System::Convert::ToString(num);
	}
	if (!check)
	{
		int x = 0;
		label2->Text = System::Convert::ToString(x);
		
	}


}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CnicReport_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
