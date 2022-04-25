#include "CalculatorProcessor.h"
#include "CalculatorWindow.h"
wxFont fontTextBox(24, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);

	


CalculatorProcessor::CalculatorProcessor()
{

}

CalculatorProcessor::~CalculatorProcessor()
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
	int cases = id;
	prevButton = cases;
	if (cases < 10) {
		*textWindow << cases;
	}
	else {

		wxString textVal = textWindow->GetValue();
		float value = SaveValues(textVal);
		numbers.push_back(value);
		textWindow->Clear();
		operators2.push_back(id);
		if (numbers.size() >= 2) {
			switch (cases) {
			case 10:
			{
				for (int i = 0; i < operators2.size(); i++) {
					if (operators2[i] == 14) {
						AddCommand* adder = new AddCommand(numbers[i], numbers[i+1]);
						operators.push_back(adder);
					}
					else if (operators2[i] == 15) {
						SubtractCommand* subber = new SubtractCommand(numbers[i], numbers[i+1]);
						operators.push_back(subber);
					}
					else if (operators2[i] == 16) {
						MultCommand* multer = new MultCommand(numbers[i], numbers[i + 1]);
						operators.push_back(multer);
					}
					else if (operators2[i] == 17) {
						DivCommand* diviser = new DivCommand(numbers[i], numbers[i + 1]);
						operators.push_back(diviser);
					}
					else if (operators2[i] == 18) {
						ModCommand* moder = new ModCommand(numbers[i], numbers[i + 1]);
						operators.push_back(moder);
					}
				}
				Calculate();
				break;
			}
			case 11:
			{
				int binNum = (int)numbers[0];
				while (binNum != 0) {
					binary.push_back(binNum % 2);
					binNum /= 2;
				}
				for (int i = binary.size() - 1; i >= 0; i--) {
					*textWindow << binary[i];
				}
				binary.clear();
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
			}
			}
		}
	}
}


void CalculatorProcessor::Calculate()
{
	double answer = 0;
	for (int i = 0; i < operators.size(); i++) {
		if (i - 1 >= 0) {
			operators[i]->setFirst(answer);
		}
		answer = operators[i]->Execute();
		//if (operands[0] == 14)
		//{
		//	/*numbers[i+1] = numbers[i] + numbers[i+1];*/
		//	AddCommand adder(numbers[i], numbers[i + 1], numbers, i + 1);
		//	adder.Execute();

		//}
		//else if (operands[0] == 15) {
		//	numbers[i+1] = numbers[i] - numbers[i+1];

		//}
		//else if (operands[0] == 16) {
		//	numbers[i+1] = numbers[i] * numbers[i+1];
		//}
		//else if (operands[0] == 17) {
		//	numbers[i+1] = numbers[i] / numbers[i+1];
		//}
		//else if (operands[0] == 18) {
		//	numbers[i+1] = (int)numbers[i] % (int)numbers[i+1];
		//}
		//operands.erase(operands.begin());
	}
	if (answer == (int)answer) {
		*textWindow << (int)answer;
	}
	else {
		*textWindow << answer;
	}
	operators.clear();
	numbers.clear();
	operators2.clear();
}

double CalculatorProcessor::SaveValues(wxString toSave)
{
	double value;
	if (!toSave.ToDouble(&value)) {
	}
	return value;
}
