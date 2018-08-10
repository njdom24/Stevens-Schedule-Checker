#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "CheckSchedule.h"
namespace StevensScheduleChecker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Schedule
	/// </summary>
	public ref class Schedule : public System::Windows::Forms::Form
	{
	public:
		Schedule(void)
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
		~Schedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Schedule::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Schedule 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Schedule::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Calendar Files|*.ics";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Schedule::openFileDialog1_FileOk);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Schedule::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Schedule 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Schedule::button2_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->Filter = L"Calendar Files|*.ics";
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Schedule::openFileDialog2_FileOk);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Schedule::textBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(81, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Compare";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Schedule::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(254, 12);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(318, 297);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Schedule::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"©Dom®DiMaggio™";
			this->label1->Click += gcnew System::EventHandler(this, &Schedule::label1_Click);
			// 
			// Schedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(584, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(600, 360);
			this->Name = L"Schedule";
			this->Text = L"Stevens Schedule Checker";
			this->Load += gcnew System::EventHandler(this, &Schedule::Schedule_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//openFileDialog1->ShowDialog();
		
		//String^ strong = openFileDialog1->FileName;
		//std::string r;
		//r = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			textBox1->Text = openFileDialog1->FileName;

		//System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
		//sr->Close();
	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		if(openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			textBox2->Text = openFileDialog2->FileName;
	}
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Schedule_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ output;
	
	//std::string debug;
	std::string f1 = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string f2 = msclr::interop::marshal_as<std::string>(textBox2->Text);
	output = gcnew String(f1.c_str());
	textBox3->Text = output;

	Collections::ArrayList^ arr = CheckSchedule::check(f1, f2);
	//output = CheckSchedule::check(f1, f2);
	//output = gcnew String(debug.c_str());
	//textBox3->Text = output;
	array<String^>^ ar = reinterpret_cast<array<String^>^>(arr->ToArray(String::typeid));
	textBox3->Lines = ar;





}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
