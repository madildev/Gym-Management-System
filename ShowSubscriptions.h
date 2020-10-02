#pragma once
#include "CustomerObject.h"
namespace GymSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShowSubscriptions
	/// </summary>
	public ref class ShowSubscriptions : public System::Windows::Forms::Form
	{
	public:
		ShowSubscriptions(void)
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
		~ShowSubscriptions()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::ListView^ listView1;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	protected:


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 89);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1021, 414);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ShowSubscriptions::listView1_SelectedIndexChanged_1);
			this->listView1->Click += gcnew System::EventHandler(this, &ShowSubscriptions::listView1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(456, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowSubscriptions::button1_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Customer Id";
			this->columnHeader1->Width = 118;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Customer Name";
			this->columnHeader2->Width = 108;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Address";
			this->columnHeader3->Width = 97;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Phone";
			this->columnHeader4->Width = 94;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Email";
			this->columnHeader5->Width = 115;
			// 
			// ShowSubscriptions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 542);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"ShowSubscriptions";
			this->Text = L"ShowSubscriptions";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->listView1->View == Windows::Forms::View::Tile)
		{
			this->listView1->View = Windows::Forms::View::Details;
		}
		else if (this->listView1->View == Windows::Forms::View::Details)
		{
			this->listView1->View = Windows::Forms::View::Tile;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	C.LoadData();
	for (int i = 0; i<10 ; i++)
	{
		if (C.ID[i] == -1)
		{

		}
		else if (C.ID[i] != 0)
		{
			listViewItem = gcnew Windows::Forms::ListViewItem(gcnew String(C.ID[i].ToString()));
			listViewItem->SubItems->Add(gcnew String(C.Name[i].c_str()));
			listViewItem->SubItems->Add(gcnew String(C.Address[i].c_str()));
			listViewItem->SubItems->Add(gcnew String(C.Phone[i].c_str()));
			listViewItem->SubItems->Add(gcnew String(C.Email[i].c_str()));
			this->listView1->Items->Add(this->listViewItem);
		}
	}
}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
