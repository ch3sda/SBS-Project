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
	/// Summary for AddTechcon
	/// </summary>
	public ref class AddTechcon : public System::Windows::Forms::Form
	{
	public:
		AddTechcon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
        AddTechcon(String^ stdfname, String^ stdlname, String^ stuid
            , String^ stde, String^ stdb, String^ stdem, String^ stdph, String^ stdjoin, String^ thsl, String^ stdgender2, String^ stdyearx, String^ stdpay2, String^ stdcl, String^thourx)

        {
            InitializeComponent();
            thfirstname->Text = stdfname;
            thlastname->Text = stdlname;
            thid->Text = stuid;
            thde->Text = stde;
            thdob->Text = stdb;
            thmail->Text = stdem;
            thphonenumber->Text = stdph;
            thjo->Text = stdjoin;
            thsala->Text = thsl;
            thgenc->Text = stdgender2;
            thsub->Text = stdyearx;
            thclass->Text = stdpay2;
            thday->Text = stdcl;
            thhour->Text = thourx;


            //
            //TODO: Add the constructor code here
            //
        }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddTechcon()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ thclass;
    protected:

    protected:
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ thsala;

    private: System::Windows::Forms::Label^ thsalary;

    private: System::Windows::Forms::Label^ thsub;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ thgenc;

    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ thlastname;
    private: System::Windows::Forms::Label^ thjo;


    private: System::Windows::Forms::Label^ thphonenumber;
    private: System::Windows::Forms::Label^ thmail;


    private: System::Windows::Forms::Label^ thdob;
    private: System::Windows::Forms::Label^ thde;
    private: System::Windows::Forms::Label^ thid;




    private: System::Windows::Forms::Label^ thfirstname;

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
    private: System::Windows::Forms::Label^ thday;

    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ thhour;

    private: System::Windows::Forms::Label^ label12;



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
            this->thclass = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->thsala = (gcnew System::Windows::Forms::Label());
            this->thsalary = (gcnew System::Windows::Forms::Label());
            this->thsub = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->thgenc = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->thlastname = (gcnew System::Windows::Forms::Label());
            this->thjo = (gcnew System::Windows::Forms::Label());
            this->thphonenumber = (gcnew System::Windows::Forms::Label());
            this->thmail = (gcnew System::Windows::Forms::Label());
            this->thdob = (gcnew System::Windows::Forms::Label());
            this->thde = (gcnew System::Windows::Forms::Label());
            this->thid = (gcnew System::Windows::Forms::Label());
            this->thfirstname = (gcnew System::Windows::Forms::Label());
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
            this->thday = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->thhour = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // thclass
            // 
            this->thclass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thclass->AutoSize = true;
            this->thclass->BackColor = System::Drawing::Color::Transparent;
            this->thclass->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thclass->ForeColor = System::Drawing::Color::White;
            this->thclass->Location = System::Drawing::Point(380, 392);
            this->thclass->Name = L"thclass";
            this->thclass->Size = System::Drawing::Size(133, 36);
            this->thclass->TabIndex = 81;
            this->thclass->Text = L"(No Data)";
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
            this->label8->Location = System::Drawing::Point(300, 392);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(88, 36);
            this->label8->TabIndex = 80;
            this->label8->Text = L"Class :";
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
            this->label4->Location = System::Drawing::Point(485, 440);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(28, 36);
            this->label4->TabIndex = 79;
            this->label4->Text = L"$";
            // 
            // thsala
            // 
            this->thsala->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thsala->AutoSize = true;
            this->thsala->BackColor = System::Drawing::Color::Transparent;
            this->thsala->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thsala->ForeColor = System::Drawing::Color::White;
            this->thsala->Location = System::Drawing::Point(387, 440);
            this->thsala->Name = L"thsala";
            this->thsala->Size = System::Drawing::Size(133, 36);
            this->thsala->TabIndex = 78;
            this->thsala->Text = L"(No Data)";
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
            this->thsalary->Location = System::Drawing::Point(300, 440);
            this->thsalary->Name = L"thsalary";
            this->thsalary->Size = System::Drawing::Size(98, 36);
            this->thsalary->TabIndex = 77;
            this->thsalary->Text = L"Salary :";
            // 
            // thsub
            // 
            this->thsub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thsub->AutoSize = true;
            this->thsub->BackColor = System::Drawing::Color::Transparent;
            this->thsub->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thsub->ForeColor = System::Drawing::Color::White;
            this->thsub->Location = System::Drawing::Point(140, 344);
            this->thsub->Name = L"thsub";
            this->thsub->Size = System::Drawing::Size(133, 36);
            this->thsub->TabIndex = 76;
            this->thsub->Text = L"(No Data)";
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
            this->label7->Location = System::Drawing::Point(10, 344);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(122, 36);
            this->label7->TabIndex = 75;
            this->label7->Text = L"Subject  :";
            // 
            // thgenc
            // 
            this->thgenc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thgenc->AutoSize = true;
            this->thgenc->BackColor = System::Drawing::Color::Transparent;
            this->thgenc->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thgenc->ForeColor = System::Drawing::Color::White;
            this->thgenc->Location = System::Drawing::Point(140, 144);
            this->thgenc->Name = L"thgenc";
            this->thgenc->Size = System::Drawing::Size(133, 36);
            this->thgenc->TabIndex = 74;
            this->thgenc->Text = L"(No Data)";
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
            this->label5->Location = System::Drawing::Point(18, 144);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(116, 36);
            this->label5->TabIndex = 73;
            this->label5->Text = L"Gender :";
            // 
            // thlastname
            // 
            this->thlastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thlastname->AutoSize = true;
            this->thlastname->BackColor = System::Drawing::Color::Transparent;
            this->thlastname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thlastname->ForeColor = System::Drawing::Color::White;
            this->thlastname->Location = System::Drawing::Point(170, 98);
            this->thlastname->Name = L"thlastname";
            this->thlastname->Size = System::Drawing::Size(133, 36);
            this->thlastname->TabIndex = 72;
            this->thlastname->Text = L"(No Data)";
            // 
            // thjo
            // 
            this->thjo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thjo->AutoSize = true;
            this->thjo->BackColor = System::Drawing::Color::Transparent;
            this->thjo->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thjo->ForeColor = System::Drawing::Color::White;
            this->thjo->Location = System::Drawing::Point(164, 545);
            this->thjo->Name = L"thjo";
            this->thjo->Size = System::Drawing::Size(133, 36);
            this->thjo->TabIndex = 71;
            this->thjo->Text = L"(No Data)";
            // 
            // thphonenumber
            // 
            this->thphonenumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thphonenumber->AutoSize = true;
            this->thphonenumber->BackColor = System::Drawing::Color::Transparent;
            this->thphonenumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thphonenumber->ForeColor = System::Drawing::Color::White;
            this->thphonenumber->Location = System::Drawing::Point(223, 239);
            this->thphonenumber->Name = L"thphonenumber";
            this->thphonenumber->Size = System::Drawing::Size(133, 36);
            this->thphonenumber->TabIndex = 70;
            this->thphonenumber->Text = L"(No Data)";
            // 
            // thmail
            // 
            this->thmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thmail->AutoSize = true;
            this->thmail->BackColor = System::Drawing::Color::Transparent;
            this->thmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thmail->ForeColor = System::Drawing::Color::White;
            this->thmail->Location = System::Drawing::Point(215, 496);
            this->thmail->Name = L"thmail";
            this->thmail->Size = System::Drawing::Size(133, 36);
            this->thmail->TabIndex = 69;
            this->thmail->Text = L"(No Data)";
            // 
            // thdob
            // 
            this->thdob->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thdob->AutoSize = true;
            this->thdob->BackColor = System::Drawing::Color::Transparent;
            this->thdob->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thdob->ForeColor = System::Drawing::Color::White;
            this->thdob->Location = System::Drawing::Point(198, 191);
            this->thdob->Name = L"thdob";
            this->thdob->Size = System::Drawing::Size(133, 36);
            this->thdob->TabIndex = 68;
            this->thdob->Text = L"(No Data)";
            // 
            // thde
            // 
            this->thde->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thde->AutoSize = true;
            this->thde->BackColor = System::Drawing::Color::Transparent;
            this->thde->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thde->ForeColor = System::Drawing::Color::White;
            this->thde->Location = System::Drawing::Point(200, 295);
            this->thde->Name = L"thde";
            this->thde->Size = System::Drawing::Size(133, 36);
            this->thde->TabIndex = 67;
            this->thde->Text = L"(No Data)";
            // 
            // thid
            // 
            this->thid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thid->AutoSize = true;
            this->thid->BackColor = System::Drawing::Color::Transparent;
            this->thid->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thid->ForeColor = System::Drawing::Color::White;
            this->thid->Location = System::Drawing::Point(357, 144);
            this->thid->Name = L"thid";
            this->thid->Size = System::Drawing::Size(133, 36);
            this->thid->TabIndex = 66;
            this->thid->Text = L"(No Data)";
            // 
            // thfirstname
            // 
            this->thfirstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thfirstname->AutoSize = true;
            this->thfirstname->BackColor = System::Drawing::Color::Transparent;
            this->thfirstname->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thfirstname->ForeColor = System::Drawing::Color::White;
            this->thfirstname->Location = System::Drawing::Point(309, 98);
            this->thfirstname->Name = L"thfirstname";
            this->thfirstname->Size = System::Drawing::Size(133, 36);
            this->thfirstname->TabIndex = 65;
            this->thfirstname->Text = L"(No Data)";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Brown;
            this->button2->Location = System::Drawing::Point(417, 595);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(159, 58);
            this->button2->TabIndex = 64;
            this->button2->Text = L"CANCEL";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &AddTechcon::button2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(583, 595);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(159, 58);
            this->button1->TabIndex = 63;
            this->button1->Text = L"CONFORM";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AddTechcon::button1_Click);
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
            this->StudentJoin->Location = System::Drawing::Point(12, 545);
            this->StudentJoin->Name = L"StudentJoin";
            this->StudentJoin->Size = System::Drawing::Size(146, 36);
            this->StudentJoin->TabIndex = 62;
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
            this->label2->Location = System::Drawing::Point(5, 11);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(384, 64);
            this->label2->TabIndex = 61;
            this->label2->Text = L"Confirm Teacher";
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
            this->textphone->Location = System::Drawing::Point(12, 239);
            this->textphone->Name = L"textphone";
            this->textphone->Size = System::Drawing::Size(209, 36);
            this->textphone->TabIndex = 60;
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
            this->Studentmail->Location = System::Drawing::Point(12, 496);
            this->Studentmail->Name = L"Studentmail";
            this->Studentmail->Size = System::Drawing::Size(197, 36);
            this->Studentmail->TabIndex = 59;
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
            this->StudentDepartment->Location = System::Drawing::Point(12, 295);
            this->StudentDepartment->Name = L"StudentDepartment";
            this->StudentDepartment->Size = System::Drawing::Size(175, 36);
            this->StudentDepartment->TabIndex = 58;
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
            this->StudentDOB->Location = System::Drawing::Point(12, 191);
            this->StudentDOB->Name = L"StudentDOB";
            this->StudentDOB->Size = System::Drawing::Size(180, 36);
            this->StudentDOB->TabIndex = 57;
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
            this->label3->Location = System::Drawing::Point(300, 144);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(55, 36);
            this->label3->TabIndex = 56;
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
            this->label1->Location = System::Drawing::Point(17, 98);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(147, 36);
            this->label1->TabIndex = 55;
            this->label1->Text = L"Full Name :";
            // 
            // thday
            // 
            this->thday->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thday->AutoSize = true;
            this->thday->BackColor = System::Drawing::Color::Transparent;
            this->thday->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thday->ForeColor = System::Drawing::Color::White;
            this->thday->Location = System::Drawing::Point(72, 392);
            this->thday->Name = L"thday";
            this->thday->Size = System::Drawing::Size(133, 36);
            this->thday->TabIndex = 83;
            this->thday->Text = L"(No Data)";
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
            this->label10->Location = System::Drawing::Point(10, 392);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(74, 36);
            this->label10->TabIndex = 82;
            this->label10->Text = L"Day :";
            // 
            // thhour
            // 
            this->thhour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->thhour->AutoSize = true;
            this->thhour->BackColor = System::Drawing::Color::Transparent;
            this->thhour->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->thhour->ForeColor = System::Drawing::Color::White;
            this->thhour->Location = System::Drawing::Point(92, 440);
            this->thhour->Name = L"thhour";
            this->thhour->Size = System::Drawing::Size(133, 36);
            this->thhour->TabIndex = 85;
            this->thhour->Text = L"(No Data)";
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
            this->label12->Location = System::Drawing::Point(12, 440);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(87, 36);
            this->label12->TabIndex = 84;
            this->label12->Text = L"Hour :";
            // 
            // AddTechcon
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->ClientSize = System::Drawing::Size(759, 678);
            this->Controls->Add(this->thhour);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->thday);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->thclass);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->thsala);
            this->Controls->Add(this->thsalary);
            this->Controls->Add(this->thsub);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->thgenc);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->thlastname);
            this->Controls->Add(this->thjo);
            this->Controls->Add(this->thphonenumber);
            this->Controls->Add(this->thmail);
            this->Controls->Add(this->thdob);
            this->Controls->Add(this->thde);
            this->Controls->Add(this->thid);
            this->Controls->Add(this->thfirstname);
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
            this->Name = L"AddTechcon";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"AddTechcon";
            this->Load += gcnew System::EventHandler(this, &AddTechcon::AddTechcon_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void AddTechcon_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        //Add New Teacher to DB 

        String^ TeacherFN = this->thfirstname->Text;
        String^ TeacherLN = this->thlastname->Text;
        int TeacherIDs = Int32::Parse(thid->Text);
        String^ TeacherDEP = this->thde->Text;
        String^ TeacherBIRTH = this->thdob->Text;
        String^ TeacherEMAIL = this->thmail->Text;
        String^ TeacherPN = this->thphonenumber->Text;
        String^ TeacherJOIN = this->thjo->Text;
        String^ TeacherSALARY = this->thsala->Text;
        String^ TeacherGEND = this->thgenc->Text;
        String^ TeacherSUB = this->thsub->Text;
        String^ TeacherCLASS = this->thclass->Text;
        String^ TeacherDAY = this->thday->Text;
        String^ TeacherHOUR = this->thhour->Text;
        //Connect TO DB
        String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(constr);

        SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO teacherdb VALUES(" + TeacherIDs + ", '" + TeacherFN + "','" + TeacherLN + "','" + TeacherGEND + "','" + TeacherPN + "','" + TeacherBIRTH + "','" + TeacherEMAIL + "','" + TeacherDEP + "','" + TeacherSUB + "','" + TeacherDAY + "','" + TeacherHOUR + "','" + TeacherCLASS + "','" + TeacherSALARY + "','" + TeacherJOIN + "')", sqlConn);
        SqlDataReader^ dr;
        sqlConn->Open();
        dr = cmd->ExecuteReader();
        MessageBox::Show("Teacher Add Successfully");
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
};
}
