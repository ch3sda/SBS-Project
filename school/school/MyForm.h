#pragma once
#include "Main.h"
#include"TermCon.h"
#include"UserStudent.h"
#include"UserTeacher.h"
#include"UserStaff.h"
#include"StuProfile.h"

namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ studentemail;
		String^ studentpassw;
	public:
		
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LoginButton;
	protected:

	private: System::Windows::Forms::TextBox^ login;

	protected:



	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ password;


	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::Button^ QuitButton;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ User;
	private: System::Windows::Forms::Label^ tempemail;
	private: System::Windows::Forms::Label^ temppassword;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->User = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tempemail = (gcnew System::Windows::Forms::Label());
			this->temppassword = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->LoginButton->Enabled = false;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->LoginButton->Location = System::Drawing::Point(68, 460);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(371, 46);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// login
			// 
			this->login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->login->BackColor = System::Drawing::Color::White;
			this->login->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(68, 229);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(371, 40);
			this->login->TabIndex = 1;
			this->login->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->login->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::login_KeyDown);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(60, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 45);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Email";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// password
			// 
			this->password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password->BackColor = System::Drawing::Color::White;
			this->password->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(68, 319);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(371, 40);
			this->password->TabIndex = 7;
			this->password->TextChanged += gcnew System::EventHandler(this, &MyForm::password_TextChanged);
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::password_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Candara Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(60, 421);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(166, 33);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara Light", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(60, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 44);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->label3->Location = System::Drawing::Point(221, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Terms and Conditions";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// QuitButton
			// 
			this->QuitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->QuitButton->BackColor = System::Drawing::Color::Transparent;
			this->QuitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QuitButton->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuitButton->ForeColor = System::Drawing::Color::Brown;
			this->QuitButton->Location = System::Drawing::Point(68, 512);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(187, 46);
			this->QuitButton->TabIndex = 5;
			this->QuitButton->Text = L"Quit";
			this->QuitButton->UseVisualStyleBackColor = false;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::IndianRed;
			this->label6->Location = System::Drawing::Point(13, 649);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(530, 23);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Warning! This system isn\'t allow for student to used. (Admin Only)";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara Light", 15));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(282, 526);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Forgot password\?";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->User);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->login);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->QuitButton);
			this->panel3->Controls->Add(this->password);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->checkBox1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->LoginButton);
			this->panel3->Location = System::Drawing::Point(316, 30);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(519, 577);
			this->panel3->TabIndex = 20;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint_1);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Candara Light", 15));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(64, 378);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 24);
			this->label7->TabIndex = 86;
			this->label7->Text = L"Login as";
			// 
			// User
			// 
			this->User->ForeColor = System::Drawing::SystemColors::WindowText;
			this->User->FormattingEnabled = true;
			this->User->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Student", L"Staff", L"Teacher", L"Admin" });
			this->User->Location = System::Drawing::Point(149, 381);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(102, 21);
			this->User->TabIndex = 85;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(123, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 58);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Welcome to SB System!\r\n        Please Login!";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(152, -19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 159);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Candara Light", 15));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(1030, 648);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 24);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Copyright by M3";
			// 
			// tempemail
			// 
			this->tempemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tempemail->AutoSize = true;
			this->tempemail->BackColor = System::Drawing::Color::Transparent;
			this->tempemail->Font = (gcnew System::Drawing::Font(L"Candara Light", 1.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempemail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->tempemail->Location = System::Drawing::Point(9, 604);
			this->tempemail->Name = L"tempemail";
			this->tempemail->Size = System::Drawing::Size(3, 3);
			this->tempemail->TabIndex = 25;
			this->tempemail->Text = L"1";
			// 
			// temppassword
			// 
			this->temppassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->temppassword->AutoSize = true;
			this->temppassword->BackColor = System::Drawing::Color::Transparent;
			this->temppassword->Font = (gcnew System::Drawing::Font(L"Candara Light", 1.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->temppassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->temppassword->Location = System::Drawing::Point(54, 604);
			this->temppassword->Name = L"temppassword";
			this->temppassword->Size = System::Drawing::Size(3, 3);
			this->temppassword->TabIndex = 26;
			this->temppassword->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1188, 681);
			this->Controls->Add(this->temppassword);
			this->Controls->Add(this->tempemail);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label6);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Welcome! Please Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Logoruppback_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to quit?", "Quit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		LoginButton ->Enabled = true;
	}
	else {
		LoginButton->Enabled = false;
	}

}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = login->Text;
		//Login As Admin
		if (User->Text == "Admin"){
			if (login->Text == "1") {
				if (password->Text == "1") {
					this->Hide();
					Main^ main = gcnew Main();
					main->Show();
				}
				else {
					MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
	    }

		//Login As Student
		if (User->Text == "Student") {
			
		    String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			sqlConn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("select * from studentdb  WHERE Email='"+email+"'", sqlConn);
			SqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				tempemail->Text = dr->GetString(6);
				temppassword->Text = dr->GetString(13);
			}
			sqlConn->Close();
			studentemail = tempemail->Text;
			studentpassw = temppassword->Text;
			//StuProfile^ stuprofile = gcnew StuProfile(studentemail);
				if (login->Text == studentemail) {
					if (password->Text == studentpassw) {
						this->Hide();
						
						UserStudent^ ustu = gcnew UserStudent(tempemail->Text);
						ustu->Show();
					}
					else {
						MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else {
					MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			
			
		}
		//Login As Teacher
		if (User->Text == "Teacher") {

			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			sqlConn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("select * from teacherdb  WHERE Email='" + email + "'", sqlConn);
			SqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				tempemail->Text = dr->GetString(6);
			}
			String^ teacheremail = tempemail->Text;
			if (login->Text == teacheremail) {
				if (password->Text == "1") {
					this->Hide();
					UserStudent^ ustu = gcnew UserStudent(); // need to change
					ustu->Show();
				}
				else {
					MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Incorrect password or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}
		//login as staff
		if (User->Text == "Staff") {

			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			sqlConn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("select * from staffdb WHERE Email='" + email + "'", sqlConn);
			SqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				tempemail->Text = dr->GetString(6);
			}
			String^ staffemail = tempemail->Text;
			if (login->Text == staffemail) {
				if (password->Text == "1") {
					this->Hide();
					UserStudent^ ustu = gcnew UserStudent(); // need to change
					ustu->Show();
				}
				else {
					MessageBox::Show("Incorrect passowrd or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else {
				MessageBox::Show("Incorrect passowrd or user!", "WARINING", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}

}
private: System::Void Welcome_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	TermCon^ TC = gcnew TermCon;
	TC->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void login_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		password->Focus();
	}
}
private: System::Void password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		LoginButton->PerformClick();
	}
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
