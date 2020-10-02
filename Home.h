#pragma once
#include "AddEquipment.h"
#include "EditEquipment.h"
#include "AddTrainer.h"
#include"AddExercisePlan.h"
#include"EditTrainer.h"
#include"AddCustomer.h"
#include "EditCustomer.h"
#include "ShowSubscriptions.h"
#include "AddGymHall.h"
#include "EditGymHall.h"
#include "HallSechdule.h"
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Form^ obj1;
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Home(Form ^obj)
		{
			obj1 = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button32;

	private: System::Windows::Forms::Button^ button34;

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(375, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to the Gym";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(137, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select an Option to preform Task";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Equipments";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(327, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Trainers";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 33);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Customers";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(640, 152);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 33);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Exercise Plan";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 33);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Add Equipments";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(142, 191);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(132, 148);
			this->panel1->TabIndex = 7;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel1_Paint);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 78);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(132, 30);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Edit Equipments";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 39);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 33);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Delete Equipments";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Home::button6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Location = System::Drawing::Point(327, 191);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(114, 148);
			this->panel2->TabIndex = 8;
			this->panel2->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 78);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(114, 30);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Edit Trainer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Home::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(0, 39);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(114, 33);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Delete Trainer";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Home::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(0, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(114, 33);
			this->button10->TabIndex = 6;
			this->button10->Text = L"Add Trainer";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Home::button10_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button25);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Location = System::Drawing::Point(473, 191);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(121, 148);
			this->panel3->TabIndex = 9;
			this->panel3->Visible = false;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(0, 115);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(121, 30);
			this->button25->TabIndex = 15;
			this->button25->Text = L"Subscription Info";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Home::button25_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(0, 78);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(121, 30);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Edit Customers";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Home::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(0, 39);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(121, 33);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Delete Customers";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Home::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(0, 0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(121, 33);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Add Customers";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Home::button13_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button15);
			this->panel4->Controls->Add(this->button16);
			this->panel4->Location = System::Drawing::Point(640, 191);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(120, 148);
			this->panel4->TabIndex = 10;
			this->panel4->Visible = false;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(0, 78);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(120, 30);
			this->button14->TabIndex = 8;
			this->button14->Text = L"Edit Exercise Plan";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(0, 39);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(120, 33);
			this->button15->TabIndex = 8;
			this->button15->Text = L"Delete Exercise Plan";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Home::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(0, 0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(120, 33);
			this->button16->TabIndex = 6;
			this->button16->Text = L"Add Exercise Plan";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Home::button16_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Location = System::Drawing::Point(48, 152);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(362, 312);
			this->panel5->TabIndex = 11;
			this->panel5->Visible = false;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(249, 171);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 4;
			this->button18->Text = L"Cancel";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Home::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(152, 171);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 3;
			this->button17->Text = L"Delete ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Home::button17_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Equipment ID : ";
			this->label4->Click += gcnew System::EventHandler(this, &Home::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(332, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Enter the Details of the Equipment to Delete:";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button19);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(297, 127);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(362, 312);
			this->panel6->TabIndex = 12;
			this->panel6->Visible = false;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(249, 171);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 4;
			this->button19->Text = L"Cancel";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Home::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(152, 171);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 3;
			this->button20->Text = L"Delete ";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Home::button20_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Trainer ID : ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(185, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Home::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(308, 24);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Enter the Details of the Trainer to Delete:";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button30);
			this->panel10->Controls->Add(this->button31);
			this->panel10->Controls->Add(this->label11);
			this->panel10->Controls->Add(this->textBox5);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Location = System::Drawing::Point(424, 152);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(362, 312);
			this->panel10->TabIndex = 13;
			this->panel10->Visible = false;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(249, 171);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 4;
			this->button30->Text = L"Cancel";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Home::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(152, 171);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 23);
			this->button31->TabIndex = 3;
			this->button31->Text = L"Delete ";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Home::button31_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(42, 97);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 24);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Hall ID : ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(185, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(15, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(286, 24);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Enter the Details of the Hall to Delete:";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button21);
			this->panel7->Controls->Add(this->button22);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(640, 94);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(379, 280);
			this->panel7->TabIndex = 13;
			this->panel7->Visible = false;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(249, 171);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 4;
			this->button21->Text = L"Cancel";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Home::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(152, 171);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 3;
			this->button22->Text = L"Delete ";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Home::button22_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 24);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Plan ID : ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(185, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Enter the Details of the Exercise Plan to Delete:";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->button23);
			this->panel8->Controls->Add(this->button24);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->textBox4);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Location = System::Drawing::Point(896, 21);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(402, 332);
			this->panel8->TabIndex = 14;
			this->panel8->Visible = false;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(249, 171);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 4;
			this->button23->Text = L"Cancel";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Home::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(152, 171);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 3;
			this->button24->Text = L"Delete ";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Home::button24_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(42, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 24);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Customer ID : ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(185, 96);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arno Pro Smbd", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(323, 24);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Enter the Details of the Customer to Delete:";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Controls->Add(this->button34);
			this->panel9->Controls->Add(this->button26);
			this->panel9->Controls->Add(this->button27);
			this->panel9->Controls->Add(this->button28);
			this->panel9->Location = System::Drawing::Point(779, 191);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(132, 148);
			this->panel9->TabIndex = 16;
			this->panel9->Visible = false;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(0, 114);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(132, 33);
			this->button34->TabIndex = 13;
			this->button34->Text = L"Hall Scehdule";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Home::button34_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(0, 78);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(132, 30);
			this->button26->TabIndex = 8;
			this->button26->Text = L"Edit Gym Halls";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Home::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(0, 39);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(132, 33);
			this->button27->TabIndex = 8;
			this->button27->Text = L"Delete Gym Halls";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Home::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(0, 0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(132, 33);
			this->button28->TabIndex = 6;
			this->button28->Text = L"Add Gym Halls";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Home::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(779, 149);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(102, 33);
			this->button29->TabIndex = 15;
			this->button29->Text = L"Gym Halls";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Home::button29_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(1237, 647);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(82, 31);
			this->button32->TabIndex = 17;
			this->button32->Text = L"Log Out";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Home::button32_Click);
			// 
			// Home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 721);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Home";
			this->Text = L"Home";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AddEquipment^ obj = gcnew AddEquipment();
		obj->Show();
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   bool show = true;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (show == true)
	{
		panel1->Visible = true;
		show = false;
	}
	else
	{
		show = true;
		panel1->Visible = false;
	}
}
	   bool show1 = true;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (show1 == true)
	{
		panel2->Visible = true;
		show1 = false;
	}
	else
	{
		show1 = true;
		panel2->Visible = false;
	}
}
	   bool show3 = true;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (show3 == true)
	{
		panel3->Visible = true;
		show3 = false;
	}
	else
	{
		show3 = true;
		panel3->Visible = false;
	}
}
	 bool  show4 = true;
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (show4 == true)
	{
		panel4->Visible = true;
		show4 = false;
	}
	else
	{
		show4 = true;
		panel4->Visible = false;
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ID = textBox1->Text;
	int id = System::Convert::ToInt16(ID);
	if (E.LoadData(id))
	{
		bool choice = E.DeleteEquipment(id);
		if (choice)
		{
			MessageBox::Show("The Equipment has been deleted Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			E.SaveEquipments();
			panel5->Visible = false;
		}
		else
		{
			MessageBox::Show("The Equipment has not been deleted Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Equipment Id Does Not Exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Visible = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	EditEquipment^ obj = gcnew EditEquipment();
	obj->Show();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Visible = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	AddTrainer^ obj = gcnew AddTrainer();
	obj->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	    panel6->Visible = true;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	panel6->Visible = false;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	int Id = System::Convert::ToInt16(textBox2->Text);
	if (T.LoadData(Id))
	{
		bool choice = T.DeleteTrainer(Id);
		if (choice)
		{
			MessageBox::Show("The Trainer Data has been Removed Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			T.SaveData();
			this->Hide();
		}
		else
		{
			MessageBox::Show("The Trainer Data has not been Removed Successfully!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Trainer Id does not Exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	AddExercisePlan^ obj = gcnew AddExercisePlan();
	obj->Show();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	panel7->Visible = true;
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = System::Convert::ToInt16(textBox3->Text);
	if (EP.LoadPlans(id))
	{
		bool done = EP.DeletePlans(id);
		if (done)
		{
			MessageBox::Show("The Exercise Plan has been deleted Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			EP.SavePlans();
			this->Hide();
		}
		else
		{
			MessageBox::Show("The Exercise Plan  has not been deleted Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Plan Id does not Exist!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	panel7->Visible = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	EditTrainer^ obj = gcnew EditTrainer();
	obj->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	AddCustomer^ obj = gcnew AddCustomer();
	obj->Show();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	int Id = System::Convert::ToInt16(textBox4->Text);
	if (C.CheckCustomer(Id))
	{
		bool done = C.DeleteCustomer(Id);
		if (done)
		{
			MessageBox::Show("The Customer Data has deleted Successfully! ", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			C.SaveData();
			C.SaveSubscription();
			panel8->Visible = false;
		}
		else
		{
			MessageBox::Show("The Customer Data has not been deleted Successfully! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("The Customer Data does not Exists! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Visible = true;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Visible = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	EditCustomer^ obj = gcnew EditCustomer();
	obj->Show();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowSubscriptions^ obj = gcnew ShowSubscriptions();
	obj->Show();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	AddGymHall^ obj = gcnew AddGymHall();
	obj->Show();
}
	   bool show9 = true;
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		if (show9 == true)
		{
			panel9->Visible = true;
			show9 = false;
		}
		else
		{
			show9 = true;
			panel9->Visible = false;
		}
	}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	G.LoadHalls();
	int Id = System::Convert::ToInt16(textBox5->Text);
	bool done = G.DeleteHall(Id);
	if (done)
	{
		MessageBox::Show("The Gym Hall has been deleted Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		G.SaveHall();
	}
	else
	{
		MessageBox::Show("The Gym Hall has not been deleted Successfully!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	panel10->Visible = true;
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	panel10->Visible = false;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	EditGymHall^ obj = gcnew EditGymHall();
	obj->Show();
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj1->Show();
}

private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	HallSechdule^ obj = gcnew HallSechdule();
	obj->Show();
}
};
}
