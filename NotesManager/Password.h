#pragma once
#include <msclr\marshal_cppstd.h>
#include "TextWindow.h"

namespace NotesManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Password
	/// </summary>
	public ref class Password : public System::Windows::Forms::Form
	{
	public:
		Password(System::String^ a_note)
		{
			InitializeComponent();
			note = a_note;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Password()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^ PasBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

		   System::String^ note;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PasBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PasBox
			// 
			this->PasBox->Location = System::Drawing::Point(39, 56);
			this->PasBox->Name = L"PasBox";
			this->PasBox->Size = System::Drawing::Size(206, 20);
			this->PasBox->TabIndex = 0;
			this->PasBox->UseSystemPasswordChar = true;
			this->PasBox->TextChanged += gcnew System::EventHandler(this, &Password::PasBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¬ведите пароль:";
			this->label1->Click += gcnew System::EventHandler(this, &Password::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"¬вод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Password::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(150, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ќтменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Password::button2_Click);
			// 
			// Password
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(284, 140);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasBox);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Load += gcnew System::EventHandler(this, &Password::Password_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PasBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ key = this->PasBox->Text;
		IO::StreamReader^ din = IO::File::OpenText(String::Concat("notes/", note, ".txt"));
		if (key->Length == 0 || din->BaseStream->Length <= key->Length) {
			return;
		}
		Char checksum = 0;
		for (int i = 0; i < key->Length; i++)
			checksum += key[i];
		String^ checkedkey = String::Concat(checksum, key);

		String^ checkedkeyencr;
		for (int i = 0; i < checkedkey->Length; i++)
			checkedkeyencr = String::Concat(checkedkeyencr, Char(checkedkey[i] ^ key[i % key->Length]));

		//din->BaseStream->Seek(- (checkedkey->Length), IO::SeekOrigin::End);
		String^ checkstring;
		for (int i = 0; i < checkedkeyencr->Length; i++)
			checkstring = String::Concat(checkstring,Char(din->Read()));
		din->Close();
		
	
		if (String::Equals(checkedkeyencr, checkstring)) {
			this->Hide();
			TextWindow^ text = gcnew TextWindow(String::Concat(note, ".txt"), key, checkedkeyencr);
			text->ShowDialog(ParentForm);
			this->Close();
		}

		//System::String^ key = this->PasBox->Text;
		//System::IO::StreamReader^ din = System::IO::File::OpenText(note);
		//unsigned int filesize = din->BaseStream->Length-1;
		//unsigned int keysize = key->Length;
		//System::String^ data = din->ReadToEnd();
		//System::String^ newdata = L"";
		//for (int i = 0; i < filesize; i++)
		//	newdata = System::String::Concat(newdata, System::Char(data[i] ^ key[i % keysize]));
		//this->label1->Text = newdata;
		//System::Char sum = 0;
		//for (int i = 0; i < keysize; i++)
		//	sum += key[i];
		//this->button1->Text = System::String::Concat(System::Char(sum ^ key[0]));
	}
	private: System::Void Password_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
