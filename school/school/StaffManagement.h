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
	/// Summary for StaffManagement
	/// </summary>
	public ref class StaffManagement : public System::Windows::Forms::Form
	{
	public:
		StaffManagement(void)
		{
            InitializeComponent();
            //For refresh the table automaticly
            //should be off if using on ur device to avoid database crash

			/*
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);
            SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from staffdb", sqlConn);
            DataTable^ StudentDataTable = gcnew DataTable();
            SearchStudentData->Fill(StudentDataTable);
            bindingstaffview->DataSource = StudentDataTable;
            StaffDataView->DataSource = bindingstaffview;
            */
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StaffManagement()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::ComboBox^ StaffDay;
    private: System::Windows::Forms::ComboBox^ StaffPosition;





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
    private: System::Windows::Forms::DataGridView^ StaffDataView;

    private: System::Windows::Forms::BindingSource^ bindingstaffview;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffManagement::typeid));
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
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
            this->StaffDataView = (gcnew System::Windows::Forms::DataGridView());
            this->bindingstaffview = (gcnew System::Windows::Forms::BindingSource(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StaffDataView))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingstaffview))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Location = System::Drawing::Point(526, 603);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(39, 51);
            this->pictureBox3->TabIndex = 194;
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
            this->button3->Location = System::Drawing::Point(514, 597);
            this->button3->Name = L"button3";
            this->button3->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button3->Size = System::Drawing::Size(178, 60);
            this->button3->TabIndex = 195;
            this->button3->Text = L" Refresh";
            this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &StaffManagement::button3_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
            this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox5->Location = System::Drawing::Point(478, 385);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(37, 41);
            this->pictureBox5->TabIndex = 192;
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
            this->button4->Location = System::Drawing::Point(471, 378);
            this->button4->Name = L"button4";
            this->button4->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button4->Size = System::Drawing::Size(224, 59);
            this->button4->TabIndex = 193;
            this->button4->Text = L"Delete";
            this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &StaffManagement::button4_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(18, 385);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(37, 41);
            this->pictureBox1->TabIndex = 190;
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
            this->button2->Location = System::Drawing::Point(11, 378);
            this->button2->Name = L"button2";
            this->button2->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button2->Size = System::Drawing::Size(224, 59);
            this->button2->TabIndex = 191;
            this->button2->Text = L"Search";
            this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &StaffManagement::button2_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(248, 385);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(37, 41);
            this->pictureBox2->TabIndex = 188;
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
            this->button1->Location = System::Drawing::Point(241, 378);
            this->button1->Name = L"button1";
            this->button1->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
            this->button1->Size = System::Drawing::Size(224, 59);
            this->button1->TabIndex = 189;
            this->button1->Text = L"Update";
            this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &StaffManagement::button1_Click);
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
            this->label5->Location = System::Drawing::Point(1, 4);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(436, 64);
            this->label5->TabIndex = 187;
            this->label5->Text = L"Staff Management";
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
            this->label11->Location = System::Drawing::Point(257, 295);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(61, 36);
            this->label11->TabIndex = 186;
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
            this->label9->Location = System::Drawing::Point(496, 218);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(112, 36);
            this->label9->TabIndex = 185;
            this->label9->Text = L"Position";
            // 
            // StaffDay
            // 
            this->StaffDay->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffDay->FormattingEnabled = true;
            this->StaffDay->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"WeekDay", L"Weekend", L"All" });
            this->StaffDay->Location = System::Drawing::Point(263, 334);
            this->StaffDay->Name = L"StaffDay";
            this->StaffDay->Size = System::Drawing::Size(96, 21);
            this->StaffDay->TabIndex = 183;
            // 
            // StaffPosition
            // 
            this->StaffPosition->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffPosition->FormattingEnabled = true;
            this->StaffPosition->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
                L"Mathematics", L"Programming", L"Computer Fundamental",
                    L"Physics", L"History", L"Critcal Thinking", L"Academic Skill", L"General English", L"Statistics", L"Techincal Drawning", L"Philosophy & Socialogy"
            });
            this->StaffPosition->Location = System::Drawing::Point(502, 259);
            this->StaffPosition->Name = L"StaffPosition";
            this->StaffPosition->Size = System::Drawing::Size(181, 21);
            this->StaffPosition->TabIndex = 182;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(558, 4);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(142, 80);
            this->pictureBox4->TabIndex = 180;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &StaffManagement::pictureBox4_Click);
            // 
            // StaffSalary
            // 
            this->StaffSalary->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffSalary->Location = System::Drawing::Point(19, 332);
            this->StaffSalary->Name = L"StaffSalary";
            this->StaffSalary->Size = System::Drawing::Size(232, 33);
            this->StaffSalary->TabIndex = 178;
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
            this->label7->Location = System::Drawing::Point(14, 293);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(104, 36);
            this->label7->TabIndex = 179;
            this->label7->Text = L"Salary $";
            // 
            // StaffHour
            // 
            this->StaffHour->ForeColor = System::Drawing::SystemColors::WindowText;
            this->StaffHour->FormattingEnabled = true;
            this->StaffHour->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Part Time", L"Full Time" });
            this->StaffHour->Location = System::Drawing::Point(373, 334);
            this->StaffHour->Name = L"StaffHour";
            this->StaffHour->Size = System::Drawing::Size(121, 21);
            this->StaffHour->TabIndex = 177;
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
            this->label6->Location = System::Drawing::Point(367, 295);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(86, 36);
            this->label6->TabIndex = 176;
            this->label6->Text = L"Hours";
            // 
            // StaffGender
            // 
            this->StaffGender->FormattingEnabled = true;
            this->StaffGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->StaffGender->Location = System::Drawing::Point(502, 178);
            this->StaffGender->Name = L"StaffGender";
            this->StaffGender->Size = System::Drawing::Size(138, 21);
            this->StaffGender->TabIndex = 175;
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
            this->label4->Location = System::Drawing::Point(494, 143);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(103, 36);
            this->label4->TabIndex = 174;
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
            this->textjoin->Location = System::Drawing::Point(507, 293);
            this->textjoin->Name = L"textjoin";
            this->textjoin->Size = System::Drawing::Size(133, 36);
            this->textjoin->TabIndex = 173;
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
            this->StaffJoin->Location = System::Drawing::Point(500, 329);
            this->StaffJoin->Name = L"StaffJoin";
            this->StaffJoin->Size = System::Drawing::Size(177, 20);
            this->StaffJoin->TabIndex = 172;
            // 
            // StaffDepartment
            // 
            this->StaffDepartment->FormattingEnabled = true;
            this->StaffDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Information Technology Engineering", L"Telecommunication & Electronics Engineering ",
                    L"Bio-Engineering Biotechnology", L"Automation & Supply Chain Systems", L"Data Science And Engineering", L"Environmental Engineering",
                    L"Food Technology Engineering"
            });
            this->StaffDepartment->Location = System::Drawing::Point(263, 257);
            this->StaffDepartment->Name = L"StaffDepartment";
            this->StaffDepartment->Size = System::Drawing::Size(231, 21);
            this->StaffDepartment->TabIndex = 171;
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
            this->label8->Location = System::Drawing::Point(14, 143);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(196, 36);
            this->label8->TabIndex = 170;
            this->label8->Text = L"Phone Number";
            // 
            // StaffPhoneNumber
            // 
            this->StaffPhoneNumber->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffPhoneNumber->Location = System::Drawing::Point(20, 182);
            this->StaffPhoneNumber->Name = L"StaffPhoneNumber";
            this->StaffPhoneNumber->Size = System::Drawing::Size(231, 33);
            this->StaffPhoneNumber->TabIndex = 169;
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
            this->textemail->Location = System::Drawing::Point(14, 218);
            this->textemail->Name = L"textemail";
            this->textemail->Size = System::Drawing::Size(184, 36);
            this->textemail->TabIndex = 168;
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
            this->txtdob->Location = System::Drawing::Point(257, 143);
            this->txtdob->Name = L"txtdob";
            this->txtdob->Size = System::Drawing::Size(167, 36);
            this->txtdob->TabIndex = 167;
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
            this->textdep->Location = System::Drawing::Point(257, 218);
            this->textdep->Name = L"textdep";
            this->textdep->Size = System::Drawing::Size(162, 36);
            this->textdep->TabIndex = 166;
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
            this->label3->Location = System::Drawing::Point(496, 68);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(42, 36);
            this->label3->TabIndex = 165;
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
            this->label2->Location = System::Drawing::Point(257, 68);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(143, 36);
            this->label2->TabIndex = 164;
            this->label2->Text = L"Last Name";
            // 
            // StaffLastName
            // 
            this->StaffLastName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffLastName->Location = System::Drawing::Point(263, 107);
            this->StaffLastName->Name = L"StaffLastName";
            this->StaffLastName->Size = System::Drawing::Size(231, 33);
            this->StaffLastName->TabIndex = 162;
            // 
            // Staffmail
            // 
            this->Staffmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Staffmail->Location = System::Drawing::Point(20, 257);
            this->Staffmail->Name = L"Staffmail";
            this->Staffmail->Size = System::Drawing::Size(231, 33);
            this->Staffmail->TabIndex = 161;
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
            this->StaffDOB->Location = System::Drawing::Point(257, 179);
            this->StaffDOB->Name = L"StaffDOB";
            this->StaffDOB->Size = System::Drawing::Size(231, 20);
            this->StaffDOB->TabIndex = 159;
            // 
            // StaffID
            // 
            this->StaffID->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffID->Location = System::Drawing::Point(502, 107);
            this->StaffID->Name = L"StaffID";
            this->StaffID->Size = System::Drawing::Size(95, 33);
            this->StaffID->TabIndex = 160;
            // 
            // StaffFirstName
            // 
            this->StaffFirstName->Font = (gcnew System::Drawing::Font(L"Candara Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffFirstName->Location = System::Drawing::Point(20, 107);
            this->StaffFirstName->Name = L"StaffFirstName";
            this->StaffFirstName->Size = System::Drawing::Size(231, 33);
            this->StaffFirstName->TabIndex = 158;
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
            this->label1->Location = System::Drawing::Point(14, 68);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(144, 36);
            this->label1->TabIndex = 163;
            this->label1->Text = L"First Name";
            // 
            // StaffDataView
            // 
            this->StaffDataView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->StaffDataView->Location = System::Drawing::Point(19, 443);
            this->StaffDataView->Name = L"StaffDataView";
            this->StaffDataView->Size = System::Drawing::Size(670, 148);
            this->StaffDataView->TabIndex = 196;
            this->StaffDataView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffManagement::StaffDataView_CellClick);
            this->StaffDataView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffManagement::StaffDataView_CellContentClick);
            // 
            // StaffManagement
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(701, 661);
            this->Controls->Add(this->StaffDataView);
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
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(475, 1);
            this->Name = L"StaffManagement";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"StaffManagement";
            this->Load += gcnew System::EventHandler(this, &StaffManagement::StaffManagement_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StaffDataView))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingstaffview))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        int id = Int32::Parse(StaffID->Text);
        String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(constr);
        SqlCommand^ cmd = gcnew SqlCommand("select * from staffdb WHERE Id=" + id + "", sqlConn);
        sqlConn->Open();
        SqlDataReader^ dr = cmd->ExecuteReader();
        while (dr->Read())
        {
            StaffFirstName->Text = dr->GetString(1);
            StaffLastName->Text = dr->GetString(2);
            StaffGender->Text = dr->GetString(3);
            StaffPhoneNumber->Text = dr->GetString(4);
            StaffDOB->Text = dr->GetString(5);
            Staffmail->Text = dr->GetString(6);
            StaffDepartment->Text = dr->GetString(7);
            StaffPosition->Text = dr->GetString(8);
            StaffDay->Text = dr->GetString(9);
            StaffHour->Text = dr->GetString(10);
            StaffSalary->Text = dr->GetString(11);
            StaffJoin->Text = dr->GetString(12);
        }
        sqlConn->Close();
        SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from staffdb", sqlConn);
        DataTable^ StudentDataTable = gcnew DataTable();
        SearchStudentData->Fill(StudentDataTable);
        bindingstaffview->DataSource = StudentDataTable;
        StaffDataView->DataSource = bindingstaffview;

    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
    SqlConnection^ sqlConn = gcnew SqlConnection(constr);
    SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from staffdb", sqlConn);
    DataTable^ StudentDataTable = gcnew DataTable();
    SearchStudentData->Fill(StudentDataTable);
    bindingstaffview->DataSource = StudentDataTable;
    StaffDataView->DataSource = bindingstaffview;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    int StaffIDs = Int32::Parse(StaffID->Text);
    if (MessageBox::Show("Are you sure you want to update this Staff ID=" + StaffID + "?", "Update Staff", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        try {
            String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(constr);


            String^ StaffFN = this->StaffFirstName->Text;
            String^ StaffLN = this->StaffLastName->Text;
            String^ StaffDEP = this->StaffDepartment->Text;
            String^ StaffBIRTH = this->StaffDOB->Text;
            String^ StaffEMAIL = this->Staffmail->Text;
            String^ StaffPN = this->StaffPhoneNumber->Text;
            String^ StaffJOIN = this->StaffJoin->Text;
            String^ StaffSALARY = this->StaffSalary->Text;
            String^ StaffGEND = this->StaffGender->Text;
            String^ StaffPS = this->StaffPosition->Text;
            String^ StaffDAY = this->StaffDay->Text;
            String^ StaffHOUR = this->StaffHour->Text;

            SqlCommand^ cmd = gcnew SqlCommand("update staffdb set FirstName='" + StaffFN + "',LastName='" + StaffLN + "',Gender='" + StaffGEND + "',PhoneNumber='" + StaffPN + "',DoB='" + StaffBIRTH + "',Email='" + StaffEMAIL + "',Department='" + StaffDEP + "',Position='" + StaffPS + "',Day='" + StaffDAY + "',Hour='" + StaffHOUR + "',Salary='" + StaffSALARY + "',JoinDate='" + StaffJOIN + "'WHERE Id=" + StaffIDs + "", sqlConn);
            sqlConn->Open();
            SqlDataReader^ dr = cmd->ExecuteReader();
            sqlConn->Close();
            SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from staffdb", sqlConn);
            DataTable^ StudentDataTable = gcnew DataTable();
            SearchStudentData->Fill(StudentDataTable);
            bindingstaffview->DataSource = StudentDataTable;
            StaffDataView->DataSource = bindingstaffview;
            MessageBox::Show("Staff Updated Successfully");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
    }
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    int StaffIDs = Int32::Parse(StaffID->Text);
    if (MessageBox::Show("Are you sure you want to remove this Staff ID=" + StaffID + "?", "Remove Staff", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
    try {
       
        String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(constr);
        SqlCommand^ cmd = gcnew SqlCommand("delete from staffdb WHERE Id=" + StaffIDs + "", sqlConn);
        sqlConn->Open();
        SqlDataReader^ dr = cmd->ExecuteReader();
        sqlConn->Close();
        SqlDataAdapter^ SearchStudentData = gcnew SqlDataAdapter("select * from staffdb", sqlConn);
        DataTable^ StudentDataTable = gcnew DataTable();
        SearchStudentData->Fill(StudentDataTable);
        bindingstaffview->DataSource = StudentDataTable;
        StaffDataView->DataSource = bindingstaffview;
        MessageBox::Show("Staff Deleted Successfully");
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }}
}
private: System::Void StaffManagement_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StaffDataView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void StaffDataView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    try {
        StaffID->Text = StaffDataView->SelectedRows[0]->Cells[0]->Value->ToString();
        StaffFirstName->Text = StaffDataView->SelectedRows[0]->Cells[1]->Value->ToString();
        StaffLastName->Text = StaffDataView->SelectedRows[0]->Cells[2]->Value->ToString();
        StaffGender->Text = StaffDataView->SelectedRows[0]->Cells[3]->Value->ToString();
        StaffPhoneNumber->Text = StaffDataView->SelectedRows[0]->Cells[4]->Value->ToString();
        Staffmail->Text = StaffDataView->SelectedRows[0]->Cells[6]->Value->ToString();
        StaffDepartment->Text = StaffDataView->SelectedRows[0]->Cells[7]->Value->ToString();
        StaffPosition->Text = StaffDataView->SelectedRows[0]->Cells[8]->Value->ToString();
        StaffDay->Text = StaffDataView->SelectedRows[0]->Cells[9]->Value->ToString();
        StaffHour->Text = StaffDataView->SelectedRows[0]->Cells[10]->Value->ToString();
        StaffSalary->Text = StaffDataView->SelectedRows[0]->Cells[11]->Value->ToString();
        DateTime StaffDOB = DateTime::Parse(StaffDataView->SelectedRows[0]->Cells[5]->Value->ToString());;       //Datetime didnt work
        DateTime StaffJoin = DateTime::Parse(StaffDataView->SelectedRows[0]->Cells[12]->Value->ToString()); //Datetime didnt work
        /*
        int StaffIDs = Int32::Parse(StaffID->Text);
        String^ StaffFN = this->StaffFirstName->Text;
        String^ StaffLN = this->StaffLastName->Text;
        String^ StaffDEP = this->StaffDepartment->Text;
        String^ StaffBIRTH = this->StaffDOB->Text;
        String^ StaffEMAIL = this->Staffmail->Text;
        String^ StaffPN = this->StaffPhoneNumber->Text;
        String^ StaffJOIN = this->StaffJoin->Text;
        String^ StaffSALARY = this->StaffSalary->Text;
        String^ StaffGEND = this->StaffGender->Text;
        String^ StaffPS = this->StaffPosition->Text;
        String^ StaffDAY = this->StaffDay->Text;
        String^ StaffHOUR = this->StaffHour->Text;*/
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
};
}
