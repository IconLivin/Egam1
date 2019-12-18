#include "MyForm.h"

using namespace Egam2;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	setlocale(LC_ALL, "Russian");
	// Создание главного окна и его запуск
	Application::Run(gcnew MyForm());
	return 0;
}
