#pragma once

namespace NotesManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TextWindow
	/// </summary>
	public ref class TextWindow : public System::Windows::Forms::Form
	{
	public:
		TextWindow(System::String^ a_note, System::String^ a_key, System::String^ a_keyencr)
		{
			InitializeComponent();
			note = a_note;
			key = a_key;
			keyencr = a_keyencr;
			//
			//TODO: добавьте код конструктора
			//
		}

		//void SetKey(String^ key_a) { key = key_a; }

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TextWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::String^ note;
		System::String^ key;
		System::String^ keyencr;
	private: System::Windows::Forms::RichTextBox^ TextEditor;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::CheckBox^ isnewpas;
	private: System::Windows::Forms::TextBox^ Password;
	private: System::Windows::Forms::TextBox^ newname;
	private: System::Windows::Forms::CheckBox^ isnewname;


		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextEditor = (gcnew System::Windows::Forms::RichTextBox());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->isnewpas = (gcnew System::Windows::Forms::CheckBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->newname = (gcnew System::Windows::Forms::TextBox());
			this->isnewname = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// TextEditor
			// 
			this->TextEditor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextEditor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextEditor->Location = System::Drawing::Point(29, 54);
			this->TextEditor->Name = L"TextEditor";
			this->TextEditor->Size = System::Drawing::Size(770, 404);
			this->TextEditor->TabIndex = 0;
			this->TextEditor->Text = L"";
			this->TextEditor->TextChanged += gcnew System::EventHandler(this, &TextWindow::TextEditor_TextChanged);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &TextWindow::fontDialog1_Apply);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(635, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TextWindow::button1_Click);
			// 
			// isnewpas
			// 
			this->isnewpas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->isnewpas->AutoSize = true;
			this->isnewpas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->isnewpas->Location = System::Drawing::Point(38, 479);
			this->isnewpas->Name = L"isnewpas";
			this->isnewpas->Size = System::Drawing::Size(157, 28);
			this->isnewpas->TabIndex = 10;
			this->isnewpas->Text = L"Новый пароль";
			this->isnewpas->UseVisualStyleBackColor = true;
			this->isnewpas->CheckedChanged += gcnew System::EventHandler(this, &TextWindow::checkBox1_CheckedChanged);
			// 
			// Password
			// 
			this->Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->Location = System::Drawing::Point(201, 479);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(209, 29);
			this->Password->TabIndex = 11;
			this->Password->UseSystemPasswordChar = true;
			this->Password->Visible = false;
			this->Password->TextChanged += gcnew System::EventHandler(this, &TextWindow::Password_TextChanged_1);
			// 
			// newname
			// 
			this->newname->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->newname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newname->Location = System::Drawing::Point(298, 12);
			this->newname->Name = L"newname";
			this->newname->Size = System::Drawing::Size(291, 29);
			this->newname->TabIndex = 12;
			this->newname->Visible = false;
			// 
			// isnewname
			// 
			this->isnewname->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->isnewname->AutoSize = true;
			this->isnewname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->isnewname->Location = System::Drawing::Point(116, 12);
			this->isnewname->Name = L"isnewname";
			this->isnewname->Size = System::Drawing::Size(176, 28);
			this->isnewname->TabIndex = 13;
			this->isnewname->Text = L"Новое название";
			this->isnewname->UseVisualStyleBackColor = true;
			this->isnewname->CheckedChanged += gcnew System::EventHandler(this, &TextWindow::isnewname_CheckedChanged);
			// 
			// TextWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 528);
			this->Controls->Add(this->isnewname);
			this->Controls->Add(this->newname);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->isnewpas);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TextEditor);
			this->Name = L"TextWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &TextWindow::TextWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = note->Remove(note->Length - 4);;

		//System::IO::StreamReader^ din = System::IO::File::OpenText(note);
		//System::String^ data = din->ReadToEnd();
		//din->Close();
		//System::IO::StreamWriter^ dout = gcnew System::IO::StreamWriter(note);
		//dout->AutoFlush = true;
		//for (int i = 0; i < data->Length; i++) {
		//	dout->Write(data[i] ^ key[i % key->Length]);
		//}
		//System::Char spec = 0;
		//for (int i = 0; i < key->Length; i++)
		//	spec += key[i];
		//System::String^ newkey = System::String::Concat(spec, key);
		//for (int i = 0; i < newkey->Length; i++) {
		//	dout->Write(newkey[i] ^ key[i % key->Length]);
		//}
		//dout->Close();

		System::IO::StreamReader^ din = System::IO::File::OpenText(String::Concat("notes/", note));
		for (int i = 0; i < keyencr->Length; i++) {
			din->Read();
		}
		System::String^ data = din->ReadToEnd();
		din->Close();
		System::String^ decrdata;
		for (int i = 0; i < data->Length; i++) {
			decrdata = String::Concat(decrdata, Char(data[i] ^ key[i % key->Length]));
		}
		this->TextEditor->Text = decrdata;
	}
	private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ localkey;
		String^ localname;
		if (this->isnewpas->Checked) {
			localkey = this->Password->Text;
		}
		else {
			localkey = key;
		}
		if (this->isnewname->Checked) {
			localname = String::Concat(this->newname->Text, ".txt");
			if (System::IO::File::Exists(String::Concat("notes/", localname))) {
				System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					"Вы хотите перезаписать файл?",
					"Подтверждение перезаписи",
					System::Windows::Forms::MessageBoxButtons::OKCancel,
					System::Windows::Forms::MessageBoxIcon::Information);
				if (result == System::Windows::Forms::DialogResult::Cancel)
					return;
			}
		}
		else {
			localname = note;
		}
		if (localkey->Length == 0) {
			return;
		}
		String^ data = this->TextEditor->Text;
		System::IO::StreamWriter^ dout;
		try {
			dout = gcnew System::IO::StreamWriter(String::Concat("notes/", localname));
		}
		catch (System::IO::IOException^ error)
		{
			return;
		}
		if (this->isnewname->Checked) {
			if (System::IO::File::Exists(String::Concat("notes/", note)))
				System::IO::File::Delete(String::Concat("notes/", note));
		}
		System::Char spec = 0;
		for (int i = 0; i < localkey->Length; i++)
			spec += localkey[i];
		System::String^ newkey = System::String::Concat(spec, localkey);
		for (int i = 0; i < newkey->Length; i++) {
			dout->Write(newkey[i] ^ localkey[i % localkey->Length]);
		}
		dout->AutoFlush = true;
		for (int i = 0; i < data->Length; i++) {
			dout->Write(data[i] ^ localkey[i % localkey->Length]);
		}
		this->Close();
		dout->Close();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->isnewpas->Checked) {
		this->Password->Visible = true;
	}
	else {
		this->Password->Visible = false;
	}
}
private: System::Void Password_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		return;
	this->TextEditor->Font = fontDialog1->Font;
}
private: System::Void TextEditor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void isnewname_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->isnewname->Checked) {
		this->newname->Visible = true;
	}
	else {
		this->newname->Visible = false;
	}
}
};
}
