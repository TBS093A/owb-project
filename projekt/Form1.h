#pragma once
#include <stdio.h>
#include <string>

int tab[5] = { 16, 2, 77, 40, 12071 };
std::string selected = "";
char select[100] = "";

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
		





	private: System::Windows::Forms::Button^ buttonPlay;
	private: System::Windows::Forms::Button^ buttonPrev;
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ addElementToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeAllToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ songNameText;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addElementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->buttonPrev = (gcnew System::Windows::Forms::Button());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->songNameText = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addElementToolStripMenuItem,
					this->removeAllToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addElementToolStripMenuItem
			// 
			this->addElementToolStripMenuItem->Name = L"addElementToolStripMenuItem";
			this->addElementToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->addElementToolStripMenuItem->Text = L"Add element";
			this->addElementToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::addElementToolStripMenuItem_Click);
			// 
			// removeAllToolStripMenuItem
			// 
			this->removeAllToolStripMenuItem->Name = L"removeAllToolStripMenuItem";
			this->removeAllToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->removeAllToolStripMenuItem->Text = L"Remove all";
			this->removeAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::removeAllToolStripMenuItem_Click);
			// 
			// buttonPlay
			// 
			this->buttonPlay->Location = System::Drawing::Point(76, 163);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(75, 23);
			this->buttonPlay->TabIndex = 1;
			this->buttonPlay->Text = L"play";
			this->buttonPlay->UseVisualStyleBackColor = true;
			// 
			// buttonPrev
			// 
			this->buttonPrev->Location = System::Drawing::Point(23, 163);
			this->buttonPrev->Name = L"buttonPrev";
			this->buttonPrev->Size = System::Drawing::Size(48, 23);
			this->buttonPrev->TabIndex = 2;
			this->buttonPrev->Text = L"prev";
			this->buttonPrev->UseVisualStyleBackColor = true;
			this->buttonPrev->Click += gcnew System::EventHandler(this, &Form1::buttonPrev_Click);
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(158, 163);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(48, 23);
			this->buttonNext->TabIndex = 3;
			this->buttonNext->Text = L"next";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &Form1::buttonNext_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(23, 87);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(183, 23);
			this->progressBar1->TabIndex = 4;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// toolTip2
			// 
			this->toolTip2->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip2_Popup);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 27);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->songNameText);
			this->splitContainer1->Panel1->Controls->Add(this->progressBar1);
			this->splitContainer1->Panel1->Controls->Add(this->buttonPrev);
			this->splitContainer1->Panel1->Controls->Add(this->buttonNext);
			this->splitContainer1->Panel1->Controls->Add(this->buttonPlay);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listBox1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(675, 228);
			this->splitContainer1->SplitterDistance = 225;
			this->splitContainer1->TabIndex = 5;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 26);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(440, 186);
			this->listBox1->TabIndex = 6;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(440, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->songNameText->Location = System::Drawing::Point(23, 26);
			this->songNameText->Name = L"songName";
			this->songNameText->ReadOnly = true;
			this->songNameText->Size = System::Drawing::Size(183, 20);
			this->songNameText->TabIndex = 5;
			this->songNameText->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 252);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int x = 1; x <= 10; x++)
		{
			this->listBox1->Items->Add(x);
		}
	}
	private: System::Void buttonPrev_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void toolTip2_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	}
	private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void removeAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->listBox1->Items->Clear();
	}
	private: System::Void addElementToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
