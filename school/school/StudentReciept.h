#pragma once
namespace school {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentReciept
	/// </summary>
	public ref class StudentReciept : public System::Windows::Forms::Form
	{
	public:
		StudentReciept(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentReciept(String^ stdfname, String^ stdlname, String^ stuid
			, String^ stde, String^ stdb, String^ stdem, String^ stdph, String^ stdjoin
			, String^ stdpay2, String^ stdgender2, String^ stdyearx
			, String^ stdcl, String^ stdpmyst,String^ stdpwdss)

		{
			InitializeComponent();
			StudentInvoiceDOC->Clear();
			StudentInvoiceDOC->AppendText("\t\t" + "=======Reciept Invoice========" + "\t\t" + "\n\n");
			StudentInvoiceDOC->AppendText("===========================================================\n\n");
			StudentInvoiceDOC->AppendText("First Name\t:\t" + stdfname + "\n\n");
			StudentInvoiceDOC->AppendText("Last Name\t:\t" + stdlname + "\n\n");
			StudentInvoiceDOC->AppendText("ID\t\t:\t" + stuid + "\n\n");
			StudentInvoiceDOC->AppendText("Gender\t\t:\t" + stdgender2 + "\n\n");
			StudentInvoiceDOC->AppendText("Date of Birth\t:\t" + stdb + "\n\n");
            StudentInvoiceDOC->AppendText("Phone Number\t\:\t" + stdph + "\n\n");
			StudentInvoiceDOC->AppendText("Email\t\t:\t" + stdem + "\n\n");
			StudentInvoiceDOC->AppendText("Department\t:\t" + stde + "\n\n");
			StudentInvoiceDOC->AppendText("Level\t\t:\t" + stdyearx + "\n\n");
			StudentInvoiceDOC->AppendText("Class\t\t:\t" + stdcl + "\n\n");
			StudentInvoiceDOC->AppendText("JoinDate\t\t:\t" + stdjoin + "\n\n");
			StudentInvoiceDOC->AppendText("Fee\t\t:\t" + stdpay2 + "\n\n");
			StudentInvoiceDOC->AppendText("Payment Status\t:\t" + stdpmyst + "\n\n");
			StudentInvoiceDOC->AppendText("Student Password\t:\t" + stdpwdss + "\n\n");
			StudentInvoiceDOC->AppendText("===========================================================\n\n");
			StudentInvoiceDOC->AppendText("=====================SB SYSTEM=====================\n");
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentReciept()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ StudentInvoiceDOC;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;


	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentReciept::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->StudentInvoiceDOC = (gcnew System::Windows::Forms::RichTextBox());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
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
			this->label5->Size = System::Drawing::Size(371, 59);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Student\'s Invoice";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(451, 489);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 41);
			this->pictureBox2->TabIndex = 51;
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
			this->button1->Location = System::Drawing::Point(444, 482);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(224, 59);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Print Invoice";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentReciept::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Brown;
			this->button2->Location = System::Drawing::Point(444, 565);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 58);
			this->button2->TabIndex = 53;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentReciept::button2_Click);
			// 
			// StudentInvoiceDOC
			// 
			this->StudentInvoiceDOC->Location = System::Drawing::Point(22, 113);
			this->StudentInvoiceDOC->Name = L"StudentInvoiceDOC";
			this->StudentInvoiceDOC->ReadOnly = true;
			this->StudentInvoiceDOC->Size = System::Drawing::Size(392, 510);
			this->StudentInvoiceDOC->TabIndex = 54;
			this->StudentInvoiceDOC->Text = L"";
			this->StudentInvoiceDOC->TextChanged += gcnew System::EventHandler(this, &StudentReciept::StudentInvoiceDOC_TextChanged_1);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &StudentReciept::printPreviewDialog1_Load);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &StudentReciept::printDocument1_PrintPage);
			// 
			// StudentReciept
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(701, 661);
			this->Controls->Add(this->StudentInvoiceDOC);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(475, 2);
			this->Name = L"StudentReciept";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"StudentReciept";
			this->Load += gcnew System::EventHandler(this, &StudentReciept::StudentReciept_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentReciept_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*StudentInvoiceDOC->Clear();
		StudentInvoiceDOC->AppendText("\t\t" + "=======Reciept Invoice========" + "\t\t" + "\n");
		StudentInvoiceDOC->AppendText("===========================================================");
		StudentInvoiceDOC->AppendText("First Name :"+"\n");*/

	}
private: System::Void StudentInvoiceDOC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->ShowDialog();

}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Candara", 16, FontStyle::Regular);
	e->Graphics->DrawString(StudentInvoiceDOC->Text, fntString, Brushes::Black, 100, 100);
}
private: System::Void StudentInvoiceDOC_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
