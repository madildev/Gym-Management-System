#pragma once
#include "TrainerObject.h"
#include "GymObject.h"
#include<msclr\marshal_cppstd.h>
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddTrainer
	/// </summary>
	public ref class AddTrainer : public System::Windows::Forms::Form
	{
	public:
		AddTrainer(void)
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
		~AddTrainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddTrainer::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(290, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AddTrainer::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(290, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddTrainer::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(117, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Trainer Name  :";
			this->label3->Click += gcnew System::EventHandler(this, &AddTrainer::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(117, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Trainer Id         :";
			this->label2->Click += gcnew System::EventHandler(this, &AddTrainer::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Enter the Details of the New Trainer";
			this->label1->Click += gcnew System::EventHandler(this, &AddTrainer::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(290, 235);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 20);
			this->textBox3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(117, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Hall Id :";
			// 
			// AddTrainer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 363);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddTrainer";
			this->Text = L"AddTrainer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	  msclr::interop::marshal_context context;
	  String^ i = textBox1->Text;
	  int id = System::Convert::ToInt16(i);
	  string Name = context.marshal_as<string>(textBox2->Text);
	  int Hid = System::Convert::ToInt16(textBox3->Text);
	  if (G.CheckHalls(Hid))
	  {
		  if (!(T.LoadData(id)))
		  {
			  bool done = T.AddTrainer(id, Name, Hid);
			  if (done)
			  {
				  MessageBox::Show("Trainer has been added Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				  T.SaveData();
				  T.setID(-1);
				  T.setName("-1");
				  T.setHallId(1);
				  this->Hide();
			  }
			  else
			  {
				  MessageBox::Show("Trainer has not been added Successfully!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }
		  }
		  else
		  {
			  MessageBox::Show("Trainer Id already Exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		  }
	  }
	  else
	  {
		  MessageBox::Show("Gym Hall does not Exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	  }
	}
};
}
