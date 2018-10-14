#include "MyForm.h"
#include "Objects.h"
#include <ctime>

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	
	srand(time(NULL));
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Kursach::MyForm form;//здесь должно быть имя вашего проекта

	Application::Run(%form);

}