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
	/// Summary for TeacherManagement
	/// </summary>
	public ref class TeacherManagement : public System::Windows::Forms::Form
	{
	public:
		TeacherManagement(void)
		{
			InitializeComponent();
            //For refresh the table automaticly
            //should be off if using on ur device to avoid database crash

            /*
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);
            SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from teacherdb", sqlConn);
            DataTable^ StudentDataTable = gcnew DataTable();
            SearchStudentData->Fill(StudentDataTable);
            bindingteacherview->DataSource = StudentDataTable;
            TeacherDataView->DataSource = bindingteacherview;
            */
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeacherManagement()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label11;
    protected:
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::ComboBox^ TeacherClass;
    private: System::Windows::Forms::ComboBox^ TeacherDay;
    private: System::Windows::Forms::ComboBox^ TeacherSubject;
    private: System::Windows::Forms::Label^ label10;
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

    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::DataGridView^ TeacherDataView;
    private: System::Windows::Forms::BindingSource^ bindingteacherview;

    private: System::ComponentModel::IContainer^ components;

    protected:



























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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherManagement::typeid));
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->TeacherClass = (gcnew System::Windows::Forms::ComboBox());
            this->TeacherDay = (gcnew System::Windows::Forms::ComboBox());
            this->TeacherSubject = (gcnew System::Windows::Forms::ComboBox());
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
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->TeacherDataView = (gcnew System::Windows::Forms::DataGridView());
            this->bindingteacherview = (gcnew System::Windows::Forms::BindingSource(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeacherDataView))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingteacherview))->BeginInit();
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
            this->label11->Location = System::Drawing::Point(147, 289);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(61, 36);
            this->label11->TabIndex = 147;
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
            this->label9->Location = System::Drawing::Point(494, 214);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(103, 36);
            this->label9->TabIndex = 146;
            this->label9->Text = L"Subject";
            // 
            // TeacherClass
            // 
            this->TeacherClass->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherClass->FormattingEnabled = true;
            this->TeacherClass->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
            this->TeacherClass->Location = System::Drawing::Point(394, 330);
            this->TeacherClass->Name = L"TeacherClass";
            this->TeacherClass->Size = System::Drawing::Size(92, 21);
            this->TeacherClass->TabIndex = 145;
            // 
            // TeacherDay
            // 
            this->TeacherDay->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherDay->FormattingEnabled = true;
            this->TeacherDay->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
            this->TeacherDay->Location = System::Drawing::Point(153, 330);
            this->TeacherDay->Name = L"TeacherDay";
            this->TeacherDay->Size = System::Drawing::Size(96, 21);
            this->TeacherDay->TabIndex = 144;
            // 
            // TeacherSubject
            // 
            this->TeacherSubject->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherSubject->FormattingEnabled = true;
            this->TeacherSubject->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
                L"IT Security", L"Student affairs ", L"Admissions",
                    L"Enrollment", L"Human resources", L"Financial services", L"Athletics", L"Student housing", L"Administration", L"Accounting",
                    L"Food service", L"Counseling", L"Academic affairs", L"Advising", L"Campus President", L"Accountant"
            });
            this->TeacherSubject->Location = System::Drawing::Point(500, 255);
            this->TeacherSubject->Name = L"TeacherSubject";
            this->TeacherSubject->Size = System::Drawing::Size(181, 21);
            this->TeacherSubject->TabIndex = 143;
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
            this->label10->Location = System::Drawing::Point(388, 289);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(75, 36);
            this->label10->TabIndex = 142;
            this->label10->Text = L"Class";
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(556, 0);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(142, 80);
            this->pictureBox4->TabIndex = 141;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &TeacherManagement::pictureBox4_Click);
            // 
            // TeacherSalary
            // 
            this->TeacherSalary->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherSalary->Location = System::Drawing::Point(17, 328);
            this->TeacherSalary->Name = L"TeacherSalary";
            this->TeacherSalary->Size = System::Drawing::Size(130, 33);
            this->TeacherSalary->TabIndex = 139;
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
            this->label7->Location = System::Drawing::Point(12, 289);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(104, 36);
            this->label7->TabIndex = 140;
            this->label7->Text = L"Salary $";
            // 
            // TeacherHour
            // 
            this->TeacherHour->ForeColor = System::Drawing::SystemColors::WindowText;
            this->TeacherHour->FormattingEnabled = true;
            this->TeacherHour->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
                L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12",
                    L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
            });
            this->TeacherHour->Location = System::Drawing::Point(255, 330);
            this->TeacherHour->Name = L"TeacherHour";
            this->TeacherHour->Size = System::Drawing::Size(133, 21);
            this->TeacherHour->TabIndex = 138;
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
            this->label6->Location = System::Drawing::Point(255, 289);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(86, 36);
            this->label6->TabIndex = 137;
            this->label6->Text = L"Hours";
            // 
            // TeacherGender
            // 
            this->TeacherGender->FormattingEnabled = true;
            this->TeacherGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->TeacherGender->Location = System::Drawing::Point(500, 174);
            this->TeacherGender->Name = L"TeacherGender";
            this->TeacherGender->Size = System::Drawing::Size(138, 21);
            this->TeacherGender->TabIndex = 136;
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
            this->label4->Location = System::Drawing::Point(492, 139);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(103, 36);
            this->label4->TabIndex = 135;
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
            this->textjoin->Location = System::Drawing::Point(505, 289);
            this->textjoin->Name = L"textjoin";
            this->textjoin->Size = System::Drawing::Size(133, 36);
            this->textjoin->TabIndex = 134;
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
            this->TeacherJoin->Location = System::Drawing::Point(504, 330);
            this->TeacherJoin->Name = L"TeacherJoin";
            this->TeacherJoin->Size = System::Drawing::Size(177, 20);
            this->TeacherJoin->TabIndex = 133;
            // 
            // TeacherDepartment
            // 
            this->TeacherDepartment->FormattingEnabled = true;
            this->TeacherDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Information Technology Engineering",
                    L"Telecommunication & Electronics Engineering ", L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering",
                    L"Environmental Engineering", L"Food Technology Engineering"
            });
            this->TeacherDepartment->Location = System::Drawing::Point(261, 253);
            this->TeacherDepartment->Name = L"TeacherDepartment";
            this->TeacherDepartment->Size = System::Drawing::Size(231, 21);
            this->TeacherDepartment->TabIndex = 132;
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
            this->label8->Location = System::Drawing::Point(12, 139);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(196, 36);
            this->label8->TabIndex = 131;
            this->label8->Text = L"Phone Number";
            // 
            // TeacherPhoneNumber
            // 
            this->TeacherPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherPhoneNumber->Location = System::Drawing::Point(18, 178);
            this->TeacherPhoneNumber->Name = L"TeacherPhoneNumber";
            this->TeacherPhoneNumber->Size = System::Drawing::Size(231, 33);
            this->TeacherPhoneNumber->TabIndex = 130;
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
            this->textemail->Location = System::Drawing::Point(12, 214);
            this->textemail->Name = L"textemail";
            this->textemail->Size = System::Drawing::Size(184, 36);
            this->textemail->TabIndex = 129;
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
            this->txtdob->Location = System::Drawing::Point(255, 139);
            this->txtdob->Name = L"txtdob";
            this->txtdob->Size = System::Drawing::Size(167, 36);
            this->txtdob->TabIndex = 128;
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
            this->textdep->Location = System::Drawing::Point(255, 214);
            this->textdep->Name = L"textdep";
            this->textdep->Size = System::Drawing::Size(162, 36);
            this->textdep->TabIndex = 127;
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
            this->label3->Location = System::Drawing::Point(494, 64);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(42, 36);
            this->label3->TabIndex = 126;
            this->label3->Text = L"ID";
            this->label3->Click += gcnew System::EventHandler(this, &TeacherManagement::label3_Click);
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
            this->label2->Location = System::Drawing::Point(255, 64);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(143, 36);
            this->label2->TabIndex = 125;
            this->label2->Text = L"Last Name";
            // 
            // TeacherLastName
            // 
            this->TeacherLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherLastName->Location = System::Drawing::Point(261, 103);
            this->TeacherLastName->Name = L"TeacherLastName";
            this->TeacherLastName->Size = System::Drawing::Size(231, 33);
            this->TeacherLastName->TabIndex = 123;
            // 
            // Teachermail
            // 
            this->Teachermail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Teachermail->Location = System::Drawing::Point(18, 253);
            this->Teachermail->Name = L"Teachermail";
            this->Teachermail->Size = System::Drawing::Size(231, 33);
            this->Teachermail->TabIndex = 122;
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
            this->TeacherDOB->Location = System::Drawing::Point(255, 175);
            this->TeacherDOB->Name = L"TeacherDOB";
            this->TeacherDOB->Size = System::Drawing::Size(231, 20);
            this->TeacherDOB->TabIndex = 120;
            // 
            // TeacherID
            // 
            this->TeacherID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherID->Location = System::Drawing::Point(500, 103);
            this->TeacherID->Name = L"TeacherID";
            this->TeacherID->Size = System::Drawing::Size(95, 33);
            this->TeacherID->TabIndex = 121;
            this->TeacherID->TextChanged += gcnew System::EventHandler(this, &TeacherManagement::TeacherID_TextChanged);
            // 
            // TeacherFirstName
            // 
            this->TeacherFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TeacherFirstName->Location = System::Drawing::Point(18, 103);
            this->TeacherFirstName->Name = L"TeacherFirstName";
            this->TeacherFirstName->Size = System::Drawing::Size(231, 33);
            this->TeacherFirstName->TabIndex = 119;
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
            this->label1->Location = System::Drawing::Point(12, 64);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(144, 36);
            this->label1->TabIndex = 124;
            this->label1->Text = L"First Name";
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
            this->label5->Location = System::Drawing::Point(-1, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(507, 64);
            this->label5->TabIndex = 148;
            this->label5->Text = L"Teacher Management";
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Location = System::Drawing::Point(524, 599);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(39, 51);
            this->pictureBox3->TabIndex = 155;
            this->pictureBox3->TabStop = false;
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
            this->button3->Location = System::Drawing::Point(512, 593);
            this->button3->Name = L"button3";
            this->button3->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button3->Size = System::Drawing::Size(178, 60);
            this->button3->TabIndex = 156;
            this->button3->Text = L" Refresh";
            this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &TeacherManagement::button3_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
            this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox5->Location = System::Drawing::Point(476, 381);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(37, 41);
            this->pictureBox5->TabIndex = 153;
            this->pictureBox5->TabStop = false;
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
            this->button4->Location = System::Drawing::Point(469, 374);
            this->button4->Name = L"button4";
            this->button4->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button4->Size = System::Drawing::Size(224, 59);
            this->button4->TabIndex = 154;
            this->button4->Text = L"Delete";
            this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &TeacherManagement::button4_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(16, 381);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(37, 41);
            this->pictureBox1->TabIndex = 151;
            this->pictureBox1->TabStop = false;
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
            this->button2->Location = System::Drawing::Point(9, 374);
            this->button2->Name = L"button2";
            this->button2->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button2->Size = System::Drawing::Size(224, 59);
            this->button2->TabIndex = 152;
            this->button2->Text = L"Search";
            this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &TeacherManagement::button2_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(246, 381);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(37, 41);
            this->pictureBox2->TabIndex = 149;
            this->pictureBox2->TabStop = false;
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
            this->button1->Location = System::Drawing::Point(239, 374);
            this->button1->Name = L"button1";
            this->button1->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button1->Size = System::Drawing::Size(224, 59);
            this->button1->TabIndex = 150;
            this->button1->Text = L"Update";
            this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &TeacherManagement::button1_Click);
            // 
            // TeacherDataView
            // 
            this->TeacherDataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->TeacherDataView->Location = System::Drawing::Point(9, 451);
            this->TeacherDataView->Name = L"TeacherDataView";
            this->TeacherDataView->Size = System::Drawing::Size(684, 136);
            this->TeacherDataView->TabIndex = 157;
            this->TeacherDataView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeacherManagement::TeacherDataView_CellClick);
            this->TeacherDataView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeacherManagement::TeacherDataView_CellContentClick);
            // 
            // TeacherManagement
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(701, 661);
            this->Controls->Add(this->TeacherDataView);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label5);
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
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(475, 2);
            this->Name = L"TeacherManagement";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"TeacherManagement";
            this->Load += gcnew System::EventHandler(this, &TeacherManagement::TeacherManagement_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeacherDataView))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingteacherview))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void TeacherID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        int id = Int32::Parse(TeacherID->Text);
        String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(constr);
        SqlCommand^ cmd = gcnew SqlCommand("select * from teacherdb WHERE Id=" + id + "", sqlConn);
        sqlConn->Open();
        SqlDataReader^ dr = cmd->ExecuteReader();
        while (dr->Read())
        {
            TeacherFirstName->Text = dr->GetString(1);
            TeacherLastName->Text = dr->GetString(2);
            TeacherGender->Text = dr->GetString(3);
            TeacherPhoneNumber->Text = dr->GetString(4);
            TeacherDOB->Text = dr->GetString(5);
            Teachermail->Text = dr->GetString(6);
            TeacherDepartment->Text = dr->GetString(7);
            TeacherSubject->Text = dr->GetString(8);
            TeacherDay->Text = dr->GetString(9);
            TeacherHour->Text = dr->GetString(10);
            TeacherClass->Text = dr->GetString(11);
            TeacherSalary->Text = dr->GetString(12);
            TeacherJoin->Text = dr->GetString(13);
        }
        sqlConn->Close();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    int TeacherIDs = Int32::Parse(TeacherID->Text);
    if (MessageBox::Show("Are you sure you want to update this Teacher ID=" + TeacherIDs + "?", "Update Teacher", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        try {
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);

            String^ TeacherFN = this->TeacherFirstName->Text;
            String^ TeacherLN = this->TeacherLastName->Text;
            String^ TeacherDEP = this->TeacherDepartment->Text;
            String^ TeacherBIRTH = this->TeacherDOB->Text;
            String^ TeacherEMAIL = this->Teachermail->Text;
            String^ TeacherPN = this->TeacherPhoneNumber->Text;
            String^ TeacherJOIN = this->TeacherJoin->Text;
            String^ TeacherSALARY = this->TeacherSalary->Text;
            String^ TeacherGEND = this->TeacherGender->Text;
            String^ TeacherSUB = this->TeacherSubject->Text;
            String^ TeacherCLASS = this->TeacherClass->Text;
            String^ TeacherDAY = this->TeacherDay->Text;
            String^ TeacherHOUR = this->TeacherHour->Text;

            SqlCommand^ cmd = gcnew SqlCommand("update teacherdb set FirstName='" + TeacherFN + "',LastName='" + TeacherLN + "',Gender='" + TeacherGEND + "',PhoneNumber='" + TeacherPN + "',DoB='" + TeacherBIRTH + "',Email='" + TeacherEMAIL + "',Department='" + TeacherDEP + "',Subject='" + TeacherSUB + "',Day='" + TeacherDAY + "',Hour='" + TeacherHOUR + "',Class='" + TeacherCLASS + "',Salary='" + TeacherSALARY + "',JoinDate='" + TeacherJOIN + "'WHERE Id=" + TeacherIDs + "", sqlConn);
            sqlConn->Open();
            SqlDataReader^ dr = cmd->ExecuteReader();

            sqlConn->Close();
            SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from teacherdb", sqlConn);
            DataTable^ StudentDataTable = gcnew DataTable();
            SearchStudentData->Fill(StudentDataTable);
            bindingteacherview->DataSource = StudentDataTable;
            TeacherDataView->DataSource = bindingteacherview;
            MessageBox::Show("Teacher Updated Successfully");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
    }
}
private: System::Void StudentDataView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
    SqlConnection^ sqlConn = gcnew SqlConnection(constr);
    SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from teacherdb", sqlConn);
    DataTable^ StudentDataTable = gcnew DataTable();
    SearchStudentData->Fill(StudentDataTable);
    bindingteacherview->DataSource = StudentDataTable;
    TeacherDataView->DataSource = bindingteacherview;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    int id = Int32::Parse(TeacherID->Text);
    if (MessageBox::Show("Are you sure you want to remove this Teacher ID=" + id + "?", "Remove Teacher", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        try {
            int id = Int32::Parse(TeacherID->Text);
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);
            SqlCommand^ cmd = gcnew SqlCommand("delete from teacherdb WHERE Id=" + id + "", sqlConn);
            sqlConn->Open();
            SqlDataReader^ dr = cmd->ExecuteReader();

            sqlConn->Close();
            SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from teacherdb", sqlConn);
            DataTable^ StudentDataTable = gcnew DataTable();
            SearchStudentData->Fill(StudentDataTable);
            bindingteacherview->DataSource = StudentDataTable;
            TeacherDataView->DataSource = bindingteacherview;
            MessageBox::Show("Staff Deleted Successfully");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
    }
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void TeacherManagement_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TeacherDataView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void TeacherDataView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    try {
        TeacherID->Text = TeacherDataView->SelectedRows[0]->Cells[0]->Value->ToString();
        TeacherFirstName->Text = TeacherDataView->SelectedRows[0]->Cells[1]->Value->ToString();
        TeacherLastName->Text = TeacherDataView->SelectedRows[0]->Cells[2]->Value->ToString();
        TeacherGender->Text = TeacherDataView->SelectedRows[0]->Cells[3]->Value->ToString();
        TeacherPhoneNumber->Text = TeacherDataView->SelectedRows[0]->Cells[4]->Value->ToString();
        DateTime TeacherDOB = DateTime::Parse(TeacherDataView->SelectedRows[0]->Cells[5]->Value->ToString());;       //Datetime didnt work
        Teachermail->Text = TeacherDataView->SelectedRows[0]->Cells[6]->Value->ToString();
        TeacherDepartment->Text = TeacherDataView->SelectedRows[0]->Cells[7]->Value->ToString();
        TeacherSubject->Text = TeacherDataView->SelectedRows[0]->Cells[8]->Value->ToString();
        TeacherDay->Text = TeacherDataView->SelectedRows[0]->Cells[9]->Value->ToString();
        TeacherHour->Text = TeacherDataView->SelectedRows[0]->Cells[10]->Value->ToString();
        TeacherClass->Text = TeacherDataView->SelectedRows[0]->Cells[11]->Value->ToString();
        TeacherSalary->Text = TeacherDataView->SelectedRows[0]->Cells[12]->Value->ToString();
        DateTime studentJoinDate = DateTime::Parse(TeacherDataView->SelectedRows[0]->Cells[13]->Value->ToString()); //Datetime didnt work
        /*
        int TeacherIDs = Int32::Parse(TeacherID->Text);
        String^ TeacherFN = this->TeacherFirstName->Text;
        String^ TeacherLN = this->TeacherLastName->Text;
        String^ TeacherDEP = this->TeacherDepartment->Text;
        String^ TeacherBIRTH = this->TeacherDOB->Text;
        String^ TeacherEMAIL = this->Teachermail->Text;
        String^ TeacherPN = this->TeacherPhoneNumber->Text;
        String^ TeacherJOIN = this->TeacherJoin->Text;
        String^ TeacherSALARY = this->TeacherSalary->Text;
        String^ TeacherGEND = this->TeacherGender->Text;
        String^ TeacherSUB = this->TeacherSubject->Text;
        String^ TeacherCLASS = this->TeacherClass->Text;
        String^ TeacherDAY = this->TeacherDay->Text;
        String^ TeacherHOUR = this->TeacherHour->Text;*/
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
};
}
