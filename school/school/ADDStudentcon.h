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
	/// Summary for ADDStudentcon
	/// </summary>
	public ref class ADDStudentcon : public System::Windows::Forms::Form
	{
	public:
		ADDStudentcon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ADDStudentcon(String^ stdfname, String^ stdlname ,String^ stuid
			, String^ stde,String^ stdb, String^ stdem, String^ stdph, String^ stdjoin 
			,String^ stdpay2 ,String^ stdgender2 ,String^ stdyearx
			,String^stdcl,String^stdpmyst,String^ stdpwdx)

		{
			InitializeComponent();
			stdfirstname->Text = stdfname;
			stdlastname->Text = stdlname;
			stdid->Text = stuid;
			stdde->Text = stde;
			stddob->Text = stdb;
			stdmail->Text = stdem;
			stdphonenumber->Text = stdph;
			stdjo->Text = stdjoin;
			stdgenc->Text = stdgender2;
			stdyearc->Text = stdyearx;
			stdfeec->Text = stdpay2;
			stdclass->Text = stdcl;
			stdpym->Text = stdpmyst;
			stdpwd->Text = stdpwdx;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ADDStudentcon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ StudentDOB;
	private: System::Windows::Forms::Label^ StudentDepartment;
	private: System::Windows::Forms::Label^ Studentmail;
	private: System::Windows::Forms::Label^ textphone;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ StudentJoin;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ stdfirstname;
	private: System::Windows::Forms::Label^ stdid;
	private: System::Windows::Forms::Label^ stdde;
	private: System::Windows::Forms::Label^ stddob;
	private: System::Windows::Forms::Label^ stdmail;
	private: System::Windows::Forms::Label^ stdphonenumber;

	private: System::Windows::Forms::Label^ stdjo;
	private: System::Windows::Forms::Label^ stdlastname;
	private: System::Windows::Forms::Label^ stdgenc;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ stdyearc;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ stdfeec;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ stdclass;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ stdpym;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ stdpwd;

	private: System::Windows::Forms::Label^ label12;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StudentDOB = (gcnew System::Windows::Forms::Label());
			this->StudentDepartment = (gcnew System::Windows::Forms::Label());
			this->Studentmail = (gcnew System::Windows::Forms::Label());
			this->textphone = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StudentJoin = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->stdfirstname = (gcnew System::Windows::Forms::Label());
			this->stdid = (gcnew System::Windows::Forms::Label());
			this->stdde = (gcnew System::Windows::Forms::Label());
			this->stddob = (gcnew System::Windows::Forms::Label());
			this->stdmail = (gcnew System::Windows::Forms::Label());
			this->stdphonenumber = (gcnew System::Windows::Forms::Label());
			this->stdjo = (gcnew System::Windows::Forms::Label());
			this->stdlastname = (gcnew System::Windows::Forms::Label());
			this->stdgenc = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->stdyearc = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->stdfeec = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->stdclass = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->stdpym = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->stdpwd = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->label1->Location = System::Drawing::Point(24, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 36);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Full Name :";
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
			this->label3->Location = System::Drawing::Point(301, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 36);
			this->label3->TabIndex = 26;
			this->label3->Text = L"ID :";
			// 
			// StudentDOB
			// 
			this->StudentDOB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StudentDOB->AutoSize = true;
			this->StudentDOB->BackColor = System::Drawing::Color::Transparent;
			this->StudentDOB->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentDOB->ForeColor = System::Drawing::Color::White;
			this->StudentDOB->Location = System::Drawing::Point(19, 227);
			this->StudentDOB->Name = L"StudentDOB";
			this->StudentDOB->Size = System::Drawing::Size(180, 36);
			this->StudentDOB->TabIndex = 28;
			this->StudentDOB->Text = L"Date of Birth :";
			// 
			// StudentDepartment
			// 
			this->StudentDepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StudentDepartment->AutoSize = true;
			this->StudentDepartment->BackColor = System::Drawing::Color::Transparent;
			this->StudentDepartment->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentDepartment->ForeColor = System::Drawing::Color::White;
			this->StudentDepartment->Location = System::Drawing::Point(17, 356);
			this->StudentDepartment->Name = L"StudentDepartment";
			this->StudentDepartment->Size = System::Drawing::Size(175, 36);
			this->StudentDepartment->TabIndex = 29;
			this->StudentDepartment->Text = L"Department :";
			// 
			// Studentmail
			// 
			this->Studentmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Studentmail->AutoSize = true;
			this->Studentmail->BackColor = System::Drawing::Color::Transparent;
			this->Studentmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Studentmail->ForeColor = System::Drawing::Color::White;
			this->Studentmail->Location = System::Drawing::Point(17, 476);
			this->Studentmail->Name = L"Studentmail";
			this->Studentmail->Size = System::Drawing::Size(197, 36);
			this->Studentmail->TabIndex = 30;
			this->Studentmail->Text = L"Email Address :";
			this->Studentmail->Click += gcnew System::EventHandler(this, &ADDStudentcon::Studentmail_Click);
			// 
			// textphone
			// 
			this->textphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textphone->AutoSize = true;
			this->textphone->BackColor = System::Drawing::Color::Transparent;
			this->textphone->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textphone->ForeColor = System::Drawing::Color::White;
			this->textphone->Location = System::Drawing::Point(19, 292);
			this->textphone->Name = L"textphone";
			this->textphone->Size = System::Drawing::Size(209, 36);
			this->textphone->TabIndex = 31;
			this->textphone->Text = L"Phone Number :";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara Light", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(388, 64);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Confirm Student";
			this->label2->Click += gcnew System::EventHandler(this, &ADDStudentcon::label2_Click);
			// 
			// StudentJoin
			// 
			this->StudentJoin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StudentJoin->AutoSize = true;
			this->StudentJoin->BackColor = System::Drawing::Color::Transparent;
			this->StudentJoin->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentJoin->ForeColor = System::Drawing::Color::White;
			this->StudentJoin->Location = System::Drawing::Point(12, 538);
			this->StudentJoin->Name = L"StudentJoin";
			this->StudentJoin->Size = System::Drawing::Size(146, 36);
			this->StudentJoin->TabIndex = 35;
			this->StudentJoin->Text = L"Joined on :";
			this->StudentJoin->Click += gcnew System::EventHandler(this, &ADDStudentcon::StudentJoin_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(590, 593);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 58);
			this->button1->TabIndex = 36;
			this->button1->Text = L"CONFORM";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ADDStudentcon::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Brown;
			this->button2->Location = System::Drawing::Point(424, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 58);
			this->button2->TabIndex = 37;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ADDStudentcon::button2_Click);
			// 
			// stdfirstname
			// 
			this->stdfirstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdfirstname->AutoSize = true;
			this->stdfirstname->BackColor = System::Drawing::Color::Transparent;
			this->stdfirstname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdfirstname->ForeColor = System::Drawing::Color::White;
			this->stdfirstname->Location = System::Drawing::Point(316, 96);
			this->stdfirstname->Name = L"stdfirstname";
			this->stdfirstname->Size = System::Drawing::Size(133, 36);
			this->stdfirstname->TabIndex = 38;
			this->stdfirstname->Text = L"(No Data)";
			this->stdfirstname->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdfirstname_Click);
			// 
			// stdid
			// 
			this->stdid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdid->AutoSize = true;
			this->stdid->BackColor = System::Drawing::Color::Transparent;
			this->stdid->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdid->ForeColor = System::Drawing::Color::White;
			this->stdid->Location = System::Drawing::Point(352, 159);
			this->stdid->Name = L"stdid";
			this->stdid->Size = System::Drawing::Size(133, 36);
			this->stdid->TabIndex = 39;
			this->stdid->Text = L"(No Data)";
			// 
			// stdde
			// 
			this->stdde->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdde->AutoSize = true;
			this->stdde->BackColor = System::Drawing::Color::Transparent;
			this->stdde->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdde->ForeColor = System::Drawing::Color::White;
			this->stdde->Location = System::Drawing::Point(205, 356);
			this->stdde->Name = L"stdde";
			this->stdde->Size = System::Drawing::Size(133, 36);
			this->stdde->TabIndex = 40;
			this->stdde->Text = L"(No Data)";
			// 
			// stddob
			// 
			this->stddob->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stddob->AutoSize = true;
			this->stddob->BackColor = System::Drawing::Color::Transparent;
			this->stddob->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stddob->ForeColor = System::Drawing::Color::White;
			this->stddob->Location = System::Drawing::Point(205, 227);
			this->stddob->Name = L"stddob";
			this->stddob->Size = System::Drawing::Size(133, 36);
			this->stddob->TabIndex = 41;
			this->stddob->Text = L"(No Data)";
			// 
			// stdmail
			// 
			this->stdmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdmail->AutoSize = true;
			this->stdmail->BackColor = System::Drawing::Color::Transparent;
			this->stdmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdmail->ForeColor = System::Drawing::Color::White;
			this->stdmail->Location = System::Drawing::Point(220, 476);
			this->stdmail->Name = L"stdmail";
			this->stdmail->Size = System::Drawing::Size(133, 36);
			this->stdmail->TabIndex = 42;
			this->stdmail->Text = L"(No Data)";
			this->stdmail->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdmail_Click);
			// 
			// stdphonenumber
			// 
			this->stdphonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdphonenumber->AutoSize = true;
			this->stdphonenumber->BackColor = System::Drawing::Color::Transparent;
			this->stdphonenumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdphonenumber->ForeColor = System::Drawing::Color::White;
			this->stdphonenumber->Location = System::Drawing::Point(230, 292);
			this->stdphonenumber->Name = L"stdphonenumber";
			this->stdphonenumber->Size = System::Drawing::Size(133, 36);
			this->stdphonenumber->TabIndex = 43;
			this->stdphonenumber->Text = L"(No Data)";
			// 
			// stdjo
			// 
			this->stdjo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdjo->AutoSize = true;
			this->stdjo->BackColor = System::Drawing::Color::Transparent;
			this->stdjo->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdjo->ForeColor = System::Drawing::Color::White;
			this->stdjo->Location = System::Drawing::Point(155, 538);
			this->stdjo->Name = L"stdjo";
			this->stdjo->Size = System::Drawing::Size(133, 36);
			this->stdjo->TabIndex = 44;
			this->stdjo->Text = L"(No Data)";
			this->stdjo->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdjo_Click);
			// 
			// stdlastname
			// 
			this->stdlastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdlastname->AutoSize = true;
			this->stdlastname->BackColor = System::Drawing::Color::Transparent;
			this->stdlastname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdlastname->ForeColor = System::Drawing::Color::White;
			this->stdlastname->Location = System::Drawing::Point(177, 96);
			this->stdlastname->Name = L"stdlastname";
			this->stdlastname->Size = System::Drawing::Size(133, 36);
			this->stdlastname->TabIndex = 45;
			this->stdlastname->Text = L"(No Data)";
			this->stdlastname->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdlastname_Click);
			// 
			// stdgenc
			// 
			this->stdgenc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdgenc->AutoSize = true;
			this->stdgenc->BackColor = System::Drawing::Color::Transparent;
			this->stdgenc->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdgenc->ForeColor = System::Drawing::Color::White;
			this->stdgenc->Location = System::Drawing::Point(141, 159);
			this->stdgenc->Name = L"stdgenc";
			this->stdgenc->Size = System::Drawing::Size(133, 36);
			this->stdgenc->TabIndex = 47;
			this->stdgenc->Text = L"(No Data)";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(19, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 36);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Gender :";
			// 
			// stdyearc
			// 
			this->stdyearc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdyearc->AutoSize = true;
			this->stdyearc->BackColor = System::Drawing::Color::Transparent;
			this->stdyearc->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdyearc->ForeColor = System::Drawing::Color::White;
			this->stdyearc->Location = System::Drawing::Point(115, 417);
			this->stdyearc->Name = L"stdyearc";
			this->stdyearc->Size = System::Drawing::Size(133, 36);
			this->stdyearc->TabIndex = 49;
			this->stdyearc->Text = L"(No Data)";
			this->stdyearc->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdyearc_Click);
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
			this->label7->Location = System::Drawing::Point(17, 417);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 36);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Level :";
			this->label7->Click += gcnew System::EventHandler(this, &ADDStudentcon::label7_Click);
			// 
			// stdfeec
			// 
			this->stdfeec->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdfeec->AutoSize = true;
			this->stdfeec->BackColor = System::Drawing::Color::Transparent;
			this->stdfeec->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdfeec->ForeColor = System::Drawing::Color::White;
			this->stdfeec->Location = System::Drawing::Point(358, 417);
			this->stdfeec->Name = L"stdfeec";
			this->stdfeec->Size = System::Drawing::Size(133, 36);
			this->stdfeec->TabIndex = 51;
			this->stdfeec->Text = L"(No Data)";
			this->stdfeec->Click += gcnew System::EventHandler(this, &ADDStudentcon::stdfeec_Click);
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
			this->label9->Location = System::Drawing::Point(291, 417);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 36);
			this->label9->TabIndex = 50;
			this->label9->Text = L"Fee :";
			this->label9->Click += gcnew System::EventHandler(this, &ADDStudentcon::label9_Click);
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
			this->label4->Location = System::Drawing::Point(445, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 36);
			this->label4->TabIndex = 52;
			this->label4->Text = L"$";
			// 
			// stdclass
			// 
			this->stdclass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdclass->AutoSize = true;
			this->stdclass->BackColor = System::Drawing::Color::Transparent;
			this->stdclass->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdclass->ForeColor = System::Drawing::Color::White;
			this->stdclass->Location = System::Drawing::Point(597, 417);
			this->stdclass->Name = L"stdclass";
			this->stdclass->Size = System::Drawing::Size(133, 36);
			this->stdclass->TabIndex = 54;
			this->stdclass->Text = L"(No Data)";
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
			this->label8->Location = System::Drawing::Point(517, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 36);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Class :";
			// 
			// stdpym
			// 
			this->stdpym->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdpym->AutoSize = true;
			this->stdpym->BackColor = System::Drawing::Color::Transparent;
			this->stdpym->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdpym->ForeColor = System::Drawing::Color::White;
			this->stdpym->Location = System::Drawing::Point(589, 476);
			this->stdpym->Name = L"stdpym";
			this->stdpym->Size = System::Drawing::Size(133, 36);
			this->stdpym->TabIndex = 56;
			this->stdpym->Text = L"(No Data)";
			this->stdpym->Click += gcnew System::EventHandler(this, &ADDStudentcon::label6_Click);
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
			this->label10->Location = System::Drawing::Point(386, 476);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(210, 36);
			this->label10->TabIndex = 55;
			this->label10->Text = L"PaymentStatus :";
			this->label10->Click += gcnew System::EventHandler(this, &ADDStudentcon::label10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 57;
			this->label6->Text = L"label6";
			// 
			// stdpwd
			// 
			this->stdpwd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stdpwd->AutoSize = true;
			this->stdpwd->BackColor = System::Drawing::Color::Transparent;
			this->stdpwd->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdpwd->ForeColor = System::Drawing::Color::White;
			this->stdpwd->Location = System::Drawing::Point(155, 593);
			this->stdpwd->Name = L"stdpwd";
			this->stdpwd->Size = System::Drawing::Size(133, 36);
			this->stdpwd->TabIndex = 59;
			this->stdpwd->Text = L"(No Data)";
			this->stdpwd->Click += gcnew System::EventHandler(this, &ADDStudentcon::label11_Click);
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
			this->label12->Location = System::Drawing::Point(19, 593);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 36);
			this->label12->TabIndex = 58;
			this->label12->Text = L"Password :";
			// 
			// ADDStudentcon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->ClientSize = System::Drawing::Size(759, 678);
			this->Controls->Add(this->stdpwd);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->stdpym);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->stdclass);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->stdfeec);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->stdyearc);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->stdgenc);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->stdlastname);
			this->Controls->Add(this->stdjo);
			this->Controls->Add(this->stdphonenumber);
			this->Controls->Add(this->stdmail);
			this->Controls->Add(this->stddob);
			this->Controls->Add(this->stdde);
			this->Controls->Add(this->stdid);
			this->Controls->Add(this->stdfirstname);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->StudentJoin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textphone);
			this->Controls->Add(this->Studentmail);
			this->Controls->Add(this->StudentDepartment);
			this->Controls->Add(this->StudentDOB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(475, 2);
			this->Name = L"ADDStudentcon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ADDStudentcon";
			this->Load += gcnew System::EventHandler(this, &ADDStudentcon::ADDStudentcon_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	//Add New Student to DB 
	
	String^ StudentFN = this -> stdfirstname->Text;
	String^ StudentLN = this->stdlastname->Text;;
	int StudentIDs = Int32::Parse(stdid->Text);
	String^ StudentDEP = this->stdde->Text;
	String^ StudentBIRTH = this->stddob->Text;
	String^ StudentEMAIL = this->stdmail->Text;
	String^ StudentPN = this->stdphonenumber->Text;
	String^ StudentJOIN = this->stdjo->Text;
	String^ StudentGEND = this->stdgenc->Text;
	String^ StudentYEARC = this->stdyearc->Text;
	String^ StudentClass = this->stdclass->Text;
	String^ StudentFEEC= this->stdfeec->Text;
	String^ StudentPAYMENT = this->stdpym->Text;
	String^ StudentPWD = this->stdpwd->Text;

	//Connect TO DB
	String^ constr= "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
	SqlConnection^ sqlConn=gcnew SqlConnection(constr);
	
	
	//Insert into database
	SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO studentdb VALUES(" + StudentIDs + ", '" + StudentFN + "','" 
		+ StudentLN + "','" + StudentGEND + "','" + StudentPN + "','" 
		+ StudentBIRTH + "','" + StudentEMAIL + "','" + StudentDEP + "','" 
		+ StudentYEARC + "','"+StudentClass+"','" + StudentFEEC + "','" 
		+ StudentJOIN + "','"+ StudentPAYMENT +"','" + StudentPWD + "')",sqlConn);
	
	
	
	SqlDataReader^ dr;
	sqlConn->Open();


	//Read Excute to database
	dr = cmd->ExecuteReader();
	MessageBox::Show("Student Add Successfully");
	}

	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}


	this->Hide();

}
private: System::Void ADDStudentcon_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdlastname_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdmail_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Studentmail_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentJoin_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdjo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdyearc_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdfeec_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdfirstname_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
