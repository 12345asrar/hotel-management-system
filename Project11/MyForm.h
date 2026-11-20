#pragma once
#include"MyForm1.h"

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Label^  label6;
	protected:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ListView^  listView1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::MediumBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(7, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 18);
			this->label6->TabIndex = 44;
			this->label6->Text = L"ÇÓÑÇÑ äÌíÈ ÇáãÛÈÔí";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MediumBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(46, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 16);
			this->label5->TabIndex = 43;
			this->label5->Text = L"ÊÕãíã ÇáãåäÏÓÉ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(362, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 42;
			this->label4->Text = L"ÇäÞÑ åäÇ ááÏÎæá";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(347, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 41);
			this->button2->TabIndex = 41;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(375, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(341, 31);
			this->button1->TabIndex = 39;
			this->button1->Text = L" Èí.Çä.Çã.ÓæÝÊ                              ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(428, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 39);
			this->label2->TabIndex = 38;
			this->label2->Text = L"ÇáäÙÇã ÇáÔÇãá";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(17, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"áãÑÇÞÈÉ Úãáß æÊÍÞíÞ åÏÝß";
			// 
			// listView4
			// 
			this->listView4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"listView4.BackgroundImage")));
			this->listView4->Location = System::Drawing::Point(35, 60);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(107, 118);
			this->listView4->TabIndex = 36;
			this->listView4->UseCompatibleStateImageBehavior = false;
			// 
			// listView3
			// 
			this->listView3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView3->Location = System::Drawing::Point(6, 315);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(161, 118);
			this->listView3->TabIndex = 35;
			this->listView3->UseCompatibleStateImageBehavior = false;
			// 
			// listView2
			// 
			this->listView2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView2->Location = System::Drawing::Point(8, -3);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(161, 285);
			this->listView2->TabIndex = 34;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::MenuText;
			this->listView1->Location = System::Drawing::Point(194, -3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(528, 90);
			this->listView1->TabIndex = 33;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(728, 431);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 MyForm1^a = gcnew MyForm1();
			 a->Show();
}
};
}
