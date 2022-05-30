#pragma once
#include"addcustomer.h"
#include"updatebill.h"
#include"updateteriff.h"
#include"addbill1.h"
#include"changepassword.h"
#include"Billreport.h"
#include"CnicReport.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(257, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(495, 197);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->AccessibleName = L"addcoustmer";
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(284, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(458, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD NEW COUSTMER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menu::button1_Click);
			// 
			// button2
			// 
			this->button2->AccessibleName = L"newbill";
			this->button2->BackColor = System::Drawing::Color::DarkOrchid;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(284, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(458, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ADD NEW BILL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &menu::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::button2_MouseClick);
			// 
			// button3
			// 
			this->button3->AccessibleName = L"billstatus";
			this->button3->BackColor = System::Drawing::Color::MidnightBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(284, 365);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(458, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"UPDATE BILL STATUS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &menu::button3_Click);
			// 
			// button4
			// 
			this->button4->AccessibleName = L"teriff";
			this->button4->BackColor = System::Drawing::Color::SeaGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(284, 411);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(458, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"UPDATE BILL TERIFF";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &menu::button4_Click);
			// 
			// button5
			// 
			this->button5->AccessibleName = L"change_password";
			this->button5->BackColor = System::Drawing::Color::Fuchsia;
			this->button5->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(284, 455);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(458, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"CHANGE PASSWORD";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &menu::button5_Click);
			// 
			// button6
			// 
			this->button6->AccessibleName = L"bill_report";
			this->button6->BackColor = System::Drawing::Color::DarkMagenta;
			this->button6->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(284, 502);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(458, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Bill Report";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menu::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(460, 225);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(2);
			this->label1->Size = System::Drawing::Size(88, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"MENU";
			this->label1->Click += gcnew System::EventHandler(this, &menu::label1_Click);
			// 
			// button7
			// 
			this->button7->AccessibleName = L"exit";
			this->button7->BackColor = System::Drawing::SystemColors::MenuText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(973, 551);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 38);
			this->button7->TabIndex = 8;
			this->button7->Text = L"EXIT";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &menu::button7_Click);
			// 
			// button8
			// 
			this->button8->AccessibleName = L"bill_report";
			this->button8->BackColor = System::Drawing::Color::MediumBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(284, 548);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(458, 40);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Coustmers CNIC Report";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &menu::button8_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 594);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"menu";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"menu";
			this->Load += gcnew System::EventHandler(this, &menu::menu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	addcustomer obj;
	
	obj.ShowDialog();

}
private: System::Void menu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	updatebill obj;
	obj.ShowDialog();
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	updateteriff obj2;
	obj2.ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	addbill1 bil;
	bil.ShowDialog();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	changepassword ch;
	ch.ShowDialog();
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Billreport b;
	b.ShowDialog();
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	CnicReport cn;
	cn.ShowDialog();
}
};
}
