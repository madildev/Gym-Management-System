#pragma once
#include"EquipmentObject.h"
#include"TrainerObject.h"
#include"ExercisePlanObject.h"
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddExercisePlan
	/// </summary>
	public ref class AddExercisePlan : public System::Windows::Forms::Form
	{
	public:
		AddExercisePlan(void)
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
		~AddExercisePlan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(226, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(349, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the Details for the Exercise Plan";
			this->label1->Click += gcnew System::EventHandler(this, &AddExercisePlan::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the Plan Id : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(459, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter the Trainer Id :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(75, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter the Equipment Id:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(473, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Enter the Duration ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(266, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(266, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(639, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(639, 190);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add Plan";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddExercisePlan::button1_Click);
			// 
			// AddExercisePlan
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(788, 397);
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
			this->Name = L"AddExercisePlan";
			this->Text = L"AddExercisePlan";
			this->Load += gcnew System::EventHandler(this, &AddExercisePlan::AddExercisePlan_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddExercisePlan_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int Pid = System::Convert::ToInt16(textBox1->Text);
	int Tid = System::Convert::ToInt16(textBox2->Text);
	int Eid = System::Convert::ToInt16(textBox3->Text);
	int D = System::Convert::ToInt16(textBox4->Text);
	if (!(EP.LoadPlans(Pid)))
	{
		if (T.LoadData(Tid))
		{
			if (E.LoadData(Eid))
			{
				bool done = EP.AddPlans(Pid, Tid, Eid, D);
				if (done)
				{
					MessageBox::Show("The Exercise Plan has been added successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					EP.SavePlans();
					EP.SetEid(-1);
					EP.SetPlanId(-1);
					EP.SetTid(-1);
					EP.Setduration(-1);
				}
				else
				{
					MessageBox::Show("The Exercise Plan has not been added successfully!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				MessageBox::Show("The Equipment Id does not Exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
		{
			MessageBox::Show("The Trainer Id does not Exist !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Exercise Plan already Exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
