#include "form.h"
//#include <windows.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AdvancedCalculator::form form;
	Application::Run(% form);
}