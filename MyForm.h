#pragma once
#include "menu.h"
#include<fstream>
#include<string>
#include<iostream>
#include<cstring>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginbutton;
		   String^ name = "hammad";
		   String^ pass = "123456";

	protected:
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// loginbutton
			// 
			this->loginbutton->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginbutton->Location = System::Drawing::Point(677, 435);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(226, 53);
			this->loginbutton->TabIndex = 13;
			this->loginbutton->Text = L"LOGIN";
			this->loginbutton->UseVisualStyleBackColor = false;
			this->loginbutton->Click += gcnew System::EventHandler(this, &MyForm::loginbutton_Click);
			// 
			// username
			// 
			this->username->AccessibleName = L"username";
			this->username->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(328, 269);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(402, 34);
			this->username->TabIndex = 12;
			// 
			// password
			// 
			this->password->AccessibleName = L"password";
			this->password->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(328, 340);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(402, 34);
			this->password->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(185, 343);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(185, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Username :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(189, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(601, 195);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 516);
			this->Controls->Add(this->loginbutton);
			this->Controls->Add(this->username);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) {
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

		MarshalString(username->Text, nam);
		MarshalString(password->Text, pass);



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

		bool usercheck = 0;
		bool passcheck = 0;
		bool check = false;
		for (int i = 0; i < totalEmployees; i++)
		{
			if (strcmp(name, Username[i]) == 0)
			{
				usercheck = true;
				if (strcmp(password, Password[i]) == 0)
				{
					check = true;
					passcheck = true;

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
		if (check) {
			this->Hide();
			menu obj;
			obj.ShowDialog();
			
		}
		else if (!usercheck) {
			MessageBox::Show("Incorrect Username ");
		}
		else {
			MessageBox::Show("Incorrect Username && Password ");
		}
		/*Employee e1;
		bool login;
		login=e1.checkEmployee(username->Text, password->Text);
		if (login) {
			menu obj;
			this->Hide();
			obj.ShowDialog();
		}
		else {
			MessageBox::Show("Incorrect Username or Password");
		}*/
		/*if (username->Text && password->Text == pass) {

			menu obj;
			this->Hide();
			obj.ShowDialog();
		}
		else {
			MessageBox::Show("Invalid Username && password ");
		}*/

	}
	};

}