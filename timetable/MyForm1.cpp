#include "MyForm1.h"

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;




[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	timetable::MyForm1 MyForm1;
	Application::Run(%MyForm1);
}


