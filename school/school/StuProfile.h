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
	/// Summary for StuProfile
	/// </summary>
	public ref class StuProfile : public System::Windows::Forms::Form
	{
	public:
		StuProfile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StuProfile(String^studentemail)
		{
			InitializeComponent();
            label6->Text = studentemail;
            String^ STUTEMPEM = label6->Text;
            
            try {
                //String^ studentemailtemp = studentemail->Text;
                String^ constr = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=schooldb;Integrated Security=True";
                SqlConnection^ sqlConn = gcnew SqlConnection(constr);
                SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM studentdb WHERE Email='"+STUTEMPEM+"'",sqlConn);//OR FirstName='"+StudentFirstName+"'
                sqlConn->Open();
                SqlDataReader^ dr = cmd->ExecuteReader();
                while (dr->Read())
                {
                    //stdid->Text = dr->GetString(0);
                    UStuID->Text = dr->GetValue(0)->ToString();
                    UStuFN->Text = dr->GetString(1);
                    UStuLN->Text = dr->GetString(2);
                    UStuGEN->Text = dr->GetString(3);
                    UStuPH->Text = dr->GetString(4);
                    UStuDOB->Text = dr->GetString(5);
                    UStuEMAIL->Text = dr->GetString(6);
                    UStuDEP->Text = dr->GetString(7);
                    UStuLEVEL->Text = dr->GetString(8);
                    UStuCLASS->Text = dr->GetString(9);
                    UStuFEE->Text = dr->GetString(10);
                    UStuJOIN->Text = dr->GetString(11);
                    UStuPAYM->Text = dr->GetString(12);
                    UStuPAYM->Text = dr->GetString(13);
                }
                sqlConn->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message);
            }
            
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StuProfile()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ UStuPAYM;
    protected:

    protected:
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ UStuCLASS;

    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ UStuFEE;

    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ UStuLEVEL;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ UStuGEN;


    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ UStuLN;
    private: System::Windows::Forms::Label^ UStuJOIN;




    private: System::Windows::Forms::Label^ UStuPH;
    private: System::Windows::Forms::Label^ UStuEMAIL;


    private: System::Windows::Forms::Label^ UStuDOB;
    private: System::Windows::Forms::Label^ UStuDEP;


    private: System::Windows::Forms::Label^ UStuID;

    private: System::Windows::Forms::Label^ UStuFN;



    private: System::Windows::Forms::Label^ StudentJoin;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ textphone;
    private: System::Windows::Forms::Label^ Studentmail;
    private: System::Windows::Forms::Label^ StudentDepartment;
    private: System::Windows::Forms::Label^ StudentDOB;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Label^ tempemailss;
private: System::Windows::Forms::Label^ label6;









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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StuProfile::typeid));
            this->UStuPAYM = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->UStuCLASS = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->UStuFEE = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->UStuLEVEL = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->UStuGEN = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->UStuLN = (gcnew System::Windows::Forms::Label());
            this->UStuJOIN = (gcnew System::Windows::Forms::Label());
            this->UStuPH = (gcnew System::Windows::Forms::Label());
            this->UStuEMAIL = (gcnew System::Windows::Forms::Label());
            this->UStuDOB = (gcnew System::Windows::Forms::Label());
            this->UStuDEP = (gcnew System::Windows::Forms::Label());
            this->UStuID = (gcnew System::Windows::Forms::Label());
            this->UStuFN = (gcnew System::Windows::Forms::Label());
            this->StudentJoin = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textphone = (gcnew System::Windows::Forms::Label());
            this->Studentmail = (gcnew System::Windows::Forms::Label());
            this->StudentDepartment = (gcnew System::Windows::Forms::Label());
            this->StudentDOB = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->tempemailss = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // UStuPAYM
            // 
            this->UStuPAYM->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuPAYM->AutoSize = true;
            this->UStuPAYM->BackColor = System::Drawing::Color::Transparent;
            this->UStuPAYM->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuPAYM->ForeColor = System::Drawing::Color::White;
            this->UStuPAYM->Location = System::Drawing::Point(704, 790);
            this->UStuPAYM->Name = L"UStuPAYM";
            this->UStuPAYM->Size = System::Drawing::Size(188, 49);
            this->UStuPAYM->TabIndex = 83;
            this->UStuPAYM->Text = L"(No Data)";
            // 
            // label10
            // 
            this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::White;
            this->label10->Location = System::Drawing::Point(420, 790);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(296, 49);
            this->label10->TabIndex = 82;
            this->label10->Text = L"PaymentStatus :";
            // 
            // UStuCLASS
            // 
            this->UStuCLASS->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuCLASS->AutoSize = true;
            this->UStuCLASS->BackColor = System::Drawing::Color::Transparent;
            this->UStuCLASS->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuCLASS->ForeColor = System::Drawing::Color::White;
            this->UStuCLASS->Location = System::Drawing::Point(131, 790);
            this->UStuCLASS->Name = L"UStuCLASS";
            this->UStuCLASS->Size = System::Drawing::Size(188, 49);
            this->UStuCLASS->TabIndex = 81;
            this->UStuCLASS->Text = L"(No Data)";
            this->UStuCLASS->Click += gcnew System::EventHandler(this, &StuProfile::stdclass_Click);
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(17, 790);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(125, 49);
            this->label8->TabIndex = 80;
            this->label8->Text = L"Class :";
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(608, 713);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(40, 49);
            this->label4->TabIndex = 79;
            this->label4->Text = L"$";
            // 
            // UStuFEE
            // 
            this->UStuFEE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuFEE->AutoSize = true;
            this->UStuFEE->BackColor = System::Drawing::Color::Transparent;
            this->UStuFEE->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuFEE->ForeColor = System::Drawing::Color::White;
            this->UStuFEE->Location = System::Drawing::Point(524, 713);
            this->UStuFEE->Name = L"UStuFEE";
            this->UStuFEE->Size = System::Drawing::Size(188, 49);
            this->UStuFEE->TabIndex = 78;
            this->UStuFEE->Text = L"(No Data)";
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(420, 713);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(102, 49);
            this->label9->TabIndex = 77;
            this->label9->Text = L"Fee :";
            // 
            // UStuLEVEL
            // 
            this->UStuLEVEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuLEVEL->AutoSize = true;
            this->UStuLEVEL->BackColor = System::Drawing::Color::Transparent;
            this->UStuLEVEL->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuLEVEL->ForeColor = System::Drawing::Color::White;
            this->UStuLEVEL->Location = System::Drawing::Point(122, 713);
            this->UStuLEVEL->Name = L"UStuLEVEL";
            this->UStuLEVEL->Size = System::Drawing::Size(188, 49);
            this->UStuLEVEL->TabIndex = 76;
            this->UStuLEVEL->Text = L"(No Data)";
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(12, 713);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(130, 49);
            this->label7->TabIndex = 75;
            this->label7->Text = L"Level :";
            // 
            // UStuGEN
            // 
            this->UStuGEN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuGEN->AutoSize = true;
            this->UStuGEN->BackColor = System::Drawing::Color::Transparent;
            this->UStuGEN->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuGEN->ForeColor = System::Drawing::Color::White;
            this->UStuGEN->Location = System::Drawing::Point(186, 410);
            this->UStuGEN->Name = L"UStuGEN";
            this->UStuGEN->Size = System::Drawing::Size(188, 49);
            this->UStuGEN->TabIndex = 74;
            this->UStuGEN->Text = L"(No Data)";
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(16, 410);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(164, 49);
            this->label5->TabIndex = 73;
            this->label5->Text = L"Gender :";
            // 
            // UStuLN
            // 
            this->UStuLN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuLN->AutoSize = true;
            this->UStuLN->BackColor = System::Drawing::Color::Transparent;
            this->UStuLN->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuLN->ForeColor = System::Drawing::Color::White;
            this->UStuLN->Location = System::Drawing::Point(230, 332);
            this->UStuLN->Name = L"UStuLN";
            this->UStuLN->Size = System::Drawing::Size(188, 49);
            this->UStuLN->TabIndex = 72;
            this->UStuLN->Text = L"(No Data)";
            // 
            // UStuJOIN
            // 
            this->UStuJOIN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuJOIN->AutoSize = true;
            this->UStuJOIN->BackColor = System::Drawing::Color::Transparent;
            this->UStuJOIN->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuJOIN->ForeColor = System::Drawing::Color::White;
            this->UStuJOIN->Location = System::Drawing::Point(630, 955);
            this->UStuJOIN->Name = L"UStuJOIN";
            this->UStuJOIN->Size = System::Drawing::Size(188, 49);
            this->UStuJOIN->TabIndex = 71;
            this->UStuJOIN->Text = L"(No Data)";
            // 
            // UStuPH
            // 
            this->UStuPH->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuPH->AutoSize = true;
            this->UStuPH->BackColor = System::Drawing::Color::Transparent;
            this->UStuPH->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuPH->ForeColor = System::Drawing::Color::White;
            this->UStuPH->Location = System::Drawing::Point(310, 558);
            this->UStuPH->Name = L"UStuPH";
            this->UStuPH->Size = System::Drawing::Size(188, 49);
            this->UStuPH->TabIndex = 70;
            this->UStuPH->Text = L"(No Data)";
            // 
            // UStuEMAIL
            // 
            this->UStuEMAIL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuEMAIL->AutoSize = true;
            this->UStuEMAIL->BackColor = System::Drawing::Color::Transparent;
            this->UStuEMAIL->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuEMAIL->ForeColor = System::Drawing::Color::White;
            this->UStuEMAIL->Location = System::Drawing::Point(294, 868);
            this->UStuEMAIL->Name = L"UStuEMAIL";
            this->UStuEMAIL->Size = System::Drawing::Size(188, 49);
            this->UStuEMAIL->TabIndex = 69;
            this->UStuEMAIL->Text = L"(No Data)";
            // 
            // UStuDOB
            // 
            this->UStuDOB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuDOB->AutoSize = true;
            this->UStuDOB->BackColor = System::Drawing::Color::Transparent;
            this->UStuDOB->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuDOB->ForeColor = System::Drawing::Color::White;
            this->UStuDOB->Location = System::Drawing::Point(274, 479);
            this->UStuDOB->Name = L"UStuDOB";
            this->UStuDOB->Size = System::Drawing::Size(188, 49);
            this->UStuDOB->TabIndex = 68;
            this->UStuDOB->Text = L"(No Data)";
            // 
            // UStuDEP
            // 
            this->UStuDEP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuDEP->AutoSize = true;
            this->UStuDEP->BackColor = System::Drawing::Color::Transparent;
            this->UStuDEP->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuDEP->ForeColor = System::Drawing::Color::White;
            this->UStuDEP->Location = System::Drawing::Point(264, 639);
            this->UStuDEP->Name = L"UStuDEP";
            this->UStuDEP->Size = System::Drawing::Size(188, 49);
            this->UStuDEP->TabIndex = 67;
            this->UStuDEP->Text = L"(No Data)";
            // 
            // UStuID
            // 
            this->UStuID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuID->AutoSize = true;
            this->UStuID->BackColor = System::Drawing::Color::Transparent;
            this->UStuID->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuID->ForeColor = System::Drawing::Color::White;
            this->UStuID->Location = System::Drawing::Point(504, 410);
            this->UStuID->Name = L"UStuID";
            this->UStuID->Size = System::Drawing::Size(188, 49);
            this->UStuID->TabIndex = 66;
            this->UStuID->Text = L"(No Data)";
            // 
            // UStuFN
            // 
            this->UStuFN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->UStuFN->AutoSize = true;
            this->UStuFN->BackColor = System::Drawing::Color::Transparent;
            this->UStuFN->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->UStuFN->ForeColor = System::Drawing::Color::White;
            this->UStuFN->Location = System::Drawing::Point(567, 332);
            this->UStuFN->Name = L"UStuFN";
            this->UStuFN->Size = System::Drawing::Size(188, 49);
            this->UStuFN->TabIndex = 65;
            this->UStuFN->Text = L"(No Data)";
            // 
            // StudentJoin
            // 
            this->StudentJoin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->StudentJoin->AutoSize = true;
            this->StudentJoin->BackColor = System::Drawing::Color::Transparent;
            this->StudentJoin->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StudentJoin->ForeColor = System::Drawing::Color::White;
            this->StudentJoin->Location = System::Drawing::Point(420, 955);
            this->StudentJoin->Name = L"StudentJoin";
            this->StudentJoin->Size = System::Drawing::Size(204, 49);
            this->StudentJoin->TabIndex = 64;
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
            this->label2->Location = System::Drawing::Point(318, 180);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(247, 64);
            this->label2->TabIndex = 63;
            this->label2->Text = L"My Profile";
            // 
            // textphone
            // 
            this->textphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textphone->AutoSize = true;
            this->textphone->BackColor = System::Drawing::Color::Transparent;
            this->textphone->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textphone->ForeColor = System::Drawing::Color::White;
            this->textphone->Location = System::Drawing::Point(16, 558);
            this->textphone->Name = L"textphone";
            this->textphone->Size = System::Drawing::Size(294, 49);
            this->textphone->TabIndex = 62;
            this->textphone->Text = L"Phone Number :";
            // 
            // Studentmail
            // 
            this->Studentmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Studentmail->AutoSize = true;
            this->Studentmail->BackColor = System::Drawing::Color::Transparent;
            this->Studentmail->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Studentmail->ForeColor = System::Drawing::Color::White;
            this->Studentmail->Location = System::Drawing::Point(12, 868);
            this->Studentmail->Name = L"Studentmail";
            this->Studentmail->Size = System::Drawing::Size(276, 49);
            this->Studentmail->TabIndex = 61;
            this->Studentmail->Text = L"Email Address :";
            // 
            // StudentDepartment
            // 
            this->StudentDepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->StudentDepartment->AutoSize = true;
            this->StudentDepartment->BackColor = System::Drawing::Color::Transparent;
            this->StudentDepartment->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StudentDepartment->ForeColor = System::Drawing::Color::White;
            this->StudentDepartment->Location = System::Drawing::Point(12, 639);
            this->StudentDepartment->Name = L"StudentDepartment";
            this->StudentDepartment->Size = System::Drawing::Size(246, 49);
            this->StudentDepartment->TabIndex = 60;
            this->StudentDepartment->Text = L"Department :";
            // 
            // StudentDOB
            // 
            this->StudentDOB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->StudentDOB->AutoSize = true;
            this->StudentDOB->BackColor = System::Drawing::Color::Transparent;
            this->StudentDOB->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StudentDOB->ForeColor = System::Drawing::Color::White;
            this->StudentDOB->Location = System::Drawing::Point(14, 479);
            this->StudentDOB->Name = L"StudentDOB";
            this->StudentDOB->Size = System::Drawing::Size(254, 49);
            this->StudentDOB->TabIndex = 59;
            this->StudentDOB->Text = L"Date of Birth :";
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(420, 410);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(78, 49);
            this->label3->TabIndex = 58;
            this->label3->Text = L"ID :";
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Candara Light", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(14, 332);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(207, 49);
            this->label1->TabIndex = 57;
            this->label1->Text = L"Full Name :";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(351, 9);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(174, 168);
            this->pictureBox2->TabIndex = 84;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(713, 1019);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(204, 104);
            this->pictureBox4->TabIndex = 85;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &StuProfile::pictureBox4_Click);
            // 
            // tempemailss
            // 
            this->tempemailss->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tempemailss->BackColor = System::Drawing::Color::Transparent;
            this->tempemailss->Font = (gcnew System::Drawing::Font(L"Candara Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tempemailss->ForeColor = System::Drawing::Color::White;
            this->tempemailss->Location = System::Drawing::Point(17, 119);
            this->tempemailss->Name = L"tempemailss";
            this->tempemailss->Size = System::Drawing::Size(0, 33);
            this->tempemailss->TabIndex = 87;
            this->tempemailss->Text = L"studentemail";
            this->tempemailss->Visible = false;
            this->tempemailss->Click += gcnew System::EventHandler(this, &StuProfile::label6_Click);
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Candara Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(16, 140);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(51, 13);
            this->label6->TabIndex = 88;
            this->label6->Text = L"(No Data)";
            this->label6->Visible = false;
            // 
            // StuProfile
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(986, 678);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->tempemailss);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->UStuPAYM);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->UStuCLASS);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->UStuFEE);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->UStuLEVEL);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->UStuGEN);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->UStuLN);
            this->Controls->Add(this->UStuJOIN);
            this->Controls->Add(this->UStuPH);
            this->Controls->Add(this->UStuEMAIL);
            this->Controls->Add(this->UStuDOB);
            this->Controls->Add(this->UStuDEP);
            this->Controls->Add(this->UStuID);
            this->Controls->Add(this->UStuFN);
            this->Controls->Add(this->StudentJoin);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textphone);
            this->Controls->Add(this->Studentmail);
            this->Controls->Add(this->StudentDepartment);
            this->Controls->Add(this->StudentDOB);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(236, 1);
            this->Name = L"StuProfile";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"StuProfile";
            this->Load += gcnew System::EventHandler(this, &StuProfile::StuProfile_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void StuProfile_Load(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
    }
private: System::Void temp2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stdclass_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
