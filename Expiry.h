#pragma once
#include<fstream>
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
	/// Summary for Expiry
	/// </summary>
	public ref class Expiry : public System::Windows::Forms::Form
	{
	public:
		Expiry(void)
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
		~Expiry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ usercnic;


	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Expiry::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usercnic = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(335, 3);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(268, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Enter CNIC :";
			// 
			// usercnic
			// 
			this->usercnic->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usercnic->Location = System::Drawing::Point(371, 232);
			this->usercnic->Name = L"usercnic";
			this->usercnic->Size = System::Drawing::Size(305, 34);
			this->usercnic->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(109, 323);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Select New Expiry Date :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(773, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 51);
			this->button1->TabIndex = 16;
			this->button1->Text = L"SAVE CHANGES";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Expiry::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 469);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 28);
			this->button2->TabIndex = 17;
			this->button2->Text = L"BACK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Expiry::button2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(371, 316);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(305, 34);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// Expiry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 509);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->usercnic);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Expiry";
			this->Text = L"Expiry";
			this->Load += gcnew System::EventHandler(this, &Expiry::Expiry_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Expiry_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string cnic;
		MarshalString(usercnic->Text, cnic);
		int len = cnic.length();
		char* cnic1 = new char[len + 1];
		int k = 0;
		for (k = 0; k < len; k++) {
			cnic1[k] = cnic[k];

		}
		cnic1[k] = '\0';
		char** CNIC = 0;
		char** IssuanceDate = 0;
		char** ExpiryDate = 0;
		int people = 0;
		std::ifstream fin;
		fin.open("Nadra.txt");
		std::string nadra;
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
		bool check = false;
		int Current_Id = 0;
		for (int i = 0; i < people; i++)
		{
			if (strcmp(cnic1, CNIC[i]) == 0)
			{
				Current_Id = i;
				check = true;
				break;
			}
		}
		if (check) {
			std::ofstream fout;
			std::string date;
			MarshalString(dateTimePicker1->Text, date);
			fout.open("Nadra.txt");
			for (int i = 0; i < people; i++)
			{
				if (i != Current_Id)
				{
					fout << CNIC[i] << ", " << IssuanceDate[i] << ", " << ExpiryDate[i] << "\n";
				}
				else
				{
					fout << CNIC[i] << ", " << IssuanceDate[i] << ", " << date << "\n";
				}
			}

			fout.close();
			this->Close();
		}
		else {
			MessageBox::Show("Invalid CNIC");
		}
	}


};
}
