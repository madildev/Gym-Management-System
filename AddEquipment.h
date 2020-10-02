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
	/// Summary for AddEquipment
	/// </summary>
	public ref class AddEquipment : public System::Windows::Forms::Form
	{

	public:
		AddEquipment(void)
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
		~AddEquipment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the Details of the New Equipment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(135, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Equipment Id         :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(135, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Equipment Name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(308, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(308, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEquipment::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(308, 224);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(135, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Hall Id :";
			// 
			// AddEquipment
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(652, 361);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddEquipment";
			this->Text = L"AddEquipment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		    msclr::interop::marshal_context context;
		    String ^Id = textBox1->Text;
		    String^ name = textBox2->Text;
			int Hid = System::Convert::ToInt16(textBox3->Text);
			int i = System::Convert::ToInt16(Id);
			string Name = context.marshal_as<string>(name);
			if (G.CheckHalls(Hid))
			{
				if (!(E.LoadData(i)))
				{
					bool valid = E.AddEquipment(i, Name, Hid);
					if (valid)
					{
						MessageBox::Show("Equipment has been added Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
						E.SaveEquipments();
						E.setEquipID(-1);
						E.setName("-1");
						this->Hide();
					}
					else
					{
						MessageBox::Show("Equipment has not been added Successfully!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					MessageBox::Show("Equipment Id Already Exists ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					this->Hide();
				}
			}
			else
			{
				MessageBox::Show("Gym Hall does not  Exist! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
	}
};
}