#pragma once
#include "EquipmentObject.h"
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
	/// Summary for EditEquipment
	/// </summary>
	public ref class EditEquipment : public System::Windows::Forms::Form
	{
	public:
		EditEquipment(void)
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
		~EditEquipment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the Equipment Id You want to Update";
			this->label1->Click += gcnew System::EventHandler(this, &EditEquipment::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(151, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Equipment Id: ";
			this->label2->Click += gcnew System::EventHandler(this, &EditEquipment::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(330, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EditEquipment::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(150, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(302, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter New Details of the  Equipment:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(151, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"New Equipment Id: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(151, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"New Equipment Name: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(330, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(330, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EditEquipment::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(263, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditEquipment::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(330, 276);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(151, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 24);
			this->label6->TabIndex = 17;
			this->label6->Text = L"New Hall Id: ";
			// 
			// EditEquipment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 416);
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
			this->Name = L"EditEquipment";
			this->Text = L"EditEquipment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	String^ i = textBox1->Text;
	int id = System::Convert::ToInt16(i);
	String^ j = textBox2->Text;
	int nId = System::Convert::ToInt16(j);
	string Name = context.marshal_as<string>(textBox3->Text);
	int Hid = System::Convert::ToInt16(textBox4->Text);
	if (G.CheckHalls(Hid))
	{
		if (E.LoadData(id))
		{
			if (!(E.LoadData(nId)))
			{
				bool valid = E.EditEquipment(id, nId, Name, Hid);
				if (valid)
				{
					MessageBox::Show("Equipment has been Updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					E.SaveEquipments();
					this->Hide();
				}
				else
				{
					MessageBox::Show("Equipment has not been Updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
			}
			else
			{
				MessageBox::Show("The Equipment Id already Exists!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else
		{
			MessageBox::Show("Equipment Id Does not Exist! ", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	else
	{
		MessageBox::Show("Gym Hall Does not Exist! ", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	
}
};
}
