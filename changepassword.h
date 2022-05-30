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
	/// Summary for changepassword
	/// </summary>
	public ref class changepassword : public System::Windows::Forms::Form
	{
	public:
		changepassword(void)
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
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~changepassword()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(changepassword::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(166, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(656, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &changepassword::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 223);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Username :";
			this->label1->Click += gcnew System::EventHandler(this, &changepassword::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 322);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Password :";
			this->label2->Click += gcnew System::EventHandler(this, &changepassword::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 441);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter New Password :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(338, 220);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 34);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(338, 319);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 34);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(338, 431);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(350, 34);
			this->textBox3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &changepassword::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(799, 496);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 46);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Save Changes";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &changepassword::button2_Click);
			// 
			// changepassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 554);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"changepassword";
			this->Text = L"changepassword";
			this->Load += gcnew System::EventHandler(this, &changepassword::changepassword_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void changepassword_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	char** Password = 0;
	char** Username = 0;
	char** PhoneNumber = 0;
	int totalEmployees = 0;
	int count = 0;
	std::ifstream fin;
	fin.open("Employee.txt");
	std::string employee;
	while (!fin.eof())
	{
		getline(fin, employee);
		count++;
	}
	count--;
	totalEmployees = count;
	Password = new char* [count];
	Username = new char* [count];
	PhoneNumber = new char* [count];
	for (int i = 0; i < count; i++)
	{
		Password[i] = new char[11];
	}
	for (int i = 0; i < count; i++)
	{
		Username[i] = new char[25];
	}
	for (int i = 0; i < count; i++)
	{
		PhoneNumber[i] = new char[13];
	}
	fin.close();
	int number = 0, i = 0;
	fin.open("Employee.txt");
	while (number < totalEmployees)
	{
		i = 0;
		getline(fin, employee);
		CopyTillComma(Username[number], employee, i);
		i += 2;
		CopyTillComma(Password[number], employee, i);
		i += 2;
		StringCopy(PhoneNumber[number], employee, i);
		number++;
	}
	fin.close();
	std::string nam;
	std::string pass;

	MarshalString(textBox1->Text, nam);
	MarshalString(textBox2->Text, pass);



	int len = 0;
	len = nam.length();
	char* name = new char[len + 1];
	i = 0;
	for (i = 0; i < len; i++) {
		name[i] = nam[i];
	}
	name[i] = '\0';
	len = pass.length();
	char* password = new char[len + 1];
	for (i = 0; i < len; i++) {
		password[i] = pass[i];
	}
	password[i] = '\0';
	std::string newpass;
	bool usercheck = 0;
	bool passcheck = 0;
	bool check = false;
	int current = 0;
	for (int i = 0; i < totalEmployees; i++)
	{
		if (strcmp(name, Username[i]) == 0)
		{
			usercheck = true;
			if (strcmp(password, Password[i]) == 0)
			{

				check = true;
				passcheck = true;
				current = i;

			}

			else
			{
				passcheck = false;
				check = false;

			}
		}
		else {
			usercheck = false;
		}
	}
	MarshalString(textBox3->Text, newpass);
	
	if (check) {
		char* newpassword = 0;
		len = newpass.length();
		 newpassword = new char[len + 1];
		for (i = 0; i < len; i++) {
			newpassword[i] = newpass[i];
		}
		newpassword[i] = '\0';

		Password[current] = newpassword;
		std::ofstream fout;
		fout.open("Employee.txt");
		for (int k = 0; k < totalEmployees; k++)
		{
			fout << Username[k] << ", " << Password[k] << ", " << PhoneNumber[k] << "\n";
		}
		fout.close();
		this->Close();

	}
	else {
		MessageBox::Show("Incorrect Username or Password ");
	}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
