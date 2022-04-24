#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private:

	public:








	private:

	public:













	


	public: System::Windows::Forms::TrackBar^ trackBar3;
	private:

	private:
	private: System::Windows::Forms::Panel^ panel3;
	public:
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel5;
	public: System::Windows::Forms::TrackBar^ trackBar1;
	private:
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создательToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label6;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::ImageList^ imageList1;
	public:

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создательToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->axWindowsMediaPlayer1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->menuStrip2);
			this->panel1->Controls->Add(this->trackBar3);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(858, 695);
			this->panel1->TabIndex = 2;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 25);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(858, 600);
			this->axWindowsMediaPlayer1->TabIndex = 15;
			this->axWindowsMediaPlayer1->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &MyForm::axWindowsMediaPlayer1_PlayStateChange);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(0, 625);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"00:00:00";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(0);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->информацияToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(0);
			this->menuStrip2->Size = System::Drawing::Size(858, 24);
			this->menuStrip2->TabIndex = 14;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->открытьToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 24);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->открытьToolStripMenuItem->Text = L"Відкрити...";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click_1);
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->создательToolStripMenuItem,
					this->toolStripMenuItem2
			});
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->информацияToolStripMenuItem->Text = L"Інформація";
			// 
			// создательToolStripMenuItem
			// 
			this->создательToolStripMenuItem->BackColor = System::Drawing::Color::Black;
			this->создательToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem });
			this->создательToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->создательToolStripMenuItem->Name = L"создательToolStripMenuItem";
			this->создательToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->создательToolStripMenuItem->Text = L"Творець";
			// 
			// этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem
			// 
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->BackColor = System::Drawing::Color::Black;
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold",
				9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->Name = L"этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem";
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->Size = System::Drawing::Size(436, 22);
			this->этотПроектСозданУченикомГруппыІН13ШеліховимДмитройToolStripMenuItem->Text = L"Цей проект створено учнем групи ІН-13, Шеліховим Дмитром";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackColor = System::Drawing::Color::Black;
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem });
			this->toolStripMenuItem2->ForeColor = System::Drawing::Color::White;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(119, 22);
			this->toolStripMenuItem2->Text = L"База";
			// 
			// проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem
			// 
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->BackColor = System::Drawing::Color::Black;
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold",
				9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->Name = L"проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuIte"
				L"m";
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->Size = System::Drawing::Size(617, 22);
			this->проектСозданНаБазеWinFormАВесьФункционалИСобытияБылиНаписанныНаСCToolStripMenuItem->Text = L"Проект створено за допомогою WinForm, а весь функціонал і події були створені на "
				L"базі C++";
			// 
			// trackBar3
			// 
			this->trackBar3->AccessibleName = L"";
			this->trackBar3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar3->AutoSize = false;
			this->trackBar3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->trackBar3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->trackBar3->Location = System::Drawing::Point(65, 625);
			this->trackBar3->Maximum = 100;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(793, 24);
			this->trackBar3->TabIndex = 11;
			this->trackBar3->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->trackBar1);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 647);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(858, 48);
			this->panel3->TabIndex = 10;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Controls->Add(this->label3);
			this->panel8->Location = System::Drawing::Point(164, 13);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(150, 28);
			this->panel8->TabIndex = 6;
			this->panel8->Visible = false;
			// 
			// label5
			// 
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(99, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 26);
			this->label5->TabIndex = 11;
			this->label5->Text = L"2X";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Snap ITC", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"1X";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 26);
			this->label3->TabIndex = 9;
			this->label3->Text = L"0.5X";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(116, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(36, 29);
			this->panel7->TabIndex = 5;
			this->panel7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel7_MouseMove);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(620, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 35);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Слава Україні!";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(65, 13);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(36, 28);
			this->panel5->TabIndex = 3;
			this->panel5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel5_MouseMove);
			// 
			// trackBar1
			// 
			this->trackBar1->AccessibleDescription = L"";
			this->trackBar1->AccessibleName = L"";
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->trackBar1->AutoSize = false;
			this->trackBar1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->trackBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->trackBar1->Location = System::Drawing::Point(116, 20);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(133, 14);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 50;
			this->trackBar1->Visible = false;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar1_ValueChanged);
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel4->Location = System::Drawing::Point(10, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(40, 28);
			this->panel4->TabIndex = 0;
			this->panel4->Click += gcnew System::EventHandler(this, &MyForm::panel4_Click);
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 963);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 28);
			this->label1->TabIndex = 9;
			this->label1->Text = L"00:00:00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick_1);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"imgonline-com-ua-Resize-DE8ErB83YMm4Hk58.png");
			this->imageList1->Images->SetKeyName(1, L"unnamed.png");
			this->imageList1->Images->SetKeyName(2, L"pngwing.com.png");
			this->imageList1->Images->SetKeyName(3, L"pngwing4.com.png");
			this->imageList1->Images->SetKeyName(4, L"pngwing5.com.png");
			this->imageList1->Images->SetKeyName(5, L"pngwing.com.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 695);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(763, 485);
			this->Name = L"MyForm";
			this->Text = L"TRMediaPlayer";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void открытьToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 2; i++)
		{
			openFileDialog1->Filter = "All Media Files (*.*)|*.wav;*.aac;*.wma;*.wmv;*.avi;*.mpg;*.mpeg;*.m1v;*.mp2;*.mp3;*.mpa;*.mpe;*.m3u;*.mp4;*.mov;*.3g2;*.3gp2;*.3gp;*.3gpp;*.m4a;*.cda;*.aif;*.aifc;*.aiff;*.mid;*.midi;*.rmi;*.mkv;*.WAV;*.AAC;*.WMA;*.WMV;*.AVI;*.MPG;*.MPEG;*.M1V;*.MP2;*.MP3;*.MPA;*.MPE;*.M3U;*.MP4;*.MOV;*.3G2;*.3GP2;*.3GP;*.3GPP;*.M4A;*.CDA;*.AIF;*.AIFC;*.AIFF;*.MID;*.MIDI;*.RMI;*.MKV|Cursova File|*.mp4;*.wmv;*.avi;*.mkv";
		}
		String^ File = "";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			File = openFileDialog1->FileName;
		}
		try {
			axWindowsMediaPlayer1->URL = File;
		}
		catch (Exception^ e) {
			MessageBox::Show(this, "Файл не вдалося відкрити", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   int k = 0;

	private: System::Void panel4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (k == 0)
		{
			panel4->BackgroundImage = imageList1->Images[0];
			axWindowsMediaPlayer1->Ctlcontrols->pause();
			k++;
		}
		else
		{
			panel4->BackgroundImage = imageList1->Images[1];
			axWindowsMediaPlayer1->Ctlcontrols->play();
			k--;
		}
	}
	private: System::Void panel5_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		trackBar1->Visible = true;
		panel7->Left = 270;
		panel8->Left = 315;
	}
	private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
		if (trackBar1->Value < 1)
		{
			panel5->BackgroundImage = imageList1->Images[2];
		}
		else if (trackBar1->Value >= 1 && trackBar1->Value <= 30)
		{
			panel5->BackgroundImage = imageList1->Images[4];
		}
		else if (trackBar1->Value > 30 && trackBar1->Value <= 70)
		{
			panel5->BackgroundImage = imageList1->Images[3];
		}
		else
		{
			panel5->BackgroundImage = imageList1->Images[5];
		}
	}
	private: System::Void panel7_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		panel8->Visible = true;
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->settings->rate = 0.5f;
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->settings->rate = 1.0f;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->settings->rate = 2.0f;
	}
		   int k2 = 0;
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (k2 == 0)
		{
			label2->Text = "Героям слава!";
			k2++;
		}
		else
		{
			label2->Text = "Слава Україні!";
			k2--;
		}
	}
	private: System::Void axWindowsMediaPlayer1_PlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
		timer1->Enabled = true;
		timer1->Interval = 1000;
	}
	private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->Ctlcontrols->currentPosition = trackBar3->Value;
	}
	private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		trackBar3->Maximum = System::Convert::ToInt32(axWindowsMediaPlayer1->currentMedia->duration) + 1;
		trackBar3->Value = System::Convert::ToInt32(axWindowsMediaPlayer1->Ctlcontrols->currentPosition);
		if (trackBar3->Value < trackBar3->Minimum || trackBar3->Value > trackBar3->Maximum)
		{
			MessageBox::Show("К сожалению при запуске видео что-то пошло не так, попробуйте снова или поменяйте разширения вашего видео", "Что-то пошло не так(", MessageBoxButtons::OK);
			return;
		}
		int pl = System::Convert::ToInt32(axWindowsMediaPlayer1->Ctlcontrols->currentPosition);
		int pl2 =5/ 3600;
		int pl3 = (pl - (pl2 * 3600)) / 60;
		pl = pl - (pl2 * 3600 + pl3 * 60);
		if (pl2 > 1)
		{
			label6->Text = String::Format("{0:D}:{1:D1}:{2:D2}", pl2, pl3, pl);
		}
		else
		{
			if (pl < 10)
			{
				label6->Text = String::Format("{0:D}:0{1:D1}", pl3, pl);
			}
			else
			{
				label6->Text = String::Format("{0:D}:{1:D1}", pl3, pl);
			}
		}
	}
	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::IO::File::WriteAllText("last_video2.txt", System::Convert::ToString(trackBar1->Value));
		System::IO::File::AppendAllText("last_video2.txt", "\n");
		System::IO::File::AppendAllText("last_video2.txt", System::Convert::ToString(axWindowsMediaPlayer1->settings->rate));
		System::IO::File::AppendAllText("last_video2.txt", "\n");
		if (label2->Text == "Героям слава!")
		{
			System::IO::File::AppendAllText("last_video2.txt", System::Convert::ToString(0));
		}
		else
		{
			System::IO::File::AppendAllText("last_video2.txt", System::Convert::ToString(1));
		}
		System::IO::File::AppendAllText("last_video2.txt", "\n");
		System::IO::File::AppendAllText("last_video2.txt", axWindowsMediaPlayer1->URL);
		System::IO::File::AppendAllText("last_video2.txt", "\n");
		System::IO::File::AppendAllText("last_video2.txt", System::Convert::ToString(trackBar3->Value));
		trackBar3->Visible = false;
		axWindowsMediaPlayer1->Visible = false;
		trackBar1->Visible = false;
		trackBar3->Visible = false;
		label1->Visible = false;
		label6->Visible = false;
		panel3->Visible = false;
		menuStrip2->Visible = false;
		System::Threading::Thread::Sleep(500);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->uiMode = "none";
		auto a = System::IO::File::ReadAllLines("last_video2.txt");
		if (System::IO::File::ReadAllText("last_video2.txt") != "" && System::Convert::ToInt32(a[4]) > 1)
		{
			Windows::Forms::DialogResult dialogResult = MessageBox::Show(this, "Чи хотіли б ви продовжити переглядати останнє відео з останнього моменту?", "Продовжувати?", MessageBoxButtons::YesNo);
			if (dialogResult == Windows::Forms::DialogResult::Yes)
			{
				auto t = System::IO::File::ReadAllLines("last_video2.txt");
				axWindowsMediaPlayer1->settings->volume = System::Convert::ToInt32(t[0]);
				trackBar1->Value = System::Convert::ToInt32(t[0]);
				if (System::Convert::ToDouble(t[1]) == 0.5)
				{
					axWindowsMediaPlayer1->settings->rate = 0.5f;
				}
				else if (System::Convert::ToInt32(t[1]) == 1)
				{axWindowsMediaPlayer1->settings->rate = 1.0f;
				}
				else
				{
					axWindowsMediaPlayer1->settings->rate = 2.0f;
				}
				if (System::Convert::ToInt32(t[2]) == 0)
				{
					label2->Text = "Героям слава!";
				}
				else
				{
					label2->Text = "Слава Україні!";
				}
				if (t[3] != "") {
					axWindowsMediaPlayer1->URL = t[3];
				}
				auto value = System::Convert::ToInt32(t[4]);
				if (value > 0)
				{
					trackBar3->Value = value;
					axWindowsMediaPlayer1->Ctlcontrols->currentPosition = trackBar3->Value;
					int pl = value;
					int pl2 = pl / 3600;
					int pl3 = (pl - (pl2 * 3600)) / 60;
					pl = pl - (pl2 * 3600 + pl3 * 60);
					if (pl2 > 1)
					{
						label1->Text = String::Format("{0:D}:{1:D1}:{2:D2}", pl2, pl3, pl);
					}
					else
					{
						if (pl < 10)
						{
							label1->Text = String::Format("{0:D}:0{1:D1}", pl3, pl);
						}
						else
						{
							label1->Text = String::Format("{0:D}:{1:D1}", pl3, pl);
						}
					}

				}
				else
				{
					label1->Text = "00:00:00";
				}
			}
			else {
				System::IO::File::WriteAllText("last_video2.txt", System::Convert::ToString(""));
			}
		}
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
