#pragma once

namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for PasswordSet
	/// </summary>
	public ref class PasswordSet : public System::Windows::Forms::Form
	{
	public:
		PasswordSet(void)
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
		~PasswordSet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ oldpass;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ oldpassrep;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ newpass;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ emailch;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ newpassrep;
	private: System::Windows::Forms::Label^ adfdsf;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordSet::typeid));
			this->oldpass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->oldpassrep = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newpass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->emailch = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->newpassrep = (gcnew System::Windows::Forms::TextBox());
			this->adfdsf = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// oldpass
			// 
			this->oldpass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->oldpass->BackColor = System::Drawing::Color::White;
			this->oldpass->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oldpass->Location = System::Drawing::Point(66, 234);
			this->oldpass->Name = L"oldpass";
			this->oldpass->PasswordChar = '*';
			this->oldpass->Size = System::Drawing::Size(371, 40);
			this->oldpass->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(58, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 39);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Current Password";
			// 
			// oldpassrep
			// 
			this->oldpassrep->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->oldpassrep->BackColor = System::Drawing::Color::White;
			this->oldpassrep->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oldpassrep->Location = System::Drawing::Point(66, 321);
			this->oldpassrep->Name = L"oldpassrep";
			this->oldpassrep->PasswordChar = '*';
			this->oldpassrep->Size = System::Drawing::Size(371, 40);
			this->oldpassrep->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(60, 285);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 39);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Repeat Current Password";
			// 
			// newpass
			// 
			this->newpass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->newpass->BackColor = System::Drawing::Color::White;
			this->newpass->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newpass->Location = System::Drawing::Point(65, 408);
			this->newpass->Name = L"newpass";
			this->newpass->PasswordChar = '*';
			this->newpass->Size = System::Drawing::Size(371, 40);
			this->newpass->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(58, 366);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 39);
			this->label3->TabIndex = 17;
			this->label3->Text = L"New Password";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(382, 59);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Change Password";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(65, 596);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 41);
			this->pictureBox1->TabIndex = 71;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button1->FlatAppearance->BorderSize = 4;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button1->Location = System::Drawing::Point(58, 587);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(372, 59);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Change my password";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PasswordSet::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 15));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(273, 555);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 24);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Forgot password\?";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(621, 596);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(126, 70);
			this->pictureBox4->TabIndex = 74;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &PasswordSet::pictureBox4_Click);
			// 
			// emailch
			// 
			this->emailch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->emailch->BackColor = System::Drawing::Color::White;
			this->emailch->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailch->Location = System::Drawing::Point(66, 148);
			this->emailch->Name = L"emailch";
			this->emailch->Size = System::Drawing::Size(371, 40);
			this->emailch->TabIndex = 75;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Candara Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(58, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 39);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Email";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(65, 555);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(172, 30);
			this->checkBox1->TabIndex = 77;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &PasswordSet::checkBox1_CheckedChanged);
			// 
			// newpassrep
			// 
			this->newpassrep->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->newpassrep->BackColor = System::Drawing::Color::White;
			this->newpassrep->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newpassrep->Location = System::Drawing::Point(65, 498);
			this->newpassrep->Name = L"newpassrep";
			this->newpassrep->PasswordChar = '*';
			this->newpassrep->Size = System::Drawing::Size(371, 40);
			this->newpassrep->TabIndex = 78;
			// 
			// adfdsf
			// 
			this->adfdsf->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adfdsf->AutoSize = true;
			this->adfdsf->BackColor = System::Drawing::Color::Transparent;
			this->adfdsf->Font = (gcnew System::Drawing::Font(L"Candara Light", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adfdsf->ForeColor = System::Drawing::Color::White;
			this->adfdsf->Location = System::Drawing::Point(58, 456);
			this->adfdsf->Name = L"adfdsf";
			this->adfdsf->Size = System::Drawing::Size(320, 39);
			this->adfdsf->TabIndex = 79;
			this->adfdsf->Text = L"Repeat New Password";
			// 
			// PasswordSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(759, 678);
			this->Controls->Add(this->newpassrep);
			this->Controls->Add(this->adfdsf);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->emailch);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->newpass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->oldpassrep);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->oldpass);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(475, 2);
			this->Name = L"PasswordSet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"PasswordSet";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ passstudent;
	String^ email = emailch -> Text;
	String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(constr);
	sqlConn->Open();
	SqlCommand^ cmd = gcnew SqlCommand("select * from studentdb  WHERE Email='" + email + "'", sqlConn);
	SqlDataReader^ dr = cmd->ExecuteReader();
	while (dr->Read()) {
	  passstudent = dr->GetString(13);
	}
	sqlConn->Close();
	if (oldpass->Text == oldpassrep->Text) {
		if (newpass->Text == newpassrep->Text)
	{
		if (oldpassrep->Text == passstudent) 
		{
			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);

			String^ StudentPW = this->newpass->Text;

            
			SqlCommand^ cmd = gcnew SqlCommand("update studentdb set Password='" + StudentPW + "' WHERE Email='" + email + "'", sqlConn);
			sqlConn->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();
			//MessageBox::Show("Are you want to remove this student?","Remove Data from Database",MessageBoxButtons::YesNoCancel,MessageBoxIcon::Information);
			sqlConn->Close();
			MessageBox::Show("Password Changed Successfully");
		}
		else {
			MessageBox::Show("Password Changed Fail! Please check if you enter the correct Password", "Incorrect password", MessageBoxButtons::OK, MessageBoxIcon::Error);

		};
	}
	else {
		MessageBox::Show("Your New Password Doesn't Match the Repeat!", "Incorrect password", MessageBoxButtons::OK, MessageBoxIcon::Error);

	};
	}
	else {
		MessageBox::Show("Your Old Password Doesn't Match the Repeat!", "Incorrect password", MessageBoxButtons::OK, MessageBoxIcon::Error);

	};
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		oldpass->PasswordChar = 0;
		oldpassrep->PasswordChar = 0;
		newpass->PasswordChar = 0;
		newpassrep->PasswordChar = 0;
	}
	else {
		oldpass->PasswordChar = '*';
		oldpassrep->PasswordChar = '*';
		newpass->PasswordChar = '*';
		newpassrep->PasswordChar = '*';
	}
}
};
}
