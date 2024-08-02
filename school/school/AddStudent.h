#pragma once
#include "ADDStudentcon.h"
namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ StudentFirstName;
	private: System::Windows::Forms::DateTimePicker^ StudentDOB;


	private: System::Windows::Forms::TextBox^ StudentID;
	private: System::Windows::Forms::TextBox^ Studentmail;



	private: System::Windows::Forms::TextBox^ StudentLastName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ textdep;
	private: System::Windows::Forms::Label^ txtdob;



	private: System::Windows::Forms::Label^ textemail;



	private: System::Windows::Forms::TextBox^ StudentPhoneNumber;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ StudentDepartment;
	private: System::Windows::Forms::DateTimePicker^ StudentJoin;


	private: System::Windows::Forms::Label^ textjoin;



	private: System::Windows::Forms::ComboBox^ StudentGender;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ StudentYear;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ StudentFee;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ StudentClass;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ StudentPayment;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ StudentPassword;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudent::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->StudentFirstName = (gcnew System::Windows::Forms::TextBox());
			this->StudentDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->StudentID = (gcnew System::Windows::Forms::TextBox());
			this->Studentmail = (gcnew System::Windows::Forms::TextBox());
			this->StudentLastName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textdep = (gcnew System::Windows::Forms::Label());
			this->txtdob = (gcnew System::Windows::Forms::Label());
			this->textemail = (gcnew System::Windows::Forms::Label());
			this->StudentPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->StudentDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->StudentJoin = (gcnew System::Windows::Forms::DateTimePicker());
			this->textjoin = (gcnew System::Windows::Forms::Label());
			this->StudentGender = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StudentYear = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->StudentFee = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->StudentClass = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->StudentPayment = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->StudentPassword = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(516, 569);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddStudent::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(467, 59);
			this->label5->TabIndex = 16;
			this->label5->Text = L"ADD A NEW STUDENT";
			// 
			// StudentFirstName
			// 
			this->StudentFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentFirstName->Location = System::Drawing::Point(41, 145);
			this->StudentFirstName->Name = L"StudentFirstName";
			this->StudentFirstName->Size = System::Drawing::Size(231, 33);
			this->StudentFirstName->TabIndex = 17;
			this->StudentFirstName->TextChanged += gcnew System::EventHandler(this, &AddStudent::StudentFirstName_TextChanged);
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
			this->StudentDOB->Location = System::Drawing::Point(368, 322);
			this->StudentDOB->Name = L"StudentDOB";
			this->StudentDOB->Size = System::Drawing::Size(231, 20);
			this->StudentDOB->TabIndex = 18;
			this->StudentDOB->ValueChanged += gcnew System::EventHandler(this, &AddStudent::StudentDOB_ValueChanged);
			// 
			// StudentID
			// 
			this->StudentID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentID->Location = System::Drawing::Point(208, 236);
			this->StudentID->Name = L"StudentID";
			this->StudentID->Size = System::Drawing::Size(125, 33);
			this->StudentID->TabIndex = 20;
			// 
			// Studentmail
			// 
			this->Studentmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Studentmail->Location = System::Drawing::Point(41, 520);
			this->Studentmail->Name = L"Studentmail";
			this->Studentmail->Size = System::Drawing::Size(231, 33);
			this->Studentmail->TabIndex = 21;
			// 
			// StudentLastName
			// 
			this->StudentLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentLastName->Location = System::Drawing::Point(369, 145);
			this->StudentLastName->Name = L"StudentLastName";
			this->StudentLastName->Size = System::Drawing::Size(231, 33);
			this->StudentLastName->TabIndex = 22;
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
			this->label1->Location = System::Drawing::Point(35, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 36);
			this->label1->TabIndex = 23;
			this->label1->Text = L"First Name";
			this->label1->Click += gcnew System::EventHandler(this, &AddStudent::label1_Click);
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
			this->label2->Location = System::Drawing::Point(363, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 36);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Last Name";
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
			this->label3->Location = System::Drawing::Point(202, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 36);
			this->label3->TabIndex = 25;
			this->label3->Text = L"ID";
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
			this->textdep->Location = System::Drawing::Point(35, 385);
			this->textdep->Name = L"textdep";
			this->textdep->Size = System::Drawing::Size(162, 36);
			this->textdep->TabIndex = 26;
			this->textdep->Text = L"Department";
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
			this->txtdob->Location = System::Drawing::Point(362, 283);
			this->txtdob->Name = L"txtdob";
			this->txtdob->Size = System::Drawing::Size(167, 36);
			this->txtdob->TabIndex = 27;
			this->txtdob->Text = L"Date of Birth";
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
			this->textemail->Location = System::Drawing::Point(35, 481);
			this->textemail->Name = L"textemail";
			this->textemail->Size = System::Drawing::Size(184, 36);
			this->textemail->TabIndex = 28;
			this->textemail->Text = L"Email Address";
			// 
			// StudentPhoneNumber
			// 
			this->StudentPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentPhoneNumber->Location = System::Drawing::Point(41, 322);
			this->StudentPhoneNumber->Name = L"StudentPhoneNumber";
			this->StudentPhoneNumber->Size = System::Drawing::Size(231, 33);
			this->StudentPhoneNumber->TabIndex = 29;
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
			this->label8->Location = System::Drawing::Point(35, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 36);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Phone Number";
			// 
			// StudentDepartment
			// 
			this->StudentDepartment->FormattingEnabled = true;
			this->StudentDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Information Technology Engineering",
					L"Telecommunication & Electronics Engineering ", L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering",
					L"Environmental Engineering", L"Food Technology Engineering"
			});
			this->StudentDepartment->Location = System::Drawing::Point(41, 424);
			this->StudentDepartment->Name = L"StudentDepartment";
			this->StudentDepartment->Size = System::Drawing::Size(231, 21);
			this->StudentDepartment->TabIndex = 32;
			// 
			// StudentJoin
			// 
			this->StudentJoin->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentJoin->CalendarForeColor = System::Drawing::Color::White;
			this->StudentJoin->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->StudentJoin->CalendarTitleBackColor = System::Drawing::Color::Red;
			this->StudentJoin->CalendarTitleForeColor = System::Drawing::Color::Transparent;
			this->StudentJoin->CustomFormat = L"dd-MMM-yyyy";
			this->StudentJoin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->StudentJoin->Location = System::Drawing::Point(477, 526);
			this->StudentJoin->Name = L"StudentJoin";
			this->StudentJoin->Size = System::Drawing::Size(177, 20);
			this->StudentJoin->TabIndex = 33;
			// 
			// textjoin
			// 
			this->textjoin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textjoin->AutoSize = true;
			this->textjoin->BackColor = System::Drawing::Color::Transparent;
			this->textjoin->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textjoin->ForeColor = System::Drawing::Color::White;
			this->textjoin->Location = System::Drawing::Point(471, 487);
			this->textjoin->Name = L"textjoin";
			this->textjoin->Size = System::Drawing::Size(133, 36);
			this->textjoin->TabIndex = 34;
			this->textjoin->Text = L"Joined on";
			// 
			// StudentGender
			// 
			this->StudentGender->FormattingEnabled = true;
			this->StudentGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->StudentGender->Location = System::Drawing::Point(41, 236);
			this->StudentGender->Name = L"StudentGender";
			this->StudentGender->Size = System::Drawing::Size(111, 21);
			this->StudentGender->TabIndex = 37;
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
			this->label4->Location = System::Drawing::Point(35, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 36);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Gender";
			// 
			// StudentYear
			// 
			this->StudentYear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentYear->FormattingEnabled = true;
			this->StudentYear->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Year 1", L"Year 2", L"Year 3", L"Year 4", L"Master",
					L"Doctor"
			});
			this->StudentYear->Location = System::Drawing::Point(301, 424);
			this->StudentYear->Name = L"StudentYear";
			this->StudentYear->Size = System::Drawing::Size(118, 21);
			this->StudentYear->TabIndex = 39;
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
			this->label6->Location = System::Drawing::Point(295, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 36);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Level";
			// 
			// StudentFee
			// 
			this->StudentFee->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentFee->Location = System::Drawing::Point(315, 520);
			this->StudentFee->Name = L"StudentFee";
			this->StudentFee->Size = System::Drawing::Size(130, 33);
			this->StudentFee->TabIndex = 40;
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
			this->label7->Location = System::Drawing::Point(310, 481);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 36);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Fee $";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(547, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(142, 80);
			this->pictureBox4->TabIndex = 76;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &AddStudent::pictureBox4_Click);
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
			this->label10->Location = System::Drawing::Point(442, 385);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 36);
			this->label10->TabIndex = 87;
			this->label10->Text = L"Class";
			// 
			// StudentClass
			// 
			this->StudentClass->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentClass->FormattingEnabled = true;
			this->StudentClass->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"M1", L"M2", L"M3", L"M4", L"A1", L"A2", L"A3",
					L"A4", L"E1", L"E2", L"E3", L"E4"
			});
			this->StudentClass->Location = System::Drawing::Point(445, 424);
			this->StudentClass->Name = L"StudentClass";
			this->StudentClass->Size = System::Drawing::Size(118, 21);
			this->StudentClass->TabIndex = 86;
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
			this->label11->Location = System::Drawing::Point(555, 385);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 36);
			this->label11->TabIndex = 89;
			this->label11->Text = L"Payment";
			// 
			// StudentPayment
			// 
			this->StudentPayment->ForeColor = System::Drawing::SystemColors::WindowText;
			this->StudentPayment->FormattingEnabled = true;
			this->StudentPayment->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NOT PAID", L"PAID" });
			this->StudentPayment->Location = System::Drawing::Point(571, 424);
			this->StudentPayment->Name = L"StudentPayment";
			this->StudentPayment->Size = System::Drawing::Size(97, 21);
			this->StudentPayment->TabIndex = 88;
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
			this->label9->Location = System::Drawing::Point(362, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 36);
			this->label9->TabIndex = 90;
			this->label9->Text = L"Passowrd";
			// 
			// StudentPassword
			// 
			this->StudentPassword->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentPassword->Location = System::Drawing::Point(368, 236);
			this->StudentPassword->Name = L"StudentPassword";
			this->StudentPassword->Size = System::Drawing::Size(179, 33);
			this->StudentPassword->TabIndex = 91;
			this->StudentPassword->Text = L"Student";
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(689, 639);
			this->Controls->Add(this->StudentPassword);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->StudentPayment);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->StudentClass);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->StudentFee);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->StudentYear);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->StudentGender);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textjoin);
			this->Controls->Add(this->StudentJoin);
			this->Controls->Add(this->StudentDepartment);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->StudentPhoneNumber);
			this->Controls->Add(this->textemail);
			this->Controls->Add(this->txtdob);
			this->Controls->Add(this->textdep);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StudentLastName);
			this->Controls->Add(this->Studentmail);
			this->Controls->Add(this->StudentDOB);
			this->Controls->Add(this->StudentID);
			this->Controls->Add(this->StudentFirstName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(475, 2);
			this->Name = L"AddStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"AddStudent";
			this->Load += gcnew System::EventHandler(this, &AddStudent::AddStudent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddStudent_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ADDStudentcon^ AddStdcon = gcnew ADDStudentcon(StudentFirstName ->Text , StudentLastName->Text, StudentID->Text, StudentDepartment->Text
		, StudentDOB->Text, Studentmail->Text,StudentPhoneNumber->Text,StudentJoin->Text, StudentFee->Text, StudentGender->Text, StudentYear->Text,StudentClass->Text,StudentPayment->Text, StudentPassword->Text);
	AddStdcon->ShowDialog();
}
private: System::Void StudentFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void StudentDOB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
