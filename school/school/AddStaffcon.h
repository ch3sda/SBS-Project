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
	/// Summary for AddStaffcon
	/// </summary>
	public ref class AddStaffcon : public System::Windows::Forms::Form
	{
	public:
		AddStaffcon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
        AddStaffcon(String^ stdfname, String^ stdlname, String^ stuid
            , String^ stde, String^ stdb, String^ stdem, String^ stdph, String^ stdjoin, String^ thsl, String^ stdgender2, String^ stdyearx, String^ stdcl, String^ thourx)
{
            InitializeComponent();
            stafirstname->Text = stdfname;
            stalastname->Text = stdlname;
            staid->Text = stuid;
            stade->Text = stde;
            stadob->Text = stdb;
            stamail->Text = stdem;
            staphonenumber->Text = stdph;
            stajo->Text = stdjoin;
            stasala->Text = thsl;
            stagenc->Text = stdgender2;
            staps->Text = stdyearx;
            //thclass->Text = stdpay2;
            staday->Text = stdcl;
            stahour->Text = thourx;


            //
            //TODO: Add the constructor code here
            //
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStaffcon()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ stahour;
    protected:
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ staday;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ stasala;
    private: System::Windows::Forms::Label^ thsalary;
    private: System::Windows::Forms::Label^ staps;


    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ stagenc;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ stalastname;
    private: System::Windows::Forms::Label^ stajo;
    private: System::Windows::Forms::Label^ staphonenumber;
    private: System::Windows::Forms::Label^ stamail;
    private: System::Windows::Forms::Label^ stadob;
    private: System::Windows::Forms::Label^ stade;
    private: System::Windows::Forms::Label^ staid;
    private: System::Windows::Forms::Label^ stafirstname;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ StudentJoin;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ textphone;
    private: System::Windows::Forms::Label^ Studentmail;
    private: System::Windows::Forms::Label^ StudentDepartment;
    private: System::Windows::Forms::Label^ StudentDOB;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label1;

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
            this->stahour = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->staday = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->stasala = (gcnew System::Windows::Forms::Label());
            this->thsalary = (gcnew System::Windows::Forms::Label());
            this->staps = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->stagenc = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->stalastname = (gcnew System::Windows::Forms::Label());
            this->stajo = (gcnew System::Windows::Forms::Label());
            this->staphonenumber = (gcnew System::Windows::Forms::Label());
            this->stamail = (gcnew System::Windows::Forms::Label());
            this->stadob = (gcnew System::Windows::Forms::Label());
            this->stade = (gcnew System::Windows::Forms::Label());
            this->staid = (gcnew System::Windows::Forms::Label());
            this->stafirstname = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->StudentJoin = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textphone = (gcnew System::Windows::Forms::Label());
            this->Studentmail = (gcnew System::Windows::Forms::Label());
            this->StudentDepartment = (gcnew System::Windows::Forms::Label());
            this->StudentDOB = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // stahour
            // 
            this->stahour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stahour->AutoSize = true;
            this->stahour->BackColor = System::Drawing::Color::Transparent;
            this->stahour->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stahour->ForeColor = System::Drawing::Color::White;
            this->stahour->Location = System::Drawing::Point(98, 447);
            this->stahour->Name = L"stahour";
            this->stahour->Size = System::Drawing::Size(133, 36);
            this->stahour->TabIndex = 116;
            this->stahour->Text = L"(No Data)";
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
            this->label12->Location = System::Drawing::Point(18, 447);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(87, 36);
            this->label12->TabIndex = 115;
            this->label12->Text = L"Hour :";
            // 
            // staday
            // 
            this->staday->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->staday->AutoSize = true;
            this->staday->BackColor = System::Drawing::Color::Transparent;
            this->staday->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->staday->ForeColor = System::Drawing::Color::White;
            this->staday->Location = System::Drawing::Point(78, 399);
            this->staday->Name = L"staday";
            this->staday->Size = System::Drawing::Size(133, 36);
            this->staday->TabIndex = 114;
            this->staday->Text = L"(No Data)";
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
            this->label10->Location = System::Drawing::Point(16, 399);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(74, 36);
            this->label10->TabIndex = 113;
            this->label10->Text = L"Day :";
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
            this->label4->Location = System::Drawing::Point(491, 447);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(28, 36);
            this->label4->TabIndex = 110;
            this->label4->Text = L"$";
            // 
            // stasala
            // 
            this->stasala->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stasala->AutoSize = true;
            this->stasala->BackColor = System::Drawing::Color::Transparent;
            this->stasala->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stasala->ForeColor = System::Drawing::Color::White;
            this->stasala->Location = System::Drawing::Point(393, 447);
            this->stasala->Name = L"stasala";
            this->stasala->Size = System::Drawing::Size(133, 36);
            this->stasala->TabIndex = 109;
            this->stasala->Text = L"(No Data)";
            // 
            // thsalary
            // 
            this->thsalary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thsalary->AutoSize = true;
            this->thsalary->BackColor = System::Drawing::Color::Transparent;
            this->thsalary->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thsalary->ForeColor = System::Drawing::Color::White;
            this->thsalary->Location = System::Drawing::Point(306, 447);
            this->thsalary->Name = L"thsalary";
            this->thsalary->Size = System::Drawing::Size(98, 36);
            this->thsalary->TabIndex = 108;
            this->thsalary->Text = L"Salary :";
            // 
            // staps
            // 
            this->staps->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->staps->AutoSize = true;
            this->staps->BackColor = System::Drawing::Color::Transparent;
            this->staps->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->staps->ForeColor = System::Drawing::Color::White;
            this->staps->Location = System::Drawing::Point(146, 351);
            this->staps->Name = L"staps";
            this->staps->Size = System::Drawing::Size(133, 36);
            this->staps->TabIndex = 107;
            this->staps->Text = L"(No Data)";
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
            this->label7->Location = System::Drawing::Point(16, 351);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(125, 36);
            this->label7->TabIndex = 106;
            this->label7->Text = L"Position :";
            // 
            // stagenc
            // 
            this->stagenc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stagenc->AutoSize = true;
            this->stagenc->BackColor = System::Drawing::Color::Transparent;
            this->stagenc->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stagenc->ForeColor = System::Drawing::Color::White;
            this->stagenc->Location = System::Drawing::Point(146, 151);
            this->stagenc->Name = L"stagenc";
            this->stagenc->Size = System::Drawing::Size(133, 36);
            this->stagenc->TabIndex = 105;
            this->stagenc->Text = L"(No Data)";
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
            this->label5->Location = System::Drawing::Point(24, 151);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(116, 36);
            this->label5->TabIndex = 104;
            this->label5->Text = L"Gender :";
            // 
            // stalastname
            // 
            this->stalastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stalastname->AutoSize = true;
            this->stalastname->BackColor = System::Drawing::Color::Transparent;
            this->stalastname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stalastname->ForeColor = System::Drawing::Color::White;
            this->stalastname->Location = System::Drawing::Point(176, 105);
            this->stalastname->Name = L"stalastname";
            this->stalastname->Size = System::Drawing::Size(133, 36);
            this->stalastname->TabIndex = 103;
            this->stalastname->Text = L"(No Data)";
            // 
            // stajo
            // 
            this->stajo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stajo->AutoSize = true;
            this->stajo->BackColor = System::Drawing::Color::Transparent;
            this->stajo->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stajo->ForeColor = System::Drawing::Color::White;
            this->stajo->Location = System::Drawing::Point(170, 552);
            this->stajo->Name = L"stajo";
            this->stajo->Size = System::Drawing::Size(133, 36);
            this->stajo->TabIndex = 102;
            this->stajo->Text = L"(No Data)";
            // 
            // staphonenumber
            // 
            this->staphonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->staphonenumber->AutoSize = true;
            this->staphonenumber->BackColor = System::Drawing::Color::Transparent;
            this->staphonenumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->staphonenumber->ForeColor = System::Drawing::Color::White;
            this->staphonenumber->Location = System::Drawing::Point(229, 246);
            this->staphonenumber->Name = L"staphonenumber";
            this->staphonenumber->Size = System::Drawing::Size(133, 36);
            this->staphonenumber->TabIndex = 101;
            this->staphonenumber->Text = L"(No Data)";
            // 
            // stamail
            // 
            this->stamail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stamail->AutoSize = true;
            this->stamail->BackColor = System::Drawing::Color::Transparent;
            this->stamail->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stamail->ForeColor = System::Drawing::Color::White;
            this->stamail->Location = System::Drawing::Point(221, 503);
            this->stamail->Name = L"stamail";
            this->stamail->Size = System::Drawing::Size(133, 36);
            this->stamail->TabIndex = 100;
            this->stamail->Text = L"(No Data)";
            // 
            // stadob
            // 
            this->stadob->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stadob->AutoSize = true;
            this->stadob->BackColor = System::Drawing::Color::Transparent;
            this->stadob->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stadob->ForeColor = System::Drawing::Color::White;
            this->stadob->Location = System::Drawing::Point(204, 198);
            this->stadob->Name = L"stadob";
            this->stadob->Size = System::Drawing::Size(133, 36);
            this->stadob->TabIndex = 99;
            this->stadob->Text = L"(No Data)";
            // 
            // stade
            // 
            this->stade->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stade->AutoSize = true;
            this->stade->BackColor = System::Drawing::Color::Transparent;
            this->stade->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stade->ForeColor = System::Drawing::Color::White;
            this->stade->Location = System::Drawing::Point(206, 302);
            this->stade->Name = L"stade";
            this->stade->Size = System::Drawing::Size(133, 36);
            this->stade->TabIndex = 98;
            this->stade->Text = L"(No Data)";
            // 
            // staid
            // 
            this->staid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->staid->AutoSize = true;
            this->staid->BackColor = System::Drawing::Color::Transparent;
            this->staid->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->staid->ForeColor = System::Drawing::Color::White;
            this->staid->Location = System::Drawing::Point(363, 151);
            this->staid->Name = L"staid";
            this->staid->Size = System::Drawing::Size(133, 36);
            this->staid->TabIndex = 97;
            this->staid->Text = L"(No Data)";
            // 
            // stafirstname
            // 
            this->stafirstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->stafirstname->AutoSize = true;
            this->stafirstname->BackColor = System::Drawing::Color::Transparent;
            this->stafirstname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->stafirstname->ForeColor = System::Drawing::Color::White;
            this->stafirstname->Location = System::Drawing::Point(315, 105);
            this->stafirstname->Name = L"stafirstname";
            this->stafirstname->Size = System::Drawing::Size(133, 36);
            this->stafirstname->TabIndex = 96;
            this->stafirstname->Text = L"(No Data)";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Brown;
            this->button2->Location = System::Drawing::Point(423, 602);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(159, 58);
            this->button2->TabIndex = 95;
            this->button2->Text = L"CANCEL";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &AddStaffcon::button2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(589, 602);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(159, 58);
            this->button1->TabIndex = 94;
            this->button1->Text = L"CONFORM";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AddStaffcon::button1_Click);
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
            this->StudentJoin->Location = System::Drawing::Point(18, 552);
            this->StudentJoin->Name = L"StudentJoin";
            this->StudentJoin->Size = System::Drawing::Size(146, 36);
            this->StudentJoin->TabIndex = 93;
            this->StudentJoin->Text = L"Joined on :";
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
            this->label2->Location = System::Drawing::Point(11, 18);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(313, 64);
            this->label2->TabIndex = 92;
            this->label2->Text = L"Confirm Staff";
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
            this->textphone->Location = System::Drawing::Point(18, 246);
            this->textphone->Name = L"textphone";
            this->textphone->Size = System::Drawing::Size(209, 36);
            this->textphone->TabIndex = 91;
            this->textphone->Text = L"Phone Number :";
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
            this->Studentmail->Location = System::Drawing::Point(18, 503);
            this->Studentmail->Name = L"Studentmail";
            this->Studentmail->Size = System::Drawing::Size(197, 36);
            this->Studentmail->TabIndex = 90;
            this->Studentmail->Text = L"Email Address :";
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
            this->StudentDepartment->Location = System::Drawing::Point(18, 302);
            this->StudentDepartment->Name = L"StudentDepartment";
            this->StudentDepartment->Size = System::Drawing::Size(175, 36);
            this->StudentDepartment->TabIndex = 89;
            this->StudentDepartment->Text = L"Department :";
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
            this->StudentDOB->Location = System::Drawing::Point(18, 198);
            this->StudentDOB->Name = L"StudentDOB";
            this->StudentDOB->Size = System::Drawing::Size(180, 36);
            this->StudentDOB->TabIndex = 88;
            this->StudentDOB->Text = L"Date of Birth :";
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
            this->label3->Location = System::Drawing::Point(306, 151);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(55, 36);
            this->label3->TabIndex = 87;
            this->label3->Text = L"ID :";
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
            this->label1->Location = System::Drawing::Point(23, 105);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(147, 36);
            this->label1->TabIndex = 86;
            this->label1->Text = L"Full Name :";
            // 
            // AddStaffcon
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->ClientSize = System::Drawing::Size(759, 678);
            this->Controls->Add(this->stahour);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->staday);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->stasala);
            this->Controls->Add(this->thsalary);
            this->Controls->Add(this->staps);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->stagenc);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->stalastname);
            this->Controls->Add(this->stajo);
            this->Controls->Add(this->staphonenumber);
            this->Controls->Add(this->stamail);
            this->Controls->Add(this->stadob);
            this->Controls->Add(this->stade);
            this->Controls->Add(this->staid);
            this->Controls->Add(this->stafirstname);
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
            this->Name = L"AddStaffcon";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"AddStaffcon";
            this->Load += gcnew System::EventHandler(this, &AddStaffcon::AddStaffcon_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            //Add New Teacher to DB 

            String^ StaffFN = this->stafirstname->Text;
            String^ StaffLN = this->stalastname->Text;;
            int StaffIDs = Int32::Parse(staid->Text);
            String^ StaffDEP = this->stade->Text;
            String^ StaffBIRTH = this->stadob->Text;
            String^ StaffEMAIL = this->stamail->Text;
            String^ StaffPN = this->staphonenumber->Text;
            String^ StaffJOIN = this->stajo->Text;
            String^ StaffSALARY = this->stasala->Text;
            String^ StaffGEND = this->stagenc->Text;
            String^ StaffPOS = this->staps->Text;
           // String^ TeacherCLASS = this->staclass->Text;
            String^ StaffDAY = this->staday->Text;
            String^ StaffHOUR = this->stahour->Text;
            //Connect TO DB
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);

            SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO staffdb VALUES(" + StaffIDs + ", '" + StaffFN + "','" + StaffLN + "','" + StaffDEP + "','" + StaffDEP + "','" + StaffBIRTH + "','" + StaffEMAIL + "','" + StaffDEP + "','" + StaffPOS+ "','" + StaffDAY + "','" + StaffHOUR + "','" + StaffSALARY + "','" + StaffJOIN + "')", sqlConn);
            SqlDataReader^ dr;
            sqlConn->Open();
            dr = cmd->ExecuteReader();
            MessageBox::Show("Staff Add Successfully");
        }

        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }


        this->Hide();
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
}
private: System::Void AddStaffcon_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
