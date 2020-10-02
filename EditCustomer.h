#pragma once
#include"CustomerObject.h"
#include "TrainerObject.h"
#include "ExercisePlanObject.h"
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
	/// Summary for EditCustomer
	/// </summary>
	public ref class EditCustomer : public System::Windows::Forms::Form
	{
	public:
		EditCustomer(void)
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
		~EditCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox9;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCustomer::typeid));
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(22, 263);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(108, 20);
			this->textBox9->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(20, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 24);
			this->label10->TabIndex = 13;
			this->label10->Text = L"New Customer Id :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(192, 342);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(749, 236);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gym Information";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(302, 192);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(108, 30);
			this->textBox10->TabIndex = 19;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(187, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 24);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Hall Id : ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(480, 51);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(250, 30);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(480, 142);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(108, 30);
			this->textBox8->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(108, 30);
			this->textBox6->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 51);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(108, 30);
			this->textBox5->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(378, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 24);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Plan Id :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(37, 148);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 24);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Trainer Id : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(378, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 24);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Start Date :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 24);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Subscription Id :";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(192, 111);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(742, 225);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Personal Information";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(480, 153);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 30);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 30);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(480, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 30);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 30);
			this->textBox1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(378, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Address :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Email :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(378, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Phone :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 124);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(453, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 30);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Update Member ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(460, 61);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(185, 20);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &EditCustomer::textBox7_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(313, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Old Customer Id :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(494, 599);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 33);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditCustomer::button1_Click);
			// 
			// EditCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(974, 644);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"EditCustomer";
			this->Text = L"EditCustomer";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		int Hid = System::Convert::ToInt16(textBox10->Text);
		int Ocid = System::Convert::ToInt16(textBox7->Text);
		int Cid = System::Convert::ToInt16(textBox9->Text);
		string Name = context.marshal_as<string>(textBox1->Text);
		string Phone = context.marshal_as<string>(textBox2->Text);
		string email = context.marshal_as<string>(textBox3->Text);
		string address = context.marshal_as<string>(textBox4->Text);
		int Sid = System::Convert::ToInt16(textBox5->Text);
		string Date = context.marshal_as<string>(dateTimePicker1->Text);
		int Tid = System::Convert::ToInt16(textBox6->Text);
		int Pid = System::Convert::ToInt16(textBox8->Text);
		if (G.CheckHalls(Hid))
		{
			if (C.CheckCustomer(Ocid))
			{
				if (T.LoadData(Tid))
				{
					if (EP.LoadPlans(Pid))
					{
						if (!C.CheckTrainer(Tid))
						{
							bool done = C.EditCustomer(Ocid, Cid, Name, address, Phone, email, Sid, Date, Tid, Pid, Hid);
							if (done)
							{
								MessageBox::Show("The Customer Data has been updated Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
							}
						}
						else
						{
							MessageBox::Show("The Trainer is already Booked! ", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
						}
					}
					else
					{
						MessageBox::Show("The Exercise Plan Does not Exist !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					MessageBox::Show("The Trainer Does not Exist !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				MessageBox::Show("The Customer does not Exist !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("The Gym Hall does not Exist !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
