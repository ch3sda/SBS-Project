#pragma once

namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StuSchool
	/// </summary>
	public ref class StuSchool : public System::Windows::Forms::Form
	{
	public:
		StuSchool(void)
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
		~StuSchool()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label3;
























	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel19;


	private: System::Windows::Forms::Panel^ panel25;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Panel^ panel41;
    private: System::Windows::Forms::Panel^ panel40;
    private: System::Windows::Forms::Panel^ panel39;
    private: System::Windows::Forms::Panel^ panel24;
    private: System::Windows::Forms::Panel^ panel23;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Panel^ panel46;
    private: System::Windows::Forms::Panel^ panel45;
    private: System::Windows::Forms::Panel^ panel44;
    private: System::Windows::Forms::Panel^ panel43;
    private: System::Windows::Forms::Panel^ panel42;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Panel^ panel53;
    private: System::Windows::Forms::Panel^ panel52;
    private: System::Windows::Forms::Panel^ panel51;
    private: System::Windows::Forms::Panel^ panel50;
    private: System::Windows::Forms::Panel^ panel49;
    private: System::Windows::Forms::Panel^ panel48;
    private: System::Windows::Forms::Panel^ panel47;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Panel^ panel60;
    private: System::Windows::Forms::Panel^ panel59;
    private: System::Windows::Forms::Panel^ panel58;
    private: System::Windows::Forms::Panel^ panel57;
    private: System::Windows::Forms::Panel^ panel56;
    private: System::Windows::Forms::Panel^ panel55;
    private: System::Windows::Forms::Panel^ panel54;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Panel^ panel31;
    private: System::Windows::Forms::Panel^ panel30;
    private: System::Windows::Forms::Panel^ panel29;
    private: System::Windows::Forms::Panel^ panel28;
    private: System::Windows::Forms::Panel^ panel27;
    private: System::Windows::Forms::Panel^ panel26;
    private: System::Windows::Forms::Panel^ panel18;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Panel^ panel38;
    private: System::Windows::Forms::Panel^ panel37;
    private: System::Windows::Forms::Panel^ panel36;
    private: System::Windows::Forms::Panel^ panel35;
    private: System::Windows::Forms::Panel^ panel34;
    private: System::Windows::Forms::Panel^ panel33;
    private: System::Windows::Forms::Panel^ panel32;










































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StuSchool::typeid));
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->panel22 = (gcnew System::Windows::Forms::Panel());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->panel21 = (gcnew System::Windows::Forms::Panel());
            this->panel25 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->panel41 = (gcnew System::Windows::Forms::Panel());
            this->panel40 = (gcnew System::Windows::Forms::Panel());
            this->panel39 = (gcnew System::Windows::Forms::Panel());
            this->panel24 = (gcnew System::Windows::Forms::Panel());
            this->panel23 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel46 = (gcnew System::Windows::Forms::Panel());
            this->panel45 = (gcnew System::Windows::Forms::Panel());
            this->panel44 = (gcnew System::Windows::Forms::Panel());
            this->panel43 = (gcnew System::Windows::Forms::Panel());
            this->panel42 = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->panel53 = (gcnew System::Windows::Forms::Panel());
            this->panel52 = (gcnew System::Windows::Forms::Panel());
            this->panel51 = (gcnew System::Windows::Forms::Panel());
            this->panel50 = (gcnew System::Windows::Forms::Panel());
            this->panel49 = (gcnew System::Windows::Forms::Panel());
            this->panel48 = (gcnew System::Windows::Forms::Panel());
            this->panel47 = (gcnew System::Windows::Forms::Panel());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->panel60 = (gcnew System::Windows::Forms::Panel());
            this->panel59 = (gcnew System::Windows::Forms::Panel());
            this->panel58 = (gcnew System::Windows::Forms::Panel());
            this->panel57 = (gcnew System::Windows::Forms::Panel());
            this->panel56 = (gcnew System::Windows::Forms::Panel());
            this->panel55 = (gcnew System::Windows::Forms::Panel());
            this->panel54 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel31 = (gcnew System::Windows::Forms::Panel());
            this->panel30 = (gcnew System::Windows::Forms::Panel());
            this->panel29 = (gcnew System::Windows::Forms::Panel());
            this->panel28 = (gcnew System::Windows::Forms::Panel());
            this->panel27 = (gcnew System::Windows::Forms::Panel());
            this->panel26 = (gcnew System::Windows::Forms::Panel());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel38 = (gcnew System::Windows::Forms::Panel());
            this->panel37 = (gcnew System::Windows::Forms::Panel());
            this->panel36 = (gcnew System::Windows::Forms::Panel());
            this->panel35 = (gcnew System::Windows::Forms::Panel());
            this->panel34 = (gcnew System::Windows::Forms::Panel());
            this->panel33 = (gcnew System::Windows::Forms::Panel());
            this->panel32 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel1->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel19->SuspendLayout();
            this->panel23->SuspendLayout();
            this->panel42->SuspendLayout();
            this->panel47->SuspendLayout();
            this->panel54->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel18->SuspendLayout();
            this->panel32->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Location = System::Drawing::Point(330, -1758);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(227, 208);
            this->pictureBox4->TabIndex = 21;
            this->pictureBox4->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->Controls->Add(this->panel7);
            this->panel1->Controls->Add(this->panel6);
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->panel4);
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Location = System::Drawing::Point(13, -1092);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(910, 224);
            this->panel1->TabIndex = 76;
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel7->Location = System::Drawing::Point(1007, 23);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(175, 173);
            this->panel7->TabIndex = 79;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel6->Location = System::Drawing::Point(814, 23);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(175, 173);
            this->panel6->TabIndex = 78;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel5->Location = System::Drawing::Point(623, 23);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(175, 173);
            this->panel5->TabIndex = 78;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel4->Location = System::Drawing::Point(421, 23);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(175, 173);
            this->panel4->TabIndex = 78;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel3->Location = System::Drawing::Point(223, 23);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(175, 173);
            this->panel3->TabIndex = 78;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel2->Location = System::Drawing::Point(24, 23);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(175, 173);
            this->panel2->TabIndex = 77;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(2, -1154);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(338, 59);
            this->label4->TabIndex = 77;
            this->label4->Text = L"SCHOOL EVENT";
            // 
            // panel8
            // 
            this->panel8->AutoScroll = true;
            this->panel8->Controls->Add(this->panel11);
            this->panel8->Controls->Add(this->panel10);
            this->panel8->Controls->Add(this->panel9);
            this->panel8->Controls->Add(this->panel14);
            this->panel8->Location = System::Drawing::Point(12, -767);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(910, 224);
            this->panel8->TabIndex = 80;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel11->Location = System::Drawing::Point(1271, 23);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(395, 173);
            this->panel11->TabIndex = 80;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel10->Location = System::Drawing::Point(855, 23);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(395, 173);
            this->panel10->TabIndex = 79;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel9->Location = System::Drawing::Point(441, 23);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(395, 173);
            this->panel9->TabIndex = 78;
            // 
            // panel14
            // 
            this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel14->Location = System::Drawing::Point(24, 23);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(395, 173);
            this->panel14->TabIndex = 77;
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(3, -829);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(343, 59);
            this->label1->TabIndex = 81;
            this->label1->Text = L"POPULAR NOW";
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(3, -510);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(328, 59);
            this->label2->TabIndex = 82;
            this->label2->Text = L"SCHOOL NEWS";
            // 
            // panel12
            // 
            this->panel12->AutoScroll = true;
            this->panel12->Controls->Add(this->panel13);
            this->panel12->Controls->Add(this->panel15);
            this->panel12->Controls->Add(this->panel16);
            this->panel12->Controls->Add(this->panel17);
            this->panel12->Location = System::Drawing::Point(13, -455);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(910, 224);
            this->panel12->TabIndex = 81;
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel13->Location = System::Drawing::Point(1271, 23);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(395, 173);
            this->panel13->TabIndex = 80;
            // 
            // panel15
            // 
            this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel15->Location = System::Drawing::Point(855, 23);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(395, 173);
            this->panel15->TabIndex = 79;
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel16->Location = System::Drawing::Point(441, 23);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(395, 173);
            this->panel16->TabIndex = 78;
            // 
            // panel17
            // 
            this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel17->Location = System::Drawing::Point(24, 23);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(395, 173);
            this->panel17->TabIndex = 77;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(3, -211);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(285, 59);
            this->label3->TabIndex = 84;
            this->label3->Text = L"COLLECTION";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(335, 12);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(198, 198);
            this->pictureBox2->TabIndex = 89;
            this->pictureBox2->TabStop = false;
            // 
            // panel19
            // 
            this->panel19->AutoScroll = true;
            this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel19->Controls->Add(this->panel22);
            this->panel19->Controls->Add(this->panel20);
            this->panel19->Controls->Add(this->panel21);
            this->panel19->Controls->Add(this->panel25);
            this->panel19->Location = System::Drawing::Point(17, 380);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(910, 224);
            this->panel19->TabIndex = 90;
            // 
            // panel22
            // 
            this->panel22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel22->Location = System::Drawing::Point(1275, 23);
            this->panel22->Name = L"panel22";
            this->panel22->Size = System::Drawing::Size(390, 173);
            this->panel22->TabIndex = 80;
            // 
            // panel20
            // 
            this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel20->Location = System::Drawing::Point(856, 23);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(390, 173);
            this->panel20->TabIndex = 79;
            // 
            // panel21
            // 
            this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel21->Location = System::Drawing::Point(441, 23);
            this->panel21->Name = L"panel21";
            this->panel21->Size = System::Drawing::Size(390, 173);
            this->panel21->TabIndex = 78;
            // 
            // panel25
            // 
            this->panel25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel25->Location = System::Drawing::Point(24, 23);
            this->panel25->Name = L"panel25";
            this->panel25->Size = System::Drawing::Size(390, 173);
            this->panel25->TabIndex = 77;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(17, 331);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(328, 59);
            this->label7->TabIndex = 91;
            this->label7->Text = L"SCHOOL NEWS";
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(17, 639);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(338, 59);
            this->label8->TabIndex = 93;
            this->label8->Text = L"SCHOOL EVENT";
            // 
            // panel41
            // 
            this->panel41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel41->Location = System::Drawing::Point(24, 23);
            this->panel41->Name = L"panel41";
            this->panel41->Size = System::Drawing::Size(390, 173);
            this->panel41->TabIndex = 77;
            // 
            // panel40
            // 
            this->panel40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel40->Location = System::Drawing::Point(441, 23);
            this->panel40->Name = L"panel40";
            this->panel40->Size = System::Drawing::Size(390, 173);
            this->panel40->TabIndex = 78;
            // 
            // panel39
            // 
            this->panel39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel39->Location = System::Drawing::Point(856, 23);
            this->panel39->Name = L"panel39";
            this->panel39->Size = System::Drawing::Size(390, 173);
            this->panel39->TabIndex = 79;
            // 
            // panel24
            // 
            this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel24->Location = System::Drawing::Point(1275, 23);
            this->panel24->Name = L"panel24";
            this->panel24->Size = System::Drawing::Size(390, 173);
            this->panel24->TabIndex = 80;
            // 
            // panel23
            // 
            this->panel23->AutoScroll = true;
            this->panel23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel23->Controls->Add(this->panel24);
            this->panel23->Controls->Add(this->panel39);
            this->panel23->Controls->Add(this->panel40);
            this->panel23->Controls->Add(this->panel41);
            this->panel23->Location = System::Drawing::Point(17, 691);
            this->panel23->Name = L"panel23";
            this->panel23->Size = System::Drawing::Size(910, 224);
            this->panel23->TabIndex = 92;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(17, 943);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(343, 59);
            this->label9->TabIndex = 95;
            this->label9->Text = L"POPULAR NOW";
            // 
            // panel46
            // 
            this->panel46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel46->Location = System::Drawing::Point(24, 23);
            this->panel46->Name = L"panel46";
            this->panel46->Size = System::Drawing::Size(390, 173);
            this->panel46->TabIndex = 77;
            // 
            // panel45
            // 
            this->panel45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel45->Location = System::Drawing::Point(441, 23);
            this->panel45->Name = L"panel45";
            this->panel45->Size = System::Drawing::Size(390, 173);
            this->panel45->TabIndex = 78;
            // 
            // panel44
            // 
            this->panel44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel44->Location = System::Drawing::Point(856, 23);
            this->panel44->Name = L"panel44";
            this->panel44->Size = System::Drawing::Size(390, 173);
            this->panel44->TabIndex = 79;
            // 
            // panel43
            // 
            this->panel43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel43->Location = System::Drawing::Point(1275, 23);
            this->panel43->Name = L"panel43";
            this->panel43->Size = System::Drawing::Size(390, 173);
            this->panel43->TabIndex = 80;
            // 
            // panel42
            // 
            this->panel42->AutoScroll = true;
            this->panel42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel42->Controls->Add(this->panel43);
            this->panel42->Controls->Add(this->panel44);
            this->panel42->Controls->Add(this->panel45);
            this->panel42->Controls->Add(this->panel46);
            this->panel42->Location = System::Drawing::Point(17, 996);
            this->panel42->Name = L"panel42";
            this->panel42->Size = System::Drawing::Size(910, 224);
            this->panel42->TabIndex = 94;
            // 
            // label10
            // 
            this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label10->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::White;
            this->label10->Location = System::Drawing::Point(17, 1249);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(259, 59);
            this->label10->TabIndex = 97;
            this->label10->Text = L"DISCOVERY";
            // 
            // panel53
            // 
            this->panel53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel53->Location = System::Drawing::Point(24, 23);
            this->panel53->Name = L"panel53";
            this->panel53->Size = System::Drawing::Size(175, 173);
            this->panel53->TabIndex = 77;
            // 
            // panel52
            // 
            this->panel52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel52->Location = System::Drawing::Point(223, 23);
            this->panel52->Name = L"panel52";
            this->panel52->Size = System::Drawing::Size(175, 173);
            this->panel52->TabIndex = 78;
            // 
            // panel51
            // 
            this->panel51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel51->Location = System::Drawing::Point(421, 23);
            this->panel51->Name = L"panel51";
            this->panel51->Size = System::Drawing::Size(175, 173);
            this->panel51->TabIndex = 78;
            // 
            // panel50
            // 
            this->panel50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel50->Location = System::Drawing::Point(623, 23);
            this->panel50->Name = L"panel50";
            this->panel50->Size = System::Drawing::Size(175, 173);
            this->panel50->TabIndex = 78;
            // 
            // panel49
            // 
            this->panel49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel49->Location = System::Drawing::Point(814, 23);
            this->panel49->Name = L"panel49";
            this->panel49->Size = System::Drawing::Size(175, 173);
            this->panel49->TabIndex = 78;
            // 
            // panel48
            // 
            this->panel48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel48->Location = System::Drawing::Point(1007, 23);
            this->panel48->Name = L"panel48";
            this->panel48->Size = System::Drawing::Size(175, 173);
            this->panel48->TabIndex = 79;
            // 
            // panel47
            // 
            this->panel47->AutoScroll = true;
            this->panel47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel47->Controls->Add(this->panel48);
            this->panel47->Controls->Add(this->panel49);
            this->panel47->Controls->Add(this->panel50);
            this->panel47->Controls->Add(this->panel51);
            this->panel47->Controls->Add(this->panel52);
            this->panel47->Controls->Add(this->panel53);
            this->panel47->Location = System::Drawing::Point(17, 1298);
            this->panel47->Name = L"panel47";
            this->panel47->Size = System::Drawing::Size(910, 224);
            this->panel47->TabIndex = 96;
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label11->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::White;
            this->label11->Location = System::Drawing::Point(19, 1556);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(285, 59);
            this->label11->TabIndex = 99;
            this->label11->Text = L"COLLECTION";
            // 
            // panel60
            // 
            this->panel60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel60->Location = System::Drawing::Point(24, 23);
            this->panel60->Name = L"panel60";
            this->panel60->Size = System::Drawing::Size(175, 173);
            this->panel60->TabIndex = 77;
            // 
            // panel59
            // 
            this->panel59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel59->Location = System::Drawing::Point(223, 23);
            this->panel59->Name = L"panel59";
            this->panel59->Size = System::Drawing::Size(175, 173);
            this->panel59->TabIndex = 78;
            // 
            // panel58
            // 
            this->panel58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel58->Location = System::Drawing::Point(421, 23);
            this->panel58->Name = L"panel58";
            this->panel58->Size = System::Drawing::Size(175, 173);
            this->panel58->TabIndex = 78;
            // 
            // panel57
            // 
            this->panel57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel57->Location = System::Drawing::Point(623, 23);
            this->panel57->Name = L"panel57";
            this->panel57->Size = System::Drawing::Size(175, 173);
            this->panel57->TabIndex = 78;
            // 
            // panel56
            // 
            this->panel56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel56->Location = System::Drawing::Point(814, 23);
            this->panel56->Name = L"panel56";
            this->panel56->Size = System::Drawing::Size(175, 173);
            this->panel56->TabIndex = 78;
            // 
            // panel55
            // 
            this->panel55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel55->Location = System::Drawing::Point(1007, 23);
            this->panel55->Name = L"panel55";
            this->panel55->Size = System::Drawing::Size(175, 173);
            this->panel55->TabIndex = 79;
            // 
            // panel54
            // 
            this->panel54->AutoScroll = true;
            this->panel54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel54->Controls->Add(this->panel55);
            this->panel54->Controls->Add(this->panel56);
            this->panel54->Controls->Add(this->panel57);
            this->panel54->Controls->Add(this->panel58);
            this->panel54->Controls->Add(this->panel59);
            this->panel54->Controls->Add(this->panel60);
            this->panel54->Location = System::Drawing::Point(17, 1605);
            this->panel54->Name = L"panel54";
            this->panel54->Size = System::Drawing::Size(910, 224);
            this->panel54->TabIndex = 98;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(791, 2507);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(126, 70);
            this->pictureBox1->TabIndex = 75;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &StuSchool::pictureBox1_Click);
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(12, 1863);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(240, 59);
            this->label5->TabIndex = 86;
            this->label5->Text = L"SHOPPING";
            // 
            // panel31
            // 
            this->panel31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel31->Location = System::Drawing::Point(24, 23);
            this->panel31->Name = L"panel31";
            this->panel31->Size = System::Drawing::Size(175, 173);
            this->panel31->TabIndex = 77;
            // 
            // panel30
            // 
            this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel30->Location = System::Drawing::Point(223, 23);
            this->panel30->Name = L"panel30";
            this->panel30->Size = System::Drawing::Size(175, 173);
            this->panel30->TabIndex = 78;
            // 
            // panel29
            // 
            this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel29->Location = System::Drawing::Point(421, 23);
            this->panel29->Name = L"panel29";
            this->panel29->Size = System::Drawing::Size(175, 173);
            this->panel29->TabIndex = 78;
            // 
            // panel28
            // 
            this->panel28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel28->Location = System::Drawing::Point(623, 23);
            this->panel28->Name = L"panel28";
            this->panel28->Size = System::Drawing::Size(175, 173);
            this->panel28->TabIndex = 78;
            // 
            // panel27
            // 
            this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel27->Location = System::Drawing::Point(824, 23);
            this->panel27->Name = L"panel27";
            this->panel27->Size = System::Drawing::Size(175, 173);
            this->panel27->TabIndex = 78;
            // 
            // panel26
            // 
            this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel26->Location = System::Drawing::Point(1026, 23);
            this->panel26->Name = L"panel26";
            this->panel26->Size = System::Drawing::Size(175, 173);
            this->panel26->TabIndex = 79;
            // 
            // panel18
            // 
            this->panel18->AutoScroll = true;
            this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel18->Controls->Add(this->panel26);
            this->panel18->Controls->Add(this->panel27);
            this->panel18->Controls->Add(this->panel28);
            this->panel18->Controls->Add(this->panel29);
            this->panel18->Controls->Add(this->panel30);
            this->panel18->Controls->Add(this->panel31);
            this->panel18->Location = System::Drawing::Point(12, 1915);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(910, 224);
            this->panel18->TabIndex = 85;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Candara Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(19, 2169);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(205, 59);
            this->label6->TabIndex = 88;
            this->label6->Text = L"LIBRARY";
            // 
            // panel38
            // 
            this->panel38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel38->Location = System::Drawing::Point(24, 23);
            this->panel38->Name = L"panel38";
            this->panel38->Size = System::Drawing::Size(175, 173);
            this->panel38->TabIndex = 77;
            // 
            // panel37
            // 
            this->panel37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel37->Location = System::Drawing::Point(223, 23);
            this->panel37->Name = L"panel37";
            this->panel37->Size = System::Drawing::Size(175, 173);
            this->panel37->TabIndex = 78;
            // 
            // panel36
            // 
            this->panel36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel36->Location = System::Drawing::Point(421, 23);
            this->panel36->Name = L"panel36";
            this->panel36->Size = System::Drawing::Size(175, 173);
            this->panel36->TabIndex = 78;
            // 
            // panel35
            // 
            this->panel35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel35->Location = System::Drawing::Point(623, 23);
            this->panel35->Name = L"panel35";
            this->panel35->Size = System::Drawing::Size(175, 173);
            this->panel35->TabIndex = 78;
            // 
            // panel34
            // 
            this->panel34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel34->Location = System::Drawing::Point(826, 23);
            this->panel34->Name = L"panel34";
            this->panel34->Size = System::Drawing::Size(175, 173);
            this->panel34->TabIndex = 78;
            // 
            // panel33
            // 
            this->panel33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->panel33->Location = System::Drawing::Point(1029, 23);
            this->panel33->Name = L"panel33";
            this->panel33->Size = System::Drawing::Size(175, 173);
            this->panel33->TabIndex = 79;
            // 
            // panel32
            // 
            this->panel32->AutoScroll = true;
            this->panel32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(59)));
            this->panel32->Controls->Add(this->panel33);
            this->panel32->Controls->Add(this->panel34);
            this->panel32->Controls->Add(this->panel35);
            this->panel32->Controls->Add(this->panel36);
            this->panel32->Controls->Add(this->panel37);
            this->panel32->Controls->Add(this->panel38);
            this->panel32->Location = System::Drawing::Point(16, 2221);
            this->panel32->Name = L"panel32";
            this->panel32->Size = System::Drawing::Size(910, 224);
            this->panel32->TabIndex = 87;
            // 
            // StuSchool
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(72)));
            this->ClientSize = System::Drawing::Size(969, 671);
            this->Controls->Add(this->panel54);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->panel47);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->panel42);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->panel23);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->panel19);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->panel32);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->panel18);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel12);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox4);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Location = System::Drawing::Point(236, 1);
            this->Name = L"StuSchool";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"StuSchool";
            this->Load += gcnew System::EventHandler(this, &StuSchool::StuSchool_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->panel12->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel19->ResumeLayout(false);
            this->panel23->ResumeLayout(false);
            this->panel42->ResumeLayout(false);
            this->panel47->ResumeLayout(false);
            this->panel54->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel18->ResumeLayout(false);
            this->panel32->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void StuSchool_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
