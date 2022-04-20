#include "CalculatorProcessor.h"
#include "CalculatorWindow.h"
wxFont fontTextBox(24, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);

	


CalculatorProcessor::CalculatorProcessor()
{

}

void CalculatorProcessor::CreateTextWindow(CalculatorWindow* parent)
{
	textWindow = new wxTextCtrl(parent, 125, "0", wxPoint(0, 0), wxSize(375, 130), wxTE_RIGHT);
	textWindow->SetFont(fontTextBox);
	textWindow->SetBackgroundColour(wxColour(*wxBLACK));
	textWindow->SetForegroundColour(wxColour(255, 255, 255, 0));
}

void CalculatorProcessor::ChangeTextBox(int id)
{
	if (prevButton == 10) {
		textWindow->Clear();
		numbers.clear();
		operands.clear();
	}
	int cases = id;
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


void CalculatorProcessor::Calculate()
{

}
