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
	if (prevButton >= 10) {
		if (prevButton == 10) {
			numbers.clear();
			operands.clear();
			textWindow->Clear();
		}
	}
	int cases = id;
	prevButton = cases;
	if (cases < 10) {
		*textWindow << cases;

	}
	else {
		wxString textVal = textWindow->GetValue();
		operands.push_back(id);
		float value = SaveValues(textVal);
		numbers.push_back(value);
		textWindow->Clear();
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
			if (numbers.size() >= 2) {
				Calculate();
			}
			break;
		}
		case 15:
		{
			if (numbers.size() >= 2) {
				Calculate();
			}
			break;
		}
		case 16:
		{
			if (numbers.size() >= 2) {
				Calculate();
			}
			break;
		}
		case 17:
		{
			if (numbers.size() >= 2) {
				Calculate();
			}
			break;
		}
		case 18:
		{
			if (numbers.size() >= 2) {
				Calculate();
			}
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
			SaveValues(textVal);
			textWindow->Clear();
			numbers.clear();
			operands.clear();
		}
		}
	}

}


void CalculatorProcessor::Calculate()
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
		numbers.erase(std::next(numbers.begin(), 1), std::next(numbers.begin(), 2));
		operands.erase(operands.begin());
	}
	if (numbers[0] == (int)numbers[0]) {
		*textWindow << (int)numbers[0];
	}
	else {
		*textWindow << numbers[0];
	}
}

double CalculatorProcessor::SaveValues(wxString toSave)
{
	double value;
	if (!toSave.ToDouble(&value)) {
	}
	return value;
}
