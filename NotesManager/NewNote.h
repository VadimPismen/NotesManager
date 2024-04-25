#pragma once

namespace NotesManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для NewNote
	/// </summary>
	public ref class NewNote : public System::Windows::Forms::Form
	{
	public:
		NewNote(void)
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
		~NewNote()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SaveButton;
	protected:

	protected:
	private: System::Windows::Forms::RichTextBox^ TextEditor;
	private: System::Windows::Forms::TextBox^ NameOfNote;
	private: System::Windows::Forms::TextBox^ Password;

	private: System::Windows::Forms::Label^ label1;


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
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->TextEditor = (gcnew System::Windows::Forms::RichTextBox());
			this->NameOfNote = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SaveButton
			// 
			this->SaveButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->SaveButton->Location = System::Drawing::Point(594, 487);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(189, 29);
			this->SaveButton->TabIndex = 4;
			this->SaveButton->Text = L"Сохранить";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &NewNote::SaveButton_Click);
			// 
			// TextEditor
			// 
			this->TextEditor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextEditor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextEditor->Location = System::Drawing::Point(12, 47);
			this->TextEditor->Name = L"TextEditor";
			this->TextEditor->Size = System::Drawing::Size(801, 434);
			this->TextEditor->TabIndex = 3;
			this->TextEditor->Text = L"";
			this->TextEditor->TextChanged += gcnew System::EventHandler(this, &NewNote::TextEditor_TextChanged);
			// 
			// NameOfNote
			// 
			this->NameOfNote->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->NameOfNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameOfNote->Location = System::Drawing::Point(274, 12);
			this->NameOfNote->Name = L"NameOfNote";
			this->NameOfNote->Size = System::Drawing::Size(291, 29);
			this->NameOfNote->TabIndex = 5;
			this->NameOfNote->TextChanged += gcnew System::EventHandler(this, &NewNote::NameOfNote_TextChanged);
			// 
			// Password
			// 
			this->Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->Location = System::Drawing::Point(136, 487);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(209, 29);
			this->Password->TabIndex = 6;
			this->Password->UseSystemPasswordChar = true;
			this->Password->TextChanged += gcnew System::EventHandler(this, &NewNote::Password_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(49, 487);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 24);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Пароль:";
			this->label1->Click += gcnew System::EventHandler(this, &NewNote::label1_Click);
			// 
			// NewNote
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 528);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->NameOfNote);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->TextEditor);
			this->Name = L"NewNote";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Новая заметка";
			this->Load += gcnew System::EventHandler(this, &NewNote::NewNote_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NameOfNote_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   /* В качестве имени новой заметки по умолчанию используется время
		   * в момент создания заметки
		   */
	private: System::Void NewNote_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime^ DateTimeNow = gcnew DateTime;
		DateTimeNow = DateTime::Now;
		this->NameOfNote->Text = DateTimeNow-> ToString("yyyy-MM-dd HH.mm.ss.fffffff");
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) { // Сохранение заметки
		String^ filename = this->NameOfNote->Text;
		String^ data = this->TextEditor->Text;
		String^ key = this->Password->Text;
		if (filename != "" && key->Length > 0) { // Имя файла и пароль не должны быть пустыми
			if (System::IO::File::Exists(String::Concat("notes/", filename, ".txt"))) {  // А вдруг есть заметка с таким же именем?
				System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					"Вы хотите перезаписать файл?",
					"Подтверждение перезаписи",
					System::Windows::Forms::MessageBoxButtons::OKCancel,
					System::Windows::Forms::MessageBoxIcon::Information);
				if (result == System::Windows::Forms::DialogResult::Cancel)
					return;
			}
			System::IO::StreamWriter^ dout;
			try {
				 dout = gcnew System::IO::StreamWriter(String::Concat("notes/", filename, ".txt"));
			}
			catch (System::IO::IOException^ error)
			{
				System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
					"Ошибка создания заметки",
					"Ошибка",
					System::Windows::Forms::MessageBoxButtons::OK,
					System::Windows::Forms::MessageBoxIcon::Error);
				return;
			}
			dout->AutoFlush = true;
			System::Char spec = 0; // Проверочный символ, код которого является суммой кодов символов пароля.
			// Он находится в начале файла перед зашифрованным паролем.
			for (int i = 0; i < key->Length; i++)
				spec += key[i];
			System::String^ newkey = System::String::Concat(spec, key);
			for (int i = 0; i < newkey->Length; i++) {
				dout->Write(Char(newkey[i] ^ key[i % key->Length])); // Шифрование проверочного символа с самим паролем
			}
			for (int i = 0; i < data->Length; i++) {
				/* Оказывается, при шифровании символа пробела пароль в файле будет показан явно,
				* поэтому пробел в шифруется так, будто это символ под номером 155.
				* Он выбран как неиспользуемый.
				*/
				if (data[i] == ' ') {
					dout->Write(Char(155 ^ key[i % key->Length])); 
				}
				else {
					dout->Write(Char(data[i] ^ key[i % key->Length])); // XOR-шифрование
				}
			}
			this->Close();
			dout->Close();
	}
}
private: System::Void TextEditor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
