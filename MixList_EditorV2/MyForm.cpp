#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WinformCDemo is your project name
	MixListEditorV2::MyForm form;
	Application::Run(%form);
}