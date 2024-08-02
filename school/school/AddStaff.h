#pragma once
#include"AddStaffcon.h"
namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddStaff
	/// </summary>
	public ref class AddStaff : public System::Windows::Forms::Form
	{
	public:
		AddStaff(void)
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
		~AddStaff()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::ComboBox^ StaffDay;
    private: System::Windows::Forms::ComboBox^ StaffPosition;

    protected:






    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::TextBox^ StaffSalary;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::ComboBox^ StaffHour;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::ComboBox^ StaffGender;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ textjoin;
    private: System::Windows::Forms::DateTimePicker^ StaffJoin;

    private: System::Windows::Forms::ComboBox^ StaffDepartment;

    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ StaffPhoneNumber;

    private: System::Windows::Forms::Label^ textemail;
    private: System::Windows::Forms::Label^ txtdob;
    private: System::Windows::Forms::Label^ textdep;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ StaffLastName;
    private: System::Windows::Forms::TextBox^ Staffmail;


    private: System::Windows::Forms::DateTimePicker^ StaffDOB;

    private: System::Windows::Forms::TextBox^ StaffID;

    private: System::Windows::Forms::TextBox^ StaffFirstName;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button1;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStaff::typeid));
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->StaffDay = (gcnew System::Windows::Forms::ComboBox());
            this->StaffPosition = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->StaffSalary = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->StaffHour = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->StaffGender = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textjoin = (gcnew System::Windows::Forms::Label());
            this->StaffJoin = (gcnew System::Windows::Forms::DateTimePicker());
            this->StaffDepartment = (gcnew System::Windows::Forms::ComboBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->StaffPhoneNumber = (gcnew System::Windows::Forms::TextBox());
            this->textemail = (gcnew System::Windows::Forms::Label());
            this->txtdob = (gcnew System::Windows::Forms::Label());
            this->textdep = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->StaffLastName = (gcnew System::Windows::Forms::TextBox());
            this->Staffmail = (gcnew System::Windows::Forms::TextBox());
            this->StaffDOB = (gcnew System::Windows::Forms::DateTimePicker());
            this->StaffID = (gcnew System::Windows::Forms::TextBox());
            this->StaffFirstName = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
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
            this->label11->Size = System::Drawing::Size(61, 36);
            this->label11->TabIndex = 149;
            this->label11->Text = L"Day";
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
            this->label9->Size = System::Drawing::Size(112, 36);
            this->label9->TabIndex = 148;
            this->label9->Text = L"Position";
            // 
            // StaffDay
            // 
            this->StaffDay->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffDay->FormattingEnabled = true;
            this->StaffDay->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"WeekDay", L"Weekend", L"All" });
            this->StaffDay->Location = System::Drawing::Point(245, 423);
            this->StaffDay->Name = L"StaffDay";
            this->StaffDay->Size = System::Drawing::Size(135, 21);
            this->StaffDay->TabIndex = 146;
            // 
            // StaffPosition
            // 
            this->StaffPosition->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffPosition->FormattingEnabled = true;
            this->StaffPosition->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
                L"IT Security", L"Student affairs ", L"Admissions",
                    L"Enrollment", L"Human resources", L"Financial services", L"Athletics", L"Student housing", L"Administration", L"Accounting",
                    L"Food service", L"Counseling", L"Academic affairs", L"Advising", L"Campus President", L"Accountant"
            });
            this->StaffPosition->Location = System::Drawing::Point(33, 423);
            this->StaffPosition->Name = L"StaffPosition";
            this->StaffPosition->Size = System::Drawing::Size(181, 21);
            this->StaffPosition->TabIndex = 145;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(531, 9);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(142, 80);
            this->pictureBox4->TabIndex = 143;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &AddStaff::pictureBox4_Click);
            // 
            // StaffSalary
            // 
            this->StaffSalary->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffSalary->Location = System::Drawing::Point(296, 517);
            this->StaffSalary->Name = L"StaffSalary";
            this->StaffSalary->Size = System::Drawing::Size(130, 33);
            this->StaffSalary->TabIndex = 141;
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
            this->label7->TabIndex = 142;
            this->label7->Text = L"Salary $(p/m)";
            // 
            // StaffHour
            // 
            this->StaffHour->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffHour->FormattingEnabled = true;
            this->StaffHour->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Part Time", L"Full Time" });
            this->StaffHour->Location = System::Drawing::Point(415, 421);
            this->StaffHour->Name = L"StaffHour";
            this->StaffHour->Size = System::Drawing::Size(133, 21);
            this->StaffHour->TabIndex = 140;
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
            this->label6->Size = System::Drawing::Size(86, 36);
            this->label6->TabIndex = 139;
            this->label6->Text = L"Hours";
            // 
            // StaffGender
            // 
            this->StaffGender->FormattingEnabled = true;
            this->StaffGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->StaffGender->Location = System::Drawing::Point(33, 233);
            this->StaffGender->Name = L"StaffGender";
            this->StaffGender->Size = System::Drawing::Size(138, 21);
            this->StaffGender->TabIndex = 138;
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
            this->label4->TabIndex = 137;
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
            this->textjoin->TabIndex = 136;
            this->textjoin->Text = L"Joined on";
            // 
            // StaffJoin
            // 
            this->StaffJoin->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffJoin->CalendarForeColor = System::Drawing::Color::White;
            this->StaffJoin->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->StaffJoin->CalendarTitleBackColor = System::Drawing::Color::Red;
            this->StaffJoin->CalendarTitleForeColor = System::Drawing::Color::Transparent;
            this->StaffJoin->CustomFormat = L"dd-MMM-yyyy";
            this->StaffJoin->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->StaffJoin->Location = System::Drawing::Point(469, 517);
            this->StaffJoin->Name = L"StaffJoin";
            this->StaffJoin->Size = System::Drawing::Size(177, 20);
            this->StaffJoin->TabIndex = 135;
            // 
            // StaffDepartment
            // 
            this->StaffDepartment->FormattingEnabled = true;
            this->StaffDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Information Technology Engineering", L"Telecommunication & Electronics Engineering ",
                    L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering", L"Environmental Engineering",
                    L"Food Technology Engineering"
            });
            this->StaffDepartment->Location = System::Drawing::Point(297, 319);
            this->StaffDepartment->Name = L"StaffDepartment";
            this->StaffDepartment->Size = System::Drawing::Size(231, 21);
            this->StaffDepartment->TabIndex = 134;
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
            this->label8->TabIndex = 133;
            this->label8->Text = L"Phone Number";
            // 
            // StaffPhoneNumber
            // 
            this->StaffPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffPhoneNumber->Location = System::Drawing::Point(33, 319);
            this->StaffPhoneNumber->Name = L"StaffPhoneNumber";
            this->StaffPhoneNumber->Size = System::Drawing::Size(231, 33);
            this->StaffPhoneNumber->TabIndex = 132;
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
            this->textemail->TabIndex = 131;
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
            this->txtdob->TabIndex = 130;
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
            this->textdep->TabIndex = 129;
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
            this->label3->TabIndex = 128;
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
            this->label2->TabIndex = 127;
            this->label2->Text = L"Last Name";
            // 
            // StaffLastName
            // 
            this->StaffLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffLastName->Location = System::Drawing::Point(361, 142);
            this->StaffLastName->Name = L"StaffLastName";
            this->StaffLastName->Size = System::Drawing::Size(231, 33);
            this->StaffLastName->TabIndex = 125;
            // 
            // Staffmail
            // 
            this->Staffmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Staffmail->Location = System::Drawing::Point(33, 517);
            this->Staffmail->Name = L"Staffmail";
            this->Staffmail->Size = System::Drawing::Size(231, 33);
            this->Staffmail->TabIndex = 124;
            // 
            // StaffDOB
            // 
            this->StaffDOB->CalendarFont = (gcnew System::Drawing::Font(L"Candara Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffDOB->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->StaffDOB->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->StaffDOB->CalendarTitleBackColor = System::Drawing::Color::Red;
            this->StaffDOB->CalendarTitleForeColor = System::Drawing::Color::Transparent;
            this->StaffDOB->CustomFormat = L"dd-MMM-yyyy";
            this->StaffDOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->StaffDOB->Location = System::Drawing::Point(415, 230);
            this->StaffDOB->Name = L"StaffDOB";
            this->StaffDOB->Size = System::Drawing::Size(231, 20);
            this->StaffDOB->TabIndex = 122;
            // 
            // StaffID
            // 
            this->StaffID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffID->Location = System::Drawing::Point(206, 230);
            this->StaffID->Name = L"StaffID";
            this->StaffID->Size = System::Drawing::Size(174, 33);
            this->StaffID->TabIndex = 123;
            // 
            // StaffFirstName
            // 
            this->StaffFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffFirstName->Location = System::Drawing::Point(33, 142);
            this->StaffFirstName->Name = L"StaffFirstName";
            this->StaffFirstName->Size = System::Drawing::Size(231, 33);
            this->StaffFirstName->TabIndex = 121;
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
            this->label1->TabIndex = 126;
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
            this->label5->Size = System::Drawing::Size(395, 59);
            this->label5->TabIndex = 120;
            this->label5->Text = L"ADD A NEW STAFF";
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
            this->button1->TabIndex = 119;
            this->button1->Text = L"ADD";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AddStaff::button1_Click);
            // 
            // AddStaff
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(685, 633);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->StaffDay);
            this->Controls->Add(this->StaffPosition);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->StaffSalary);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->StaffHour);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->StaffGender);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textjoin);
            this->Controls->Add(this->StaffJoin);
            this->Controls->Add(this->StaffDepartment);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->StaffPhoneNumber);
            this->Controls->Add(this->textemail);
            this->Controls->Add(this->txtdob);
            this->Controls->Add(this->textdep);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->StaffLastName);
            this->Controls->Add(this->Staffmail);
            this->Controls->Add(this->StaffDOB);
            this->Controls->Add(this->StaffID);
            this->Controls->Add(this->StaffFirstName);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(475, 1);
            this->Name = L"AddStaff";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"AddStaff";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    AddStaffcon^ Addstacon = gcnew AddStaffcon(StaffFirstName->Text, StaffLastName->Text, StaffID->Text, StaffDepartment->Text
        , StaffDOB->Text, Staffmail->Text, StaffPhoneNumber->Text, StaffJoin->Text, StaffSalary->Text, StaffGender->Text, StaffPosition->Text, StaffDay->Text, StaffHour->Text);
    Addstacon->ShowDialog();
}
};
}
