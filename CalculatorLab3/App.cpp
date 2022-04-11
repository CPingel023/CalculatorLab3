#include "App.h"
#include "CalculatorWindow.h"

wxIMPLEMENT_APP(App);

App::App()
{
	
}

App::~App()
{

}

bool App::OnInit()
{
	calc = new CalculatorWindow();
	calc->Show();
	return true;
}
