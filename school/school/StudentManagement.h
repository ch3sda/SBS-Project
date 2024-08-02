#pragma once
#include"StudentReciept.h"
namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StudentManagement
	/// </summary>
	public ref class StudentManagement : public System::Windows::Forms::Form
	{
	public:
		StudentManagement(void)
		{
			InitializeComponent();
			//For refresh the table automaticly
			//should be off if using on ur device to avoid database crash

			/*
			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from studentdb", sqlConn);
			DataTable^ StudentDataTable = gcnew DataTable();
			SearchStudentData->Fill(StudentDataTable);
			bindingstudentdata->DataSource = StudentDataTable;
			StudentDataView->DataSource = bindingstudentdata;
			*/
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ StudentLastName;
	private: System::Windows::Forms::TextBox^ StudentFirstName;
	private: System::Windows::Forms::TextBox^ StudentID;

	private: System::Windows::Forms::DateTimePicker^ StudentDOB;
	private: System::Windows::Forms::TextBox^ Studentmail;
	private: System::Windows::Forms::TextBox^ StudentFee;
	private: System::Windows::Forms::ComboBox^ StudentYear;
	private: System::Windows::Forms::ComboBox^ StudentDepartment;
	private: System::Windows::Forms::TextBox^ StudentPhoneNumber;
	private: System::Windows::Forms::ComboBox^ StudentGender;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ txtdob;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ textdep;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ textemail;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::DateTimePicker^ StudentJoinDate;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::BindingSource^ bindingstudentdata;
	private: System::Windows::Forms::DataGridView^ StudentDataView;
	private: System::Windows::Forms::ComboBox^ StudentClass;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ StudentPayment;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ StudentPassWord;




	private: System::ComponentModel::IContainer^ components;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentManagement::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->StudentLastName = (gcnew System::Windows::Forms::TextBox());
			this->StudentFirstName = (gcnew System::Windows::Forms::TextBox());
			this->StudentID = (gcnew System::Windows::Forms::TextBox());
			this->StudentDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->Studentmail = (gcnew System::Windows::Forms::TextBox());
			this->StudentFee = (gcnew System::Windows::Forms::TextBox());
			this->StudentYear = (gcnew System::Windows::Forms::ComboBox());
			this->StudentDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->StudentPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->StudentGender = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtdob = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textdep = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textemail = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->StudentJoinDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->bindingstudentdata = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->StudentDataView = (gcnew System::Windows::Forms::DataGridView());
			this->StudentClass = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->StudentPayment = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->StudentPassWord = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingstudentdata))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentDataView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(475, 387);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 41);
			this->pictureBox5->TabIndex = 53;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button4->FlatAppearance->BorderSize = 4;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button4->Location = System::Drawing::Point(468, 380);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(224, 59);
			this->button4->TabIndex = 54;
			this->button4->Text = L"Delete";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &StudentManagement::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(15, 387);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 41);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button2->FlatAppearance->BorderSize = 4;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(8, 380);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(224, 59);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Search";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentManagement::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(245, 387);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 41);
			this->pictureBox2->TabIndex = 49;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox2_Click);
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
			this->button1->Location = System::Drawing::Point(238, 380);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(224, 59);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Update";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentManagement::button1_Click);
			// 
			// StudentLastName
			// 
			this->StudentLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentLastName->Location = System::Drawing::Point(249, 114);
			this->StudentLastName->Name = L"StudentLastName";
			this->StudentLastName->Size = System::Drawing::Size(174, 33);
			this->StudentLastName->TabIndex = 24;
			// 
			// StudentFirstName
			// 
			this->StudentFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentFirstName->Location = System::Drawing::Point(33, 113);
			this->StudentFirstName->Name = L"StudentFirstName";
			this->StudentFirstName->Size = System::Drawing::Size(174, 33);
			this->StudentFirstName->TabIndex = 23;
			this->StudentFirstName->TextChanged += gcnew System::EventHandler(this, &StudentManagement::StudentFirstName_TextChanged);
			// 
			// StudentID
			// 
			this->StudentID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentID->Location = System::Drawing::Point(465, 114);
			this->StudentID->Name = L"StudentID";
			this->StudentID->Size = System::Drawing::Size(121, 33);
			this->StudentID->TabIndex = 56;
			this->StudentID->TextChanged += gcnew System::EventHandler(this, &StudentManagement::StudentID_TextChanged);
			// 
			// StudentDOB
			// 
			this->StudentDOB->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentDOB->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->StudentDOB->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->StudentDOB->CalendarTitleBackColor = System::Drawing::Color::Red;
			this->StudentDOB->CalendarTitleForeColor = System::Drawing::Color::Transparent;
			this->StudentDOB->CustomFormat = L"dd-MMM-yyyy";
			this->StudentDOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->StudentDOB->Location = System::Drawing::Point(465, 186);
			this->StudentDOB->Name = L"StudentDOB";
			this->StudentDOB->Size = System::Drawing::Size(202, 20);
			this->StudentDOB->TabIndex = 58;
			// 
			// Studentmail
			// 
			this->Studentmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Studentmail->Location = System::Drawing::Point(33, 332);
			this->Studentmail->Name = L"Studentmail";
			this->Studentmail->Size = System::Drawing::Size(231, 33);
			this->Studentmail->TabIndex = 59;
			// 
			// StudentFee
			// 
			this->StudentFee->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentFee->Location = System::Drawing::Point(282, 332);
			this->StudentFee->Name = L"StudentFee";
			this->StudentFee->Size = System::Drawing::Size(130, 33);
			this->StudentFee->TabIndex = 62;
			// 
			// StudentYear
			// 
			this->StudentYear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentYear->FormattingEnabled = true;
			this->StudentYear->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Year 1", L"Year 2", L"Year 3", L"Year 4", L"Master",
					L"Doctor"
			});
			this->StudentYear->Location = System::Drawing::Point(282, 267);
			this->StudentYear->Name = L"StudentYear";
			this->StudentYear->Size = System::Drawing::Size(118, 21);
			this->StudentYear->TabIndex = 61;
			// 
			// StudentDepartment
			// 
			this->StudentDepartment->FormattingEnabled = true;
			this->StudentDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Information Technology Engineering",
					L"Telecommunication & Electronics Engineering ", L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering",
					L"Environmental Engineering", L"Food Technology Engineering"
			});
			this->StudentDepartment->Location = System::Drawing::Point(33, 267);
			this->StudentDepartment->Name = L"StudentDepartment";
			this->StudentDepartment->Size = System::Drawing::Size(231, 21);
			this->StudentDepartment->TabIndex = 60;
			// 
			// StudentPhoneNumber
			// 
			this->StudentPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentPhoneNumber->Location = System::Drawing::Point(33, 187);
			this->StudentPhoneNumber->Name = L"StudentPhoneNumber";
			this->StudentPhoneNumber->Size = System::Drawing::Size(231, 33);
			this->StudentPhoneNumber->TabIndex = 63;
			// 
			// StudentGender
			// 
			this->StudentGender->FormattingEnabled = true;
			this->StudentGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->StudentGender->Location = System::Drawing::Point(286, 188);
			this->StudentGender->Name = L"StudentGender";
			this->StudentGender->Size = System::Drawing::Size(137, 21);
			this->StudentGender->TabIndex = 64;
			this->StudentGender->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentManagement::StudentGender_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(33, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 36);
			this->label1->TabIndex = 65;
			this->label1->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(243, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 36);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Last Name";
			this->label2->Click += gcnew System::EventHandler(this, &StudentManagement::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(459, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 36);
			this->label3->TabIndex = 67;
			this->label3->Text = L"ID";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(27, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 36);
			this->label8->TabIndex = 68;
			this->label8->Text = L"Phone Number";
			// 
			// txtdob
			// 
			this->txtdob->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtdob->AutoSize = true;
			this->txtdob->BackColor = System::Drawing::Color::Transparent;
			this->txtdob->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdob->ForeColor = System::Drawing::Color::White;
			this->txtdob->Location = System::Drawing::Point(459, 149);
			this->txtdob->Name = L"txtdob";
			this->txtdob->Size = System::Drawing::Size(167, 36);
			this->txtdob->TabIndex = 69;
			this->txtdob->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(280, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 36);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Gender";
			// 
			// textdep
			// 
			this->textdep->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textdep->AutoSize = true;
			this->textdep->BackColor = System::Drawing::Color::Transparent;
			this->textdep->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdep->ForeColor = System::Drawing::Color::White;
			this->textdep->Location = System::Drawing::Point(27, 228);
			this->textdep->Name = L"textdep";
			this->textdep->Size = System::Drawing::Size(162, 36);
			this->textdep->TabIndex = 71;
			this->textdep->Text = L"Department";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(276, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 36);
			this->label6->TabIndex = 72;
			this->label6->Text = L"Level";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(276, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 36);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Fee$";
			// 
			// textemail
			// 
			this->textemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textemail->AutoSize = true;
			this->textemail->BackColor = System::Drawing::Color::Transparent;
			this->textemail->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textemail->ForeColor = System::Drawing::Color::White;
			this->textemail->Location = System::Drawing::Point(27, 293);
			this->textemail->Name = L"textemail";
			this->textemail->Size = System::Drawing::Size(184, 36);
			this->textemail->TabIndex = 74;
			this->textemail->Text = L"Email Address";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(550, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(142, 80);
			this->pictureBox4->TabIndex = 75;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(-2, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(511, 64);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Student Management";
			// 
			// StudentJoinDate
			// 
			this->StudentJoinDate->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StudentJoinDate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->StudentJoinDate->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->StudentJoinDate->CalendarTitleBackColor = System::Drawing::Color::Red;
			this->StudentJoinDate->CalendarTitleForeColor = System::Drawing::Color::Transparent;
			this->StudentJoinDate->CustomFormat = L"dd-MMM-yyyy";
			this->StudentJoinDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->StudentJoinDate->Location = System::Drawing::Point(583, 341);
			this->StudentJoinDate->Name = L"StudentJoinDate";
			this->StudentJoinDate->Size = System::Drawing::Size(83, 20);
			this->StudentJoinDate->TabIndex = 79;
			this->StudentJoinDate->ValueChanged += gcnew System::EventHandler(this, &StudentManagement::StudentJoinDate_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(572, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(129, 36);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Join Date";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(523, 731);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 51);
			this->pictureBox3->TabIndex = 81;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox3_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button3->FlatAppearance->BorderSize = 4;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(511, 725);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(178, 60);
			this->button3->TabIndex = 82;
			this->button3->Text = L" Refresh";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StudentManagement::button3_Click);
			// 
			// StudentDataView
			// 
			this->StudentDataView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->StudentDataView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->StudentDataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->StudentDataView->DefaultCellStyle = dataGridViewCellStyle2;
			this->StudentDataView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->StudentDataView->Location = System::Drawing::Point(12, 445);
			this->StudentDataView->Name = L"StudentDataView";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->StudentDataView->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->StudentDataView->RowHeadersWidth = 46;
			this->StudentDataView->Size = System::Drawing::Size(680, 274);
			this->StudentDataView->TabIndex = 83;
			this->StudentDataView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentManagement::StudentDataView_CellClick);
			this->StudentDataView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentManagement::StudentDataView_CellContentClick);
			// 
			// StudentClass
			// 
			this->StudentClass->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentClass->FormattingEnabled = true;
			this->StudentClass->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"M1", L"M2", L"M3", L"M4", L"A1", L"A2", L"A3",
					L"A4", L"E1", L"E2", L"E3", L"E4"
			});
			this->StudentClass->Location = System::Drawing::Point(435, 267);
			this->StudentClass->Name = L"StudentClass";
			this->StudentClass->Size = System::Drawing::Size(118, 21);
			this->StudentClass->TabIndex = 84;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(434, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 36);
			this->label10->TabIndex = 85;
			this->label10->Text = L"Class";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(579, 228);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 36);
			this->label11->TabIndex = 87;
			this->label11->Text = L"Payment";
			this->label11->Click += gcnew System::EventHandler(this, &StudentManagement::label11_Click);
			// 
			// StudentPayment
			// 
			this->StudentPayment->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentPayment->FormattingEnabled = true;
			this->StudentPayment->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Paid", L"Not Paid" });
			this->StudentPayment->Location = System::Drawing::Point(585, 267);
			this->StudentPayment->Name = L"StudentPayment";
			this->StudentPayment->Size = System::Drawing::Size(107, 21);
			this->StudentPayment->TabIndex = 86;
			this->StudentPayment->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentManagement::StudentPayment_SelectedIndexChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(294, 731);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(39, 51);
			this->pictureBox6->TabIndex = 88;
			this->pictureBox6->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button5->FlatAppearance->BorderSize = 4;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(282, 725);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(223, 60);
			this->button5->TabIndex = 89;
			this->button5->Text = L"Get Reciept";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &StudentManagement::button5_Click);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(429, 291);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 36);
			this->label12->TabIndex = 91;
			this->label12->Text = L"Password";
			// 
			// StudentPassWord
			// 
			this->StudentPassWord->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentPassWord->Location = System::Drawing::Point(436, 332);
			this->StudentPassWord->Name = L"StudentPassWord";
			this->StudentPassWord->Size = System::Drawing::Size(130, 33);
			this->StudentPassWord->TabIndex = 90;
			// 
			// StudentManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(701, 661);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->StudentPassWord);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->StudentPayment);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->StudentClass);
			this->Controls->Add(this->StudentDataView);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->StudentJoinDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->textemail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textdep);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtdob);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StudentGender);
			this->Controls->Add(this->StudentPhoneNumber);
			this->Controls->Add(this->StudentFee);
			this->Controls->Add(this->StudentYear);
			this->Controls->Add(this->StudentDepartment);
			this->Controls->Add(this->Studentmail);
			this->Controls->Add(this->StudentDOB);
			this->Controls->Add(this->StudentID);
			this->Controls->Add(this->StudentLastName);
			this->Controls->Add(this->StudentFirstName);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(475, 2);
			this->Name = L"StudentManagement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"StudentManagement";
			this->Load += gcnew System::EventHandler(this, &StudentManagement::StudentManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingstudentdata))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentDataView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		  //Delete Event
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(StudentID->Text);
	if (MessageBox::Show("Are you sure you want to remove this student ID="+id+"?", "Remove Student", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		try {
			
			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			SqlCommand^ cmd = gcnew SqlCommand("delete from studentdb WHERE Id=" + id + "", sqlConn);
			sqlConn->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();

			sqlConn->Close();
			SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from studentdb", sqlConn);
			DataTable^ StudentDataTable = gcnew DataTable();
			SearchStudentData->Fill(StudentDataTable);
			bindingstudentdata->DataSource = StudentDataTable;
			StudentDataView->DataSource = bindingstudentdata;
			MessageBox::Show("Student Deleted Successfully");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void StudentGender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void StudentFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}    
	   //Search Event
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Int32::Parse(StudentID->Text);
			
			
			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);
			
			
			SqlCommand^ cmd = gcnew SqlCommand("select * from studentdb WHERE Id=" + id + "", sqlConn);//OR FirstName='"+StudentFirstName+"'
			
			
			sqlConn->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				//StudentID-> Text = dr->GetString(0);
				StudentFirstName->Text = dr->GetString(1);
				StudentLastName->Text = dr->GetString(2);
				StudentGender->Text = dr->GetString(3);
				StudentPhoneNumber->Text = dr->GetString(4);
				StudentDOB->Text = dr->GetString(5);
				Studentmail->Text = dr->GetString(6);
				StudentDepartment->Text = dr->GetString(7);
				StudentYear->Text = dr->GetString(8);
				StudentClass->Text = dr->GetString(9);
				StudentFee->Text = dr->GetString(10);
				StudentJoinDate->Text = dr->GetString(11);
				StudentPayment->Text = dr->GetString(12);
				StudentPassWord->Text = dr->GetString(13);
			}
			sqlConn->Close();
			SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from studentdb", sqlConn);
			DataTable^ StudentDataTable = gcnew DataTable();
			SearchStudentData->Fill(StudentDataTable);
			bindingstudentdata->DataSource = StudentDataTable;
			StudentDataView->DataSource = bindingstudentdata;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(constr);
	SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from studentdb", sqlConn);
	DataTable^ StudentDataTable = gcnew DataTable();
	SearchStudentData->Fill(StudentDataTable);
	bindingstudentdata->DataSource = StudentDataTable; 
	StudentDataView->DataSource = bindingstudentdata;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentManagement_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   //Update Event
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(StudentID->Text);
		if (MessageBox::Show("Are you sure you want to update this student ID=" + id + "?", "Update Student", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		try {
			String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(constr);

			String^ StudentFN = this->StudentFirstName->Text;
			String^ StudentLN = this->StudentLastName->Text;
			String^ StudentDEP = this->StudentDepartment->Text;
			String^ StudentBIRTH = this->StudentDOB->Text;
			String^ StudentEMAIL = this->Studentmail->Text;
			String^ StudentPN = this->StudentPhoneNumber->Text;
			String^ StudentJOIN = this->StudentJoinDate->Text;
			String^ StudentGEND = this->StudentGender->Text;
			String^ StudentYEARC = this->StudentYear->Text;
			String^ StudentClass = this->StudentClass->Text;
			String^ StudentFEEC = this->StudentFee->Text;
			String^ StudentPaymst = this->StudentPayment->Text;
			String^ StudentPW = this->StudentPassWord->Text;


			SqlCommand^ cmd = gcnew SqlCommand("update studentdb set FirstName='" + StudentFN + "',LastName='" + StudentLN + "',Gender='" 
				+ StudentGEND + "',PhoneNumber='" + StudentPN + "',DoB='" + StudentBIRTH + "',Email='" 
				+ StudentEMAIL + "',Department='" + StudentDEP + "',Level='" + StudentYEARC + "',Class='" 
				+ StudentClass + "',Fee='" + StudentFEEC + "',JoinDate='" + StudentJOIN + "',PaymentStatus='" 
				+ StudentPaymst + "',Password='"+ StudentPW +"' WHERE Id = " + id + "", sqlConn);
			sqlConn->Open();
			SqlDataReader^ dr = cmd->ExecuteReader();
			//MessageBox::Show("Are you want to remove this student?","Remove Data from Database",MessageBoxButtons::YesNoCancel,MessageBoxIcon::Information);
			sqlConn->Close();
			SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from studentdb", sqlConn);
			DataTable^ StudentDataTable = gcnew DataTable();
			SearchStudentData->Fill(StudentDataTable);
			bindingstudentdata->DataSource = StudentDataTable;
			StudentDataView->DataSource = bindingstudentdata;
			MessageBox::Show("Student Updated Successfully");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentDataView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {







}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentPayment_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentReciept^ Stdrp = gcnew StudentReciept(StudentFirstName->Text, StudentLastName->Text, StudentID->Text, StudentDepartment->Text
		, StudentDOB->Text, Studentmail->Text, StudentPhoneNumber->Text, StudentJoinDate->Text
		, StudentFee->Text, StudentGender->Text, StudentYear->Text
		, StudentClass->Text, StudentPayment->Text,StudentPassWord->Text);
	Stdrp->ShowDialog();
}
private: System::Void StudentDataView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		StudentID->Text = StudentDataView->SelectedRows[0]->Cells[0]->Value->ToString();
		StudentFirstName->Text = StudentDataView->SelectedRows[0]->Cells[1]->Value->ToString();
		StudentLastName->Text = StudentDataView->SelectedRows[0]->Cells[2]->Value->ToString();
		StudentGender->Text = StudentDataView->SelectedRows[0]->Cells[3]->Value->ToString();
		StudentPhoneNumber->Text = StudentDataView->SelectedRows[0]->Cells[4]->Value->ToString();
		Studentmail->Text = StudentDataView->SelectedRows[0]->Cells[6]->Value->ToString();
		StudentDepartment->Text = StudentDataView->SelectedRows[0]->Cells[7]->Value->ToString();
		StudentYear->Text = StudentDataView->SelectedRows[0]->Cells[8]->Value->ToString();
		StudentClass->Text = StudentDataView->SelectedRows[0]->Cells[9]->Value->ToString();
		StudentFee->Text = StudentDataView->SelectedRows[0]->Cells[10]->Value->ToString();
		StudentPayment->Text = StudentDataView->SelectedRows[0]->Cells[12]->Value->ToString();
		StudentPassWord->Text = StudentDataView->SelectedRows[0]->Cells[13]->Value->ToString();
		DateTime studentDOB = DateTime::Parse(StudentDataView->SelectedRows[0]->Cells[5]->Value->ToString());;       //Datetime didnt work
		DateTime studentJoinDate = DateTime::Parse(StudentDataView->SelectedRows[0]->Cells[11]->Value->ToString()); //Datetime didnt work
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void StudentJoinDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
