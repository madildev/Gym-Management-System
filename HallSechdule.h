#pragma once
#include "CustomerObject.h"
#include "TrainerObject.h"
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HallSechdule
	/// </summary>
	public ref class HallSechdule : public System::Windows::Forms::Form
	{
	public:
		HallSechdule(void)
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
		~HallSechdule()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::Button^ button1;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(40, 82);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(742, 365);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Hall Id";
			this->columnHeader1->Width = 93;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Trainer Id";
			this->columnHeader2->Width = 91;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Customer Id";
			this->columnHeader3->Width = 98;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Subscription Date";
			this->columnHeader4->Width = 126;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(341, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HallSechdule::button1_Click);
			// 
			// HallSechdule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(818, 497);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"HallSechdule";
			this->Text = L"HallSechdule";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		C.LoadSubscription();
		for (int i = 0; i < 10; i++)
		{
			if (C.ID[i] == -1)
			{

			}
			else if (C.ID[i] != 0)
			{
				listViewItem = gcnew Windows::Forms::ListViewItem(gcnew String(C.Hallid[i].ToString()));
				listViewItem->SubItems->Add(gcnew String(C.Tid[i].ToString()));
				listViewItem->SubItems->Add(gcnew String(C.ID[i].ToString()));
				listViewItem->SubItems->Add(gcnew String(C.date[i].c_str()));
				this->listView1->Items->Add(this->listViewItem);
			}
		}
	}
};
}
