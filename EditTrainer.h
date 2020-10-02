#pragma once
#include"TrainerObject.h"
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
	/// Summary for EditTrainer
	/// </summary>
	public ref class EditTrainer : public System::Windows::Forms::Form
	{
	public:
		EditTrainer(void)
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
		~EditTrainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(268, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 31);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditTrainer::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(326, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 16;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EditTrainer::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(326, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &EditTrainer::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(147, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"New Trainer Name: ";
			this->label5->Click += gcnew System::EventHandler(this, &EditTrainer::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(147, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"New Trainer Id: ";
			this->label4->Click += gcnew System::EventHandler(this, &EditTrainer::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(146, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(302, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Enter New Details of the  Equipment:";
			this->label3->Click += gcnew System::EventHandler(this, &EditTrainer::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(326, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EditTrainer::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Trainer Id: ";
			this->label2->Click += gcnew System::EventHandler(this, &EditTrainer::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter the Trainer Id You want to Update";
			this->label1->Click += gcnew System::EventHandler(this, &EditTrainer::label1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(326, 280);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(147, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 24);
			this->label6->TabIndex = 18;
			this->label6->Text = L"New Hall Id: ";
			// 
			// EditTrainer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 460);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditTrainer";
			this->Text = L"EditTrainer";
			this->Load += gcnew System::EventHandler(this, &EditTrainer::EditTrainer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditTrainer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	int Id = System::Convert::ToInt16(textBox1->Text);
	int nId = System::Convert::ToInt16(textBox2->Text);
	string Name = context.marshal_as<string>(textBox3->Text);
	int Hid = System::Convert::ToInt16(textBox4->Text);
	if (G.CheckHalls(Hid))
	{
		if (T.LoadData(Id))
		{
			bool done = true;
			T.EditTrainer(Id, nId, Name, Hid);

			if (done)
			{
				MessageBox::Show("Trainer Data has been Updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				T.SaveData();
				this->Hide();
			}
			else
			{
				MessageBox::Show("Trainer Data has not been Updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("The Trainer Id Does not Exist !", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Gym Hall Does not Exist !", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
