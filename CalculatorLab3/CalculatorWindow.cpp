#include "CalculatorWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow,wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()


CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Window", wxPoint(200, 200), wxSize(515, 820))
{
	processor = &CalculatorProcessor::GetInstance();
	ButtonFactory creator = ButtonFactory(this);	
	equalBtn = creator.createEqualButton();
	clearBtn = creator.createClearButton();
	binBtn = creator.createBinButton();
	hexBtn = creator.createHexButton();
	decBtn = creator.createDecButton();

	plusBtn = creator.createAddButton();
	sevenBtn = creator.createSevenButton();
	eightBtn = creator.createEightButton();
	nineBtn = creator.createNineButton();

	minusBtn = creator.createMinusButton();
	fourBtn = creator.createFourButton();
	fiveBtn = creator.createFiveButton();
	sixBtn = creator.createSixButton();

	multiplBtn = creator.createMultiplButton();
	threeBtn = creator.createThreeButton();
	twoBtn = creator.createTwoButton();
	oneBtn = creator.createOneButton();

	divBtn = creator.createDivButton();
	modBtn = creator.createModButton();
	zeroBtn = creator.createZeroButton();
	negatBtn = creator.createNegatButton();
	processor->CreateTextWindow(this);

}


#pragma region Calculation
void CalculatorWindow::OnButtonClicked(wxCommandEvent& evt)
{
	processor->ChangeTextBox(evt.GetId());
	evt.Skip();	
}
#pragma endregion



