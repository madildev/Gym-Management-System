#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GymSystem::MyForm form;
	Application::Run(% form);
}