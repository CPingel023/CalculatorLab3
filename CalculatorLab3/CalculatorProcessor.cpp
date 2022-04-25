#include "CalculatorProcessor.h"
#include "CalculatorWindow.h"
#include <iomanip>
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
						AddCommand* adder = new AddCommand(numbers[i], numbers[i + 1]);
						operators.push_back(adder);
					}
					else if (operators2[i] == 15) {
						SubtractCommand* subber = new SubtractCommand(numbers[i], numbers[i + 1]);
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
			}

			Calculate();
			break;
			}
		}
		switch (cases)
			{
			case 11:
			{
				int binNum = (int)numbers[0];
				while (binNum != 0) {
					binhex.push_back(binNum % 2);
					binNum /= 2;
				}
				numbers.clear();
				for (int i = binhex.size() - 1; i >= 0; i--) {
					*textWindow << (int)binhex[i];
				}
				binhex.clear();
				prevConversion = 11;
				break;
			}
			case 12:
			{
				bool binary = BinaryCheck(textVal);
				int hexNum = (int)numbers[0];
				if (binary) {
					hexNum = BinaryToDecimal(hexNum);
				}
				while (hexNum != 0)
				{
					int temp = hexNum % 16;
					if (temp < 10) {
						binhex.push_back(temp % 16 + 48);
					}
					else {
						binhex.push_back(temp % 16 + 55);
					}
					hexNum /= 16;
				}
				
				numbers.clear();
				*textWindow << "0x";
				for (int i = binhex.size() - 1; i >= 0; i--) {
					*textWindow << binhex[i];
				}
				prevConversion = 12;
				binhex.clear();
				break;
			}
			case 13:
			{
				bool binary = BinaryCheck(textVal);
				int num = numbers[0];
				numbers.clear();
				if (binary) {
					int saveTemp = BinaryToDecimal(num);
					*textWindow << saveTemp;
				}
				else {
					int length = textVal.size();
					int base = 1;
					int saveTemp = 0;
					for (int i = length - 1; i > 1; i--) {
						if (textVal[i] >= '0' && textVal[i] <= '9') {
							saveTemp += ((int)textVal[i] - 48) * base;
							base = base * 16;
						}
						else if(textVal[i] >= 'A' && textVal[i] <= 'F') {
							saveTemp += ((int)textVal[i] - 55) * base;
							base = base * 16;
						}
					}
					*textWindow << saveTemp;
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
				binhex.clear();
				operators.clear();
				operators2.clear();
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

bool CalculatorProcessor::BinaryCheck(wxString temp)
{
	for (int i = 0; i < temp.size(); i++) {
		if ((int)temp[i] - 48 > 1) {
			return false;
			break;
		}
	}
	return true;
}

int CalculatorProcessor::BinaryToDecimal(int num)
{
	int saveTemp = 0;
	int base = 1;
	while (num) {
		int lastDigit = num % 10;
		num = num / 10;
		saveTemp += lastDigit * base;

		base = base * 2;
	}
	return saveTemp;
}
