#pragma once
#include"AddTechcon.h"
namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddTeacher
	/// </summary>
	public ref class AddTeacher : public System::Windows::Forms::Form
	{
	public:
		AddTeacher(void)
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
		~AddTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label10;
    protected:

    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::TextBox^ TeacherSalary;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::ComboBox^ TeacherHour;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::ComboBox^ TeacherGender;



    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ textjoin;
    private: System::Windows::Forms::DateTimePicker^ TeacherJoin;
    private: System::Windows::Forms::ComboBox^ TeacherDepartment;




    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ TeacherPhoneNumber;



    private: System::Windows::Forms::Label^ textemail;
    private: System::Windows::Forms::Label^ txtdob;
    private: System::Windows::Forms::Label^ textdep;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ TeacherLastName;


    private: System::Windows::Forms::TextBox^ Teachermail;
    private: System::Windows::Forms::DateTimePicker^ TeacherDOB;
    private: System::Windows::Forms::TextBox^ TeacherID;
    private: System::Windows::Forms::TextBox^ TeacherFirstName;













    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::ComboBox^ TeacherSubject;



    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::ComboBox^ TeacherDay;


    private: System::Windows::Forms::ComboBox^ TeacherClass;








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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddTeacher::typeid));
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->TeacherSalary = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->TeacherHour = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->TeacherGender = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textjoin = (gcnew System::Windows::Forms::Label());
            this->TeacherJoin = (gcnew System::Windows::Forms::DateTimePicker());
            this->TeacherDepartment = (gcnew System::Windows::Forms::ComboBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->TeacherPhoneNumber = (gcnew System::Windows::Forms::TextBox());
            this->textemail = (gcnew System::Windows::Forms::Label());
            this->txtdob = (gcnew System::Windows::Forms::Label());
            this->textdep = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->TeacherLastName = (gcnew System::Windows::Forms::TextBox());
            this->Teachermail = (gcnew System::Windows::Forms::TextBox());
            this->TeacherDOB = (gcnew System::Windows::Forms::DateTimePicker());
            this->TeacherID = (gcnew System::Windows::Forms::TextBox());
            this->TeacherFirstName = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->TeacherSubject = (gcnew System::Windows::Forms::ComboBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->TeacherDay = (gcnew System::Windows::Forms::ComboBox());
            this->TeacherClass = (gcnew System::Windows::Forms::ComboBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
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
            this->label10->Location = System::Drawing::Point(571, 382);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(75, 36);
            this->label10->TabIndex = 114;
            this->label10->Text = L"Class";
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(531, 9);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(142, 80);
            this->pictureBox4->TabIndex = 112;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &AddTeacher::pictureBox4_Click);
            // 
            // TeacherSalary
            // 
            this->TeacherSalary->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherSalary->Location = System::Drawing::Point(296, 517);
            this->TeacherSalary->Name = L"TeacherSalary";
            this->TeacherSalary->Size = System::Drawing::Size(130, 33);
            this->TeacherSalary->TabIndex = 110;
            this->TeacherSalary->TextChanged += gcnew System::EventHandler(this, &AddTeacher::StudentFee_TextChanged);
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
            this->label7->Location = System::Drawing::Point(291, 478);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(172, 36);
            this->label7->TabIndex = 111;
            this->label7->Text = L"Salary $(p/m)";
            this->label7->Click += gcnew System::EventHandler(this, &AddTeacher::label7_Click);
            // 
            // TeacherHour
            // 
            this->TeacherHour->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherHour->FormattingEnabled = true;
            this->TeacherHour->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
                L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12",
                    L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
            });
            this->TeacherHour->Location = System::Drawing::Point(415, 421);
            this->TeacherHour->Name = L"TeacherHour";
            this->TeacherHour->Size = System::Drawing::Size(133, 21);
            this->TeacherHour->TabIndex = 109;
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
            this->label6->Location = System::Drawing::Point(409, 382);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(152, 36);
            this->label6->TabIndex = 108;
            this->label6->Text = L"Hours / Day";
            // 
            // TeacherGender
            // 
            this->TeacherGender->FormattingEnabled = true;
            this->TeacherGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->TeacherGender->Location = System::Drawing::Point(33, 233);
            this->TeacherGender->Name = L"TeacherGender";
            this->TeacherGender->Size = System::Drawing::Size(138, 21);
            this->TeacherGender->TabIndex = 107;
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
            this->label4->Location = System::Drawing::Point(27, 194);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(103, 36);
            this->label4->TabIndex = 106;
            this->label4->Text = L"Gender";
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
            this->textjoin->Location = System::Drawing::Point(463, 478);
            this->textjoin->Name = L"textjoin";
            this->textjoin->Size = System::Drawing::Size(133, 36);
            this->textjoin->TabIndex = 105;
            this->textjoin->Text = L"Joined on";
            // 
            // TeacherJoin
            // 
            this->TeacherJoin->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherJoin->CalendarForeColor = System::Drawing::Color::White;
            this->TeacherJoin->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->TeacherJoin->CalendarTitleBackColor = System::Drawing::Color::Red;
            this->TeacherJoin->CalendarTitleForeColor = System::Drawing::Color::Transparent;
            this->TeacherJoin->Location = System::Drawing::Point(469, 517);
            this->TeacherJoin->Name = L"TeacherJoin";
            this->TeacherJoin->Size = System::Drawing::Size(177, 20);
            this->TeacherJoin->TabIndex = 104;
            // 
            // TeacherDepartment
            // 
            this->TeacherDepartment->FormattingEnabled = true;
            this->TeacherDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Information Technology Engineering",
                    L"Telecommunication & Electronics Engineering ", L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering",
                    L"Environmental Engineering", L"Food Technology Engineering"
            });
            this->TeacherDepartment->Location = System::Drawing::Point(297, 319);
            this->TeacherDepartment->Name = L"TeacherDepartment";
            this->TeacherDepartment->Size = System::Drawing::Size(231, 21);
            this->TeacherDepartment->TabIndex = 103;
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
            this->label8->Location = System::Drawing::Point(27, 280);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(196, 36);
            this->label8->TabIndex = 102;
            this->label8->Text = L"Phone Number";
            // 
            // TeacherPhoneNumber
            // 
            this->TeacherPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherPhoneNumber->Location = System::Drawing::Point(33, 319);
            this->TeacherPhoneNumber->Name = L"TeacherPhoneNumber";
            this->TeacherPhoneNumber->Size = System::Drawing::Size(231, 33);
            this->TeacherPhoneNumber->TabIndex = 101;
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
            this->textemail->Location = System::Drawing::Point(27, 478);
            this->textemail->Name = L"textemail";
            this->textemail->Size = System::Drawing::Size(184, 36);
            this->textemail->TabIndex = 100;
            this->textemail->Text = L"Email Address";
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
            this->txtdob->Location = System::Drawing::Point(409, 191);
            this->txtdob->Name = L"txtdob";
            this->txtdob->Size = System::Drawing::Size(167, 36);
            this->txtdob->TabIndex = 99;
            this->txtdob->Text = L"Date of Birth";
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
            this->textdep->Location = System::Drawing::Point(291, 280);
            this->textdep->Name = L"textdep";
            this->textdep->Size = System::Drawing::Size(162, 36);
            this->textdep->TabIndex = 98;
            this->textdep->Text = L"Department";
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
            this->label3->Location = System::Drawing::Point(200, 194);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(42, 36);
            this->label3->TabIndex = 97;
            this->label3->Text = L"ID";
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
            this->label2->Location = System::Drawing::Point(355, 103);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(143, 36);
            this->label2->TabIndex = 96;
            this->label2->Text = L"Last Name";
            // 
            // TeacherLastName
            // 
            this->TeacherLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherLastName->Location = System::Drawing::Point(361, 142);
            this->TeacherLastName->Name = L"TeacherLastName";
            this->TeacherLastName->Size = System::Drawing::Size(231, 33);
            this->TeacherLastName->TabIndex = 94;
            // 
            // Teachermail
            // 
            this->Teachermail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Teachermail->Location = System::Drawing::Point(33, 517);
            this->Teachermail->Name = L"Teachermail";
            this->Teachermail->Size = System::Drawing::Size(231, 33);
            this->Teachermail->TabIndex = 93;
            // 
            // TeacherDOB
            // 
            this->TeacherDOB->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherDOB->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->TeacherDOB->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->TeacherDOB->CalendarTitleBackColor = System::Drawing::Color::Red;
            this->TeacherDOB->CalendarTitleForeColor = System::Drawing::Color::Transparent;
            this->TeacherDOB->CustomFormat = L"dd-MMM-yyyy";
            this->TeacherDOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->TeacherDOB->Location = System::Drawing::Point(415, 230);
            this->TeacherDOB->Name = L"TeacherDOB";
            this->TeacherDOB->Size = System::Drawing::Size(231, 20);
            this->TeacherDOB->TabIndex = 91;
            // 
            // TeacherID
            // 
            this->TeacherID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherID->Location = System::Drawing::Point(206, 230);
            this->TeacherID->Name = L"TeacherID";
            this->TeacherID->Size = System::Drawing::Size(174, 33);
            this->TeacherID->TabIndex = 92;
            // 
            // TeacherFirstName
            // 
            this->TeacherFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherFirstName->Location = System::Drawing::Point(33, 142);
            this->TeacherFirstName->Name = L"TeacherFirstName";
            this->TeacherFirstName->Size = System::Drawing::Size(231, 33);
            this->TeacherFirstName->TabIndex = 90;
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
            this->label1->Location = System::Drawing::Point(27, 103);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(144, 36);
            this->label1->TabIndex = 95;
            this->label1->Text = L"First Name";
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
            this->label5->Location = System::Drawing::Point(12, 9);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(463, 59);
            this->label5->TabIndex = 89;
            this->label5->Text = L"ADD A NEW TEACHER";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(508, 566);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(159, 58);
            this->button1->TabIndex = 88;
            this->button1->Text = L"ADD";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AddTeacher::button1_Click);
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
            this->label9->Location = System::Drawing::Point(27, 382);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(103, 36);
            this->label9->TabIndex = 116;
            this->label9->Text = L"Subject";
            // 
            // TeacherSubject
            // 
            this->TeacherSubject->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherSubject->FormattingEnabled = true;
            this->TeacherSubject->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
                L"Mathematics", L"Programming", L"Computer Fundamental",
                    L"Physics", L"History", L"Critcal Thinking", L"Academic Skill", L"General English", L"Statistics", L"Techincal Drawning", L"Philosophy & Socialogy"
            });
            this->TeacherSubject->Location = System::Drawing::Point(33, 423);
            this->TeacherSubject->Name = L"TeacherSubject";
            this->TeacherSubject->Size = System::Drawing::Size(181, 21);
            this->TeacherSubject->TabIndex = 115;
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
            this->label11->Location = System::Drawing::Point(239, 382);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(149, 36);
            this->label11->TabIndex = 118;
            this->label11->Text = L"Day / Week";
            // 
            // TeacherDay
            // 
            this->TeacherDay->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherDay->FormattingEnabled = true;
            this->TeacherDay->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
            this->TeacherDay->Location = System::Drawing::Point(245, 423);
            this->TeacherDay->Name = L"TeacherDay";
            this->TeacherDay->Size = System::Drawing::Size(135, 21);
            this->TeacherDay->TabIndex = 115;
            // 
            // TeacherClass
            // 
            this->TeacherClass->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherClass->FormattingEnabled = true;
            this->TeacherClass->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
            this->TeacherClass->Location = System::Drawing::Point(577, 421);
            this->TeacherClass->Name = L"TeacherClass";
            this->TeacherClass->Size = System::Drawing::Size(71, 21);
            this->TeacherClass->TabIndex = 115;
            // 
            // AddTeacher
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(685, 633);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->TeacherClass);
            this->Controls->Add(this->TeacherDay);
            this->Controls->Add(this->TeacherSubject);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->TeacherSalary);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->TeacherHour);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->TeacherGender);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textjoin);
            this->Controls->Add(this->TeacherJoin);
            this->Controls->Add(this->TeacherDepartment);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->TeacherPhoneNumber);
            this->Controls->Add(this->textemail);
            this->Controls->Add(this->txtdob);
            this->Controls->Add(this->textdep);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->TeacherLastName);
            this->Controls->Add(this->Teachermail);
            this->Controls->Add(this->TeacherDOB);
            this->Controls->Add(this->TeacherID);
            this->Controls->Add(this->TeacherFirstName);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(475, 1);
            this->Name = L"AddTeacher";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"AddTeacher";
            this->Load += gcnew System::EventHandler(this, &AddTeacher::AddTeacher_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void AddTeacher_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void StudentFee_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    AddTechcon^ Addthcon = gcnew AddTechcon(TeacherFirstName->Text, TeacherLastName->Text, TeacherID->Text, TeacherDepartment->Text
        , TeacherDOB->Text, Teachermail->Text, TeacherPhoneNumber->Text, TeacherJoin->Text, TeacherSalary->Text, TeacherGender->Text, TeacherSubject->Text, TeacherClass->Text, TeacherDay->Text, TeacherHour->Text);
    Addthcon->ShowDialog();
}
};
}
