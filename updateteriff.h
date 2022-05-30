#pragma once
#include<fstream>
#include<cstring>
#include<string>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for updateteriff
	/// </summary>
	public ref class updateteriff : public System::Windows::Forms::Form
	{
	public:
		updateteriff(void)
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
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~updateteriff()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ single;
	private: System::Windows::Forms::CheckBox^ three;
	private: System::Windows::Forms::CheckBox^ domes;
	private: System::Windows::Forms::CheckBox^ commer;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(updateteriff::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->single = (gcnew System::Windows::Forms::CheckBox());
			this->three = (gcnew System::Windows::Forms::CheckBox());
			this->domes = (gcnew System::Windows::Forms::CheckBox());
			this->commer = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(193, -2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(619, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(159, 258);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choose Meter Type :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 301);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose Consumer Type :";
			this->label2->Click += gcnew System::EventHandler(this, &updateteriff::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(159, 362);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter Regular Units Rate :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(159, 408);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Enter Peak Units Rate :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(159, 457);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Enter Sales Tax :";
			// 
			// single
			// 
			this->single->AutoSize = true;
			this->single->Location = System::Drawing::Point(424, 258);
			this->single->Name = L"single";
			this->single->Size = System::Drawing::Size(139, 26);
			this->single->TabIndex = 7;
			this->single->Text = L"Single Phase";
			this->single->UseVisualStyleBackColor = true;
			// 
			// three
			// 
			this->three->AutoSize = true;
			this->three->Location = System::Drawing::Point(661, 258);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(135, 26);
			this->three->TabIndex = 8;
			this->three->Text = L"Three Phase";
			this->three->UseVisualStyleBackColor = true;
			// 
			// domes
			// 
			this->domes->AutoSize = true;
			this->domes->Location = System::Drawing::Point(424, 299);
			this->domes->Name = L"domes";
			this->domes->Size = System::Drawing::Size(110, 26);
			this->domes->TabIndex = 9;
			this->domes->Text = L"Domestic";
			this->domes->UseVisualStyleBackColor = true;
			// 
			// commer
			// 
			this->commer->AutoSize = true;
			this->commer->Location = System::Drawing::Point(661, 299);
			this->commer->Name = L"commer";
			this->commer->Size = System::Drawing::Size(133, 26);
			this->commer->TabIndex = 10;
			this->commer->Text = L"Commercial";
			this->commer->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(159, 509);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Enter Fixed Charges :";
			this->label6->Click += gcnew System::EventHandler(this, &updateteriff::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(423, 359);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 31);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(424, 405);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 31);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(423, 454);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 31);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(424, 506);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 31);
			this->textBox4->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(844, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &updateteriff::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &updateteriff::button2_Click);
			// 
			// updateteriff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 565);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->commer);
			this->Controls->Add(this->domes);
			this->Controls->Add(this->three);
			this->Controls->Add(this->single);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"updateteriff";
			this->Text = L"Enter Regular Units Rate";
			this->Load += gcnew System::EventHandler(this, &updateteriff::updateteriff_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void updateteriff_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int* MeterType = 0;
	int* RegularUnitPrice = 0;
	int* PeakUnitPrice = 0;
	int* TaxPerecent = 0;
	int* FixedCharges = 0;
	MeterType = new int[4];
	for (int i = 0; i < 4; i++)
	{
		MeterType[i] = 0;
	}
	RegularUnitPrice = new int[4];
	for (int i = 0; i < 4; i++)
	{
		RegularUnitPrice[i] = 0;
	}
	PeakUnitPrice = new int[4];
	for (int i = 0; i < 4; i++)
	{
		PeakUnitPrice[i] = 0;
	}
	TaxPerecent = new int[4];
	for (int i = 0; i < 4; i++)
	{
		TaxPerecent[i] = 0;
	}
	FixedCharges = new int[4];
	for (int i = 0; i < 4; i++)
	{
		FixedCharges[i] = 0;
	}
	std:: ifstream fin;
	fin.open("TarrifTaxInfo.txt");
	int number = 0;
	std :: string Tarrif;
	int i = 0;
	while (number < 4)
	{
		i = 0;
		getline(fin, Tarrif);
		MeterType[number] = CharacterToInteger(&MeterType[number], Tarrif, i);
		i += 2;
		RegularUnitPrice[number] = CharacterToInteger(&RegularUnitPrice[number], Tarrif, i);
		i += 2;
		PeakUnitPrice[number] = CharacterToInteger(&PeakUnitPrice[number], Tarrif, i);
		i += 2;
		TaxPerecent[number] = CharacterToInteger(&TaxPerecent[number], Tarrif, i);
		i += 2;
		FixedCharges[number] = CharacterToInteger(&FixedCharges[number], Tarrif, i);
		number++;
	}
	fin.close();
	std::string str;
	if (single->Checked)
	{
		
		if (commer->Checked)
		{	
			MarshalString(textBox1->Text, str);

			RegularUnitPrice[1]=stringToint(str);
			MarshalString(textBox4->Text,str);
			 FixedCharges[1]=stringToint(str);
			 MarshalString(textBox3->Text, str);;
			 TaxPerecent[1]=stringToint(str);
		}
		else if (domes->Checked)
		{
			
			MarshalString(textBox1->Text, str);

			RegularUnitPrice[0] = stringToint(str);
			MarshalString(textBox4->Text, str);
			FixedCharges[0] = stringToint(str);
			MarshalString(textBox3->Text, str);;
			TaxPerecent[0]=stringToint(str);
		}
	}
	else if (three->Checked)
	{
		
		if (commer->Checked)
		{
			MarshalString(textBox1->Text, str);

			RegularUnitPrice[3] = stringToint(str);
			MarshalString(textBox2->Text, str);

			PeakUnitPrice[3] = stringToint(str);

			MarshalString(textBox4->Text, str);
			FixedCharges[3] = stringToint(str);
			MarshalString(textBox3->Text, str);;
			TaxPerecent[3] = stringToint(str);
		}
		else if (domes->Checked)
		{
			MarshalString(textBox1->Text, str);

			RegularUnitPrice[2] = stringToint(str);
			MarshalString(textBox2->Text, str);

			PeakUnitPrice[2] = stringToint(str);

			MarshalString(textBox4->Text, str);
			FixedCharges[2] = stringToint(str);
			MarshalString(textBox3->Text, str);;
			TaxPerecent[2] = stringToint(str);
		}
	}
	std :: ofstream fout;
	fout.open("TarrifTaxInfo.txt");
	for (int i = 0; i < 4; i++)
	{
		fout << MeterType[i] << ", " << RegularUnitPrice[i] << ", " << PeakUnitPrice[i] << ", " << TaxPerecent[i] << ", " << FixedCharges[i] << "\n";
	}
	fout.close();

	this->Close();

}


};
}
