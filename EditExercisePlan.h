#pragma once
#include"ExercisePlanObject.h"
#include"EquipmentObject.h"
#include"TrainerObject.h"
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditExercisePlan
	/// </summary>
	public ref class EditExercisePlan : public System::Windows::Forms::Form
	{
	public:
		EditExercisePlan(void)
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
		~EditExercisePlan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Update Plan";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(550, 340);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(550, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(228, 344);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(463, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EditExercisePlan::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(370, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Enter the Duration ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Enter the Equipment Id:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(370, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Enter the Trainer Id :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Enter the Plan Id : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(223, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 30);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Enter new Details for the Exercise Plan";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(223, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(354, 30);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Enter the Plan Id  you want to Update:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(209, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 24);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Enter the Plan Id : ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(213, 229);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 22;
			// 
			// EditExercisePlan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 480);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditExercisePlan";
			this->Text = L"EditExercisePlan";
			this->Load += gcnew System::EventHandler(this, &EditExercisePlan::EditExercisePlan_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditExercisePlan_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int pId = System::Convert::ToInt16(textBox1->Text);
	int nId = System::Convert::ToInt16(textBox2->Text);
	int nTid = System::Convert::ToInt16(textBox3->Text);
	int nEid = System::Convert::ToInt16(textBox4->Text);
	int dTime = System::Convert::ToInt16(textBox5->Text);
	if (EP.LoadPlans(pId))
	{
		if (T.LoadData(nTid))
		{
			if (E.LoadData(nEid))
			{
				bool done = EP.EditPlans(pId, nId, nTid, nEid, dTime);
				if (done)
				{
					MessageBox::Show("Exercise Plan has been updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					EP.SavePlans();
					this->Hide();
				}
				else
				{
					MessageBox::Show("Exercise Plan has not been updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
			}
			else
			{
				MessageBox::Show("The Equipment Id already Exists !", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else
		{
			MessageBox::Show("The Trainer Id does not Exists !", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	else
	{
		MessageBox::Show("The Plan Id does not Exists !", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}
};
}
