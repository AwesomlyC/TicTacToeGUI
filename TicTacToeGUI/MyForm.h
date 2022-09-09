#pragma once

namespace TicTacToeGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(72, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 107);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 107);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(378, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 107);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(72, 262);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 107);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(225, 262);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 107);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(378, 262);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 107);
			this->button6->TabIndex = 3;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(72, 406);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 107);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(225, 406);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 107);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(378, 406);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(133, 107);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(180, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(521, 48);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Welcome To Tic-Tac-Toe";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 34);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Player X:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(579, 395);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(287, 94);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Reset Game";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::IndianRed;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(53, 106);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 419);
			this->panel1->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 40);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Player O:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(163, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 40);
			this->label4->TabIndex = 16;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(175, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 34);
			this->label5->TabIndex = 15;
			this->label5->Text = L"0";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(559, 162);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(320, 153);
			this->panel2->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(669, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 43);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Wins";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(955, 561);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool checker;
		int plusone;

		void solve(System::String^ player) {
			// Possible Win Conditions
			if (button1->Text == player && button2->Text == player && button3->Text == player) {
				button1->BackColor = System::Drawing::Color::Aqua;
				button2->BackColor = System::Drawing::Color::Aqua;
				button3->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player,"Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (button4->Text == player && button5->Text == player && button6->Text == player) {
				button4->BackColor = System::Drawing::Color::Aqua;
				button5->BackColor = System::Drawing::Color::Aqua;
				button6->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (button7->Text == player && button8->Text == player && button9->Text == player) {
				button7->BackColor = System::Drawing::Color::Aqua;
				button8->BackColor = System::Drawing::Color::Aqua;
				button9->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			if (button1->Text == player && button4->Text == player && button7->Text == player) {
				button1->BackColor = System::Drawing::Color::Aqua;
				button4->BackColor = System::Drawing::Color::Aqua;
				button7->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (button2->Text == player && button5->Text == player && button8->Text == player) {
				button2->BackColor = System::Drawing::Color::Aqua;
				button5->BackColor = System::Drawing::Color::Aqua;
				button8->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (button3->Text == player && button6->Text == player && button9->Text == player) {
				button3->BackColor = System::Drawing::Color::Aqua;
				button6->BackColor = System::Drawing::Color::Aqua;
				button9->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			if (button1->Text == player && button5->Text == player && button9->Text == player) {
				button1->BackColor = System::Drawing::Color::Aqua;
				button5->BackColor = System::Drawing::Color::Aqua;
				button9->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (button3->Text == player && button5->Text == player && button7->Text == player) {
				button3->BackColor = System::Drawing::Color::Aqua;
				button5->BackColor = System::Drawing::Color::Aqua;
				button7->BackColor = System::Drawing::Color::Aqua;
				MessageBox::Show("THE WINNER IS " + player, "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			draw(player);
		}

		void draw(System::String^ player) {
			if (button1->Enabled == false && button2->Enabled == false && button3->Enabled == false &&
				button4->Enabled == false && button5->Enabled == false && button6->Enabled == false &&
				button7->Enabled == false && button8->Enabled == false && button9->Enabled == false)
				MessageBox::Show("IT IS A DRAW!", "Tic-Tac-Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

// ================================================================================ // 
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button1->Text = "X";
		checker = true;
	}
	else {
		button1->Text = "O";
		checker = false;
	}
	button1->Enabled = false;
	solve(button1->Text);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button2->Text = "X";
		checker = true;
	}
	else {
		button2->Text = "O";
		checker = false;
	}
	button2->Enabled = false;
	solve(button2->Text);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button3->Text = "X";
		checker = true;
	}
	else {
		button3->Text = "O";
		checker = false;
	}
	button3->Enabled = false;
	solve(button3->Text);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button4->Text = "X";
		checker = true;
	}
	else {
		button4->Text = "O";
		checker = false;
	}
	button4->Enabled = false;
	solve(button4->Text);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button5->Text = "X";
		checker = true;
	}
	else {
		button5->Text = "O";
		checker = false;
	}
	button5->Enabled = false;
	solve(button5->Text);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button6->Text = "X";
		checker = true;
	}
	else {
		button6->Text = "O";
		checker = false;
	}
	button6->Enabled = false;
	solve(button6->Text);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button7->Text = "X";
		checker = true;
	}
	else {
		button7->Text = "O";
		checker = false;
	}
	button7->Enabled = false;
	solve(button7->Text);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button8->Text = "X";
		checker = true;
	}
	else {
		button8->Text = "O";
		checker = false;
	}
	button8->Enabled = false;
	solve(button8->Text);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button9->Text = "X";
		checker = true;
	}
	else {
		button9->Text = "O";
		checker = false;
	}
	button9->Enabled = false;
	solve(button9->Text);
}
// ================================================================================ // 
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

// Reset Button
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->BackColor = System::Drawing::Color::Transparent;
	button2->BackColor = System::Drawing::Color::Transparent;
	button3->BackColor = System::Drawing::Color::Transparent;
	button4->BackColor = System::Drawing::Color::Transparent;
	button5->BackColor = System::Drawing::Color::Transparent;
	button6->BackColor = System::Drawing::Color::Transparent;
	button7->BackColor = System::Drawing::Color::Transparent;
	button8->BackColor = System::Drawing::Color::Transparent;
	button9->BackColor = System::Drawing::Color::Transparent;

	button1->Text = "1";
	button2->Text = "2";
	button3->Text = "3";
	button4->Text = "4";
	button5->Text = "5";
	button6->Text = "6";
	button7->Text = "7";
	button8->Text = "8";
	button9->Text = "9";

	checker = false;
}
// ================================================================================ // 
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
