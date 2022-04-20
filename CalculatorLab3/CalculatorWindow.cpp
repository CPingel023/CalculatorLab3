#include "CalculatorWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorWindow,wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked())

wxEND_EVENT_TABLE()


CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Window", wxPoint(200, 200), wxSize(515, 820))
{
	CalculatorProcessor* processor = &CalculatorProcessor::GetInstance();
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
	if (prevButton == 10) {
		textWindow->Clear();
		numbers.clear();
		operands.clear();
	}
	int cases = evt.GetId();
	prevButton = cases;
	if (cases < 10) {
		*textWindow << cases;
		
	}
	else {
		wxString textVal = textWindow->GetValue();
		operands.push_back(evt.GetId());
		float value = saveValues(textVal);
		numbers.push_back(value);
		switch (cases) {
		case 10: 
		{
			Calculate();
			break;
		}
		case 11:
		{
			*textWindow << " binary ";
			break;
		}
		case 12:
		{
			*textWindow << " hexadecimal ";
			break;
		}
		case 13:
		{
			*textWindow << " decimal ";
			break;
		}
		case 14:
		{
			if (numbers.size() > 3) {
				Calculate();
			}
			*textWindow << " + ";
			break;
		}
		case 15:
		{
			if (numbers.size() > 3) {
				Calculate();
			}
			*textWindow << " - ";
			break;
		}
		case 16:
		{
			if (numbers.size() > 3) {
				Calculate();
			}
			*textWindow << " * ";
			break;
		}
		case 17:
		{
			if (numbers.size() > 3) {
				Calculate();
			}
			*textWindow << " / ";
			break;
		}
		case 18:
		{
			if (numbers.size() > 3) {
				Calculate();
			}
			*textWindow << " % ";
			break;
		}
		case 19:
		{
			//textWindow->Clear();
			textWindow->Clear();
			numbers[0] = numbers[0] * -1;
			*textWindow << numbers[0];
			break;
		}
		case 20: 
		{
			saveValues(textVal);
			textWindow->Clear();
			numbers.clear();
			operands.clear();
		}
		evt.Skip();
		}
	}
	
}
#pragma endregion

float CalculatorWindow::saveValues(wxString toSave)
{
	double value;
	if (!toSave.ToDouble(&value)) {
	}
	return value;
}

void CalculatorWindow::Calculate()
{
		while (numbers.size() > 1) {
			if (operands[0] == 14)
			{
				numbers[0] = numbers[0] + numbers[1];
				
			}
			else if (operands[0] == 15) {
				numbers[0] = numbers[0] - numbers[1];

			}
			else if (operands[0] == 16) {
				numbers[0] = numbers[0] * numbers[1];
			}
			else if (operands[0] == 17) {
				numbers[0] = numbers[0] / numbers[1];
			}
			else if (operands[0] == 18) {
				numbers[0] = (int)numbers[0] % (int)numbers[1];
			}
			numbers.erase(std::next(numbers.begin(), 1), std::next(numbers.begin(), 3));
			//operands.erase(operands.begin());
		}
		*textWindow << " = ";
		if (numbers[0] == (int)numbers[0]) {
			*textWindow << (int)numbers[0];
		}
		else {
			*textWindow << numbers[0];
		}
}



