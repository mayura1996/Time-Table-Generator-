#pragma once


namespace timetable {

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::Button^  Generate;
	private: System::Windows::Forms::Button^  hallDetails;
	private: System::Windows::Forms::Button^  Academic_year;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Coursedetails;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Monday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tuesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Wednesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Thursday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Friday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;







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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tuesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Wednesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Thursday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Friday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Generate = (gcnew System::Windows::Forms::Button());
			this->hallDetails = (gcnew System::Windows::Forms::Button());
			this->Academic_year = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Coursedetails = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::LightCyan;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Doppio One", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Time, this->Monday,
					this->Tuesday, this->Wednesday, this->Thursday, this->Friday, this->Column1
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::LightSkyBlue;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(43, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(892, 421);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Time
			// 
			this->Time->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Time->DefaultCellStyle = dataGridViewCellStyle3;
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->Width = 86;
			// 
			// Monday
			// 
			this->Monday->HeaderText = L"Monday";
			this->Monday->Name = L"Monday";
			// 
			// Tuesday
			// 
			this->Tuesday->HeaderText = L"Tuesday";
			this->Tuesday->Name = L"Tuesday";
			// 
			// Wednesday
			// 
			this->Wednesday->HeaderText = L"Wednesday";
			this->Wednesday->Name = L"Wednesday";
			// 
			// Thursday
			// 
			this->Thursday->HeaderText = L"Thursday";
			this->Thursday->Name = L"Thursday";
			// 
			// Friday
			// 
			this->Friday->HeaderText = L"Friday";
			this->Friday->Name = L"Friday";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			// 
			// Generate
			// 
			this->Generate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Generate->BackColor = System::Drawing::SystemColors::Control;
			this->Generate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Generate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Generate->Location = System::Drawing::Point(987, 240);
			this->Generate->Name = L"Generate";
			this->Generate->Size = System::Drawing::Size(219, 60);
			this->Generate->TabIndex = 1;
			this->Generate->Text = L"Generate";
			this->Generate->UseVisualStyleBackColor = false;
			this->Generate->Click += gcnew System::EventHandler(this, &MyForm::Generate_Click);
			// 
			// hallDetails
			// 
			this->hallDetails->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->hallDetails->BackColor = System::Drawing::SystemColors::Control;
			this->hallDetails->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hallDetails->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->hallDetails->Location = System::Drawing::Point(987, 476);
			this->hallDetails->Name = L"hallDetails";
			this->hallDetails->Size = System::Drawing::Size(219, 60);
			this->hallDetails->TabIndex = 2;
			this->hallDetails->Text = L"Hall Details";
			this->hallDetails->UseVisualStyleBackColor = false;
			this->hallDetails->Click += gcnew System::EventHandler(this, &MyForm::hallDetails_Click);
			// 
			// Academic_year
			// 
			this->Academic_year->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Academic_year->BackColor = System::Drawing::SystemColors::Control;
			this->Academic_year->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Academic_year->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Academic_year->Location = System::Drawing::Point(987, 397);
			this->Academic_year->Name = L"Academic_year";
			this->Academic_year->Size = System::Drawing::Size(219, 60);
			this->Academic_year->TabIndex = 3;
			this->Academic_year->Text = L"Academic Year Details";
			this->Academic_year->UseVisualStyleBackColor = false;
			this->Academic_year->Click += gcnew System::EventHandler(this, &MyForm::Academic_year_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(987, 555);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Lecturer Details";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Coursedetails
			// 
			this->Coursedetails->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Coursedetails->BackColor = System::Drawing::SystemColors::Control;
			this->Coursedetails->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Coursedetails->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Coursedetails->Location = System::Drawing::Point(987, 318);
			this->Coursedetails->Name = L"Coursedetails";
			this->Coursedetails->Size = System::Drawing::Size(219, 60);
			this->Coursedetails->TabIndex = 5;
			this->Coursedetails->Text = L"Course Details";
			this->Coursedetails->UseVisualStyleBackColor = false;
			this->Coursedetails->Click += gcnew System::EventHandler(this, &MyForm::Coursedetails_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleDescription = L"";
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Select a year", L"Year 1", L"Year 2" });
			this->comboBox1->Location = System::Drawing::Point(987, 184);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(219, 36);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(258, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(820, 84);
			this->label1->TabIndex = 7;
			this->label1->Text = L"TIME TABLE GENERATOR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 747);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Developed by TEAM Syntax";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1277, 773);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Coursedetails);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Academic_year);
			this->Controls->Add(this->hallDetails);
			this->Controls->Add(this->Generate);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Time Table Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 30; i++) {
			dataGridView1->Rows->Add("", "", "", "", "", "",""); //to add empty rows

			comboBox1->SelectedIndex = 0 ;

			
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}


//--------------------------BUTTON TO GENERATE THE TIME TABLE ALGORITHM-----------------------------------------------------------//

private: System::Void Generate_Click(System::Object^  sender, System::EventArgs^  e) {
	
	dataGridView1->Rows->Clear(); //clear the previous data grid view to fill up a new one
	for (int i = 0; i < 30; i++) {
		dataGridView1->Rows->Add("", "", "", "", "", ""); //adding mepty rows

	}

	
	emptyGrid(); //the total time table vector is made empty so that it can be filled another time for multiple button clicks without overflowing the size of the vector
	for (int x = 0; x < TimeTable.size(); x++) {
		for (int y = 0; y < TimeTable[x].size(); y++) {
			for (int z = 0; z < TimeTable[x][y].size(); z++) {
				String^ str4 = gcnew String(TimeTable[x][y][z].c_str());
				if (x == 0) {
					dataGridView1->Rows[y]->Cells[z]->Value = str4; //this will nullify the data grid view cells
				}

			}
		}

	}
	initialize(); //initializes the components so that it is reliable for multiple clicks of the button
	setup(); //generate the algorithm of time table generation
	
	//adding heading texts for the column
	this->Time->HeaderText = L"TIME"; 
	this->Monday->HeaderText = L"MONDAY";
	this->Tuesday->HeaderText = L"TUESDAY";
	this->Wednesday->HeaderText = L"WEDNESDAY";
	this->Thursday->HeaderText = L"THURSDAY";
	this->Friday->HeaderText = L"FRIDAY";

	

	String^ str = gcnew String(TimeTable[1][1][2].c_str());

	
	vector<string> time = { "8.00 - 9.00","9.00 - 10.00","10.00 - 11.00","11.00 - 12.00","12.00 - 01.00","01.00 - 02.00","02.00 - 03.00","02.00 - 04.00" }; //input the time column since it is not included in the TimeTable vector

	for (int z = 0; z < 8; z++) {
		String^ str1 = gcnew String(time[z].c_str());
		
			dataGridView1->Rows[z]->Cells[0]->Value = str1;
		

	}
	
	int p = 1;
	
	if (comboBox1->SelectedIndex > 0)
	{
		p = comboBox1->SelectedIndex - 1;
	}
		for (int y = 0; y < TimeTable[p].size(); y++) {
			for (int z = 0; z < TimeTable[p][y].size(); z++) {
				String^ str = gcnew String(TimeTable[p][y][z].c_str());
				
					dataGridView1->Rows[y]->Cells[z + 1]->Value = str; //filling up with the generated elements to the cells in the data grid view
			

			}
		}

	


}



		 //------------------------------Button to View halll Details-----------------------------------------------------//

private: System::Void hallDetails_Click(System::Object^  sender, System::EventArgs^  e) {
	
	dataGridView1->Rows->Clear();
	for (int i = 0; i < 30; i++) {
		dataGridView1->Rows->Add("", "", "", "", "", ""); //make the values of the rows in to null strings

	}
	
	//header texts for the columns
	this->Time->HeaderText = L"ID";
	this->Monday->HeaderText = L"Code";
	this->Tuesday->HeaderText = L"Capacity";
	this->Wednesday->HeaderText = L" ";
	this->Thursday->HeaderText = L" ";
	this->Friday->HeaderText = L" ";
	
	initialize(); 
	setup();
	emptyGrid();
	for (int x = 0; x < TimeTable.size(); x++) {
		for (int y = 0; y < TimeTable[x].size(); y++) {
			for (int z = 0; z < TimeTable[x][y].size(); z++) {
				String^ str4 = gcnew String(TimeTable[x][y][z].c_str());
				if (x == 0) {
					dataGridView1->Rows[y]->Cells[z]->Value = str4; //filling the cells with null values to make the data grid view empty
				}

			}
		}

	}

	for (int i = 0; i < HallDetails.size()-1; i++) {
		for (int j = 0; j < HallDetails[i].size(); j++) {
			String^ str1 = gcnew String(HallDetails[i+1][j].c_str());
			{
				dataGridView1->Rows[i]->Cells[j]->Value = str1; //filling the cell with hall details
			}

		}

	}

}

//--------------------------button to view the details of the academic year--------------------------------------------//

private: System::Void Academic_year_Click(System::Object^  sender, System::EventArgs^  e) {
	
	dataGridView1->Rows->Clear();
	for (int i = 0; i < 30; i++) {
		dataGridView1->Rows->Add("", "", "", "", "", ""); //make the values of the rows in to null strings

	}

	//header texts for the colums
	this->Time->HeaderText = L"Year";
	this->Monday->HeaderText = L"Student Capacity";
	this->Tuesday->HeaderText = L"Courses";
	this->Wednesday->HeaderText = L" ";
	this->Thursday->HeaderText = L" ";
	this->Friday->HeaderText = L" ";

	initialize();
	setup();  //generates the algorithm
	emptyGrid();
	for (int x = 0; x < TimeTable.size(); x++) {
		for (int y = 0; y < TimeTable[x].size(); y++) {
			for (int z = 0; z < TimeTable[x][y].size(); z++) {
				String^ str4 = gcnew String(TimeTable[x][y][z].c_str());
				if (x == 0) {
					dataGridView1->Rows[y]->Cells[z]->Value = str4; //filling the cells with null values to make the datagrid view empty
				}

			}
		}

	}

	for (int i = 0; i < AcademicYear.size() - 1; i++) {
		for (int j = 0; j < AcademicYear[1].size(); j++) {
			String^ str1 = gcnew String(AcademicYear[i + 1][j].c_str()); //filling the cells with the details of the cademic year
			{
				dataGridView1->Rows[i]->Cells[j]->Value = str1;
			}

		}

	}

}


		//-----------------button to view lecture details---------------------------------------------------//

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	for (int i = 0; i < 30; i++) {
		dataGridView1->Rows->Add("", "", "", "", "", ""); //make the values of the rows in to null strings

	}

	//header tetxs of the columns
	this->Time->HeaderText = L"ID";
	this->Monday->HeaderText = L"Name";
	this->Tuesday->HeaderText = L"Course ID";
	this->Wednesday->HeaderText = L" ";
	this->Thursday->HeaderText = L" ";
	this->Friday->HeaderText = L" ";

	initialize();
	setup();  //generates the algorithm
	emptyGrid();
	for (int x = 0; x < TimeTable.size(); x++) {
		for (int y = 0; y < TimeTable[x].size(); y++) {
			for (int z = 0; z < TimeTable[x][y].size(); z++) {
				String^ str4 = gcnew String(TimeTable[x][y][z].c_str()); //filling the cells with null values to make the datagrid view empty
				if (x == 0) {
					dataGridView1->Rows[y]->Cells[z]->Value = str4;
				}

			}
		}

	}

	for (int i = 0; i < LecDetails.size() - 1; i++) {
		for (int j = 0; j < LecDetails[i+1].size(); j++) {
			String^ str1 = gcnew String(LecDetails[i + 1][j].c_str());
			{
				dataGridView1->Rows[i]->Cells[j]->Value = str1; //filling the  cells of the data grid view with the details of the lecturers
			}

		}

	}
}

		 //--------------------button to view course details----------------------------------------------------//

private: System::Void Coursedetails_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	for (int i = 0; i < 30; i++) {
		dataGridView1->Rows->Add("", "", "", "", "", ""); //to make the elements of the rows empty

	}
	//headers texts of the colums
	this->Time->HeaderText = L"ID";
	this->Monday->HeaderText = L"Code";
	this->Tuesday->HeaderText = L"Name";
	this->Wednesday->HeaderText = L"Lecture ID";
	this->Thursday->HeaderText = L"Student Capacity";
	this->Friday->HeaderText = L"Duration (Hrs)";

	initialize(); 
	setup(); //generates the algorithm
	emptyGrid();
	for (int x = 0; x < TimeTable.size(); x++) {
		for (int y = 0; y < TimeTable[x].size(); y++) {
			for (int z = 0; z < TimeTable[x][y].size(); z++) {
				String^ str4 = gcnew String(TimeTable[x][y][z].c_str()); //filling the cells with null values to make the datagrid view empty
				if (x == 0) {
					dataGridView1->Rows[y]->Cells[z]->Value = str4;
				}

			}
		}

	}
	

	for (int i = 0; i < CourseDetails.size() - 1; i++) {
		for (int j = 0; j < CourseDetails[i + 1].size(); j++) {
			String^ str1 = gcnew String(CourseDetails[i + 1][j].c_str());
			{
				dataGridView1->Rows[i]->Cells[j]->Value = str1; //filling the cells of the data grid view with the details of the course
			}

		}

	}


}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
