#pragma once
#include <iostream>
#include <fstream>
#include <string>
//#include <filesystem>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include "Password.h"
#include "NewNote.h"

namespace NotesManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ListBox^ list_of_notes;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ DeleteButton;

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->list_of_notes = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// list_of_notes
			// 
			this->list_of_notes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->list_of_notes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->list_of_notes->FormattingEnabled = true;
			this->list_of_notes->ItemHeight = 24;
			this->list_of_notes->Location = System::Drawing::Point(37, 78);
			this->list_of_notes->Name = L"list_of_notes";
			this->list_of_notes->Size = System::Drawing::Size(896, 460);
			this->list_of_notes->TabIndex = 2;
			this->list_of_notes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			this->list_of_notes->DoubleClick += gcnew System::EventHandler(this, &MyForm::list_of_notes_DoubleClick);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Location = System::Drawing::Point(103, 566);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 47);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(332, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 39);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Список заметок:";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(643, 566);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Новая заметка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteButton->Enabled = false;
			this->DeleteButton->Location = System::Drawing::Point(376, 566);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(219, 47);
			this->DeleteButton->TabIndex = 6;
			this->DeleteButton->Text = L"Удалить";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(987, 646);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->list_of_notes);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Менджер заметок";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->list_of_notes->SelectedIndex != -1) {
			this->DeleteButton->Enabled = true;
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	loadlist();

	//for (const auto& entry : std::filesystem::directory_iterator("/")) {
	//	this->listBox1->Items->Add(gcnew System::String(entry.path().c_str()));
	//}

}
private: System::Void loadlist() {
	this->list_of_notes->Items->Clear();
	WIN32_FIND_DATA findFileData;
	HANDLE hFind = FindFirstFile(L"notes/*.txt", &findFileData);

	if (hFind != INVALID_HANDLE_VALUE) {
		do {
			System::String^ str = gcnew System::String(findFileData.cFileName);
			str = str->Remove(str->Length - 4);
			this->list_of_notes->Items->Add(str);
		} while (FindNextFile(hFind, &findFileData) != 0);
		FindClose(hFind);
	}
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	loadlist();
}
private: System::Void list_of_notes_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (this->list_of_notes->SelectedIndex != -1) {
		System::String^ SelectedElement = this->list_of_notes->Items[this->list_of_notes->SelectedIndex]->ToString();
		Password^ passwindow = gcnew Password(SelectedElement);
		passwindow->ShowDialog(this);
		loadlist();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	NewNote^ addnote = gcnew NewNote();
	this->Hide();
	addnote->ShowDialog(this);
	this->Show();
	loadlist();
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->list_of_notes->SelectedIndex != -1) {
		System::String^ SelectedElement = this->list_of_notes->Items[this->list_of_notes->SelectedIndex]->ToString();
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
			"Вы хотите удалить " + SelectedElement + "?",
			"Подтверждение удаления",
			System::Windows::Forms::MessageBoxButtons::OKCancel,
			System::Windows::Forms::MessageBoxIcon::Information);

		if (result == System::Windows::Forms::DialogResult::OK)
			if (System::IO::File::Exists(String::Concat("notes/",SelectedElement, ".txt")))
				System::IO::File::Delete(String::Concat("notes/", SelectedElement, ".txt"));
		loadlist();
	}
}
};
}
