#include "CalculatorWindow.h"


wxBEGIN_EVENT_TABLE(CalculatorWindow,wxFrame)
	EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()


CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Window", wxPoint(200, 200), wxSize(515, 820))
{
	wxFont fontTextBox(24, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);
	wxFont fontButtons(18, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	textWindow = new wxTextCtrl(this, 125, "", wxPoint(0, 0), wxSize(500, 130), wxTE_RIGHT);
	textWindow->SetFont(fontTextBox);
	textWindow->SetBackgroundColour(wxColour(*wxBLACK));
	textWindow->SetForegroundColour(wxColour(255, 255, 255, 0));
	equalBtn = new wxButton(this, 10, "=", wxPoint(0, 130), wxSize(125, 130));
	equalBtn->SetFont(fontButtons);
	binBtn = new wxButton(this, 11, "bin", wxPoint(125, 130), wxSize(125, 130));
	hexBtn = new wxButton(this, 12, "hex", wxPoint(250, 130), wxSize(125, 130));
	decBtn = new wxButton(this, 13, "dec", wxPoint(375, 130), wxSize(125, 130));

	plusBtn = new wxButton(this, 14, "+", wxPoint(0, 260), wxSize(125, 130));
	sevenBtn = new wxButton(this, 7, "7", wxPoint(125, 260), wxSize(125, 130));
	eightBtn = new wxButton(this, 8, "8", wxPoint(250, 260), wxSize(125, 130));
	nineBtn = new wxButton(this, 9, "9", wxPoint(375, 260), wxSize(125, 130));

	minusBtn = new wxButton(this, 15, "-", wxPoint(0, 390), wxSize(125, 130));
	fourBtn = new wxButton(this, 4, "4", wxPoint(125, 390), wxSize(125, 130));
	fiveBtn = new wxButton(this, 5, "5", wxPoint(250, 390), wxSize(125, 130));
	sixBtn = new wxButton(this, 6, "6", wxPoint(375, 390), wxSize(125, 130));

	multiplBtn = new wxButton(this, 16, "*", wxPoint(0, 520), wxSize(125, 130));
	threeBtn = new wxButton(this, 3, "3", wxPoint(125, 520), wxSize(125, 130));
	twoBtn = new wxButton(this, 2, "2", wxPoint(250, 520), wxSize(125, 130));
	oneBtn = new wxButton(this, 1, "1", wxPoint(375, 520), wxSize(125, 130));

	divBtn = new wxButton(this, 17, "/", wxPoint(0, 650), wxSize(125, 130));
	modBtn = new wxButton(this, 18, "%", wxPoint(125, 650), wxSize(125, 130));
	zeroBtn = new wxButton(this, 0, "0", wxPoint(250, 650), wxSize(125, 130));
	negatBtn = new wxButton(this, 19, "+/-", wxPoint(375, 650), wxSize(125, 130));
	buttons.push_back(zeroBtn);
	buttons.push_back(oneBtn);
	buttons.push_back(twoBtn);
	buttons.push_back(threeBtn);
	buttons.push_back(fourBtn);
	buttons.push_back(fiveBtn);
	buttons.push_back(sixBtn);
	buttons.push_back(sevenBtn);
	buttons.push_back(eightBtn);
	buttons.push_back(nineBtn);

	buttons.push_back(binBtn);
	buttons.push_back(hexBtn);
	buttons.push_back(decBtn);
	buttons.push_back(modBtn);
	buttons.push_back(negatBtn);

	buttons.push_back(equalBtn);
	buttons.push_back(plusBtn);
	buttons.push_back(minusBtn);
	buttons.push_back(multiplBtn);
	buttons.push_back(divBtn);
	
	for (int i = 0; i < buttons.size(); i++) {
		buttons[i]->SetFont(fontButtons);
		buttons[i]->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
		if (i >= 0 && i <= 9) {
			buttons[i]->SetBackgroundColour(wxColour(78, 2, 80, 0));
		}
		else if (i > 9 && i <= 14) {
			buttons[i]->SetBackgroundColour(wxColour(152, 223, 175, 0));
		}
		else {
			buttons[i]->SetBackgroundColour(wxColour(202, 46, 85, 0));
		}
	}

}

void CalculatorWindow::OnButtonClicked(wxCommandEvent& evt)
{
	int cases = evt.GetId();
	if (cases < 10) {
		*textWindow << cases;
	}
	else {
		wxString textVal = textWindow->GetValue();
		saveValues(textVal);
		switch (cases) {
		case 10: 
		{
			while (numbers.size() >= 3) {
					if (numbers[1] == 14)
					{
						numbers[0] = numbers[0] + numbers[2];
					}
					else if (numbers[1] == 15) {
						numbers[0] = numbers[0] - numbers[2];
					}
					else if (numbers[1] == 16) {
						numbers[0] = numbers[0] * numbers[2];
					}
					else if (numbers[1] == 17) {
						numbers[0] = numbers[0] / numbers[2];
					}
					numbers.erase(std::next(numbers.begin(), 1), std::next(numbers.begin(), 3));
				
			}
			*textWindow << numbers[0];
			break;
		}
		case 11:
		{

			break;
		}
		case 12:
		{

			break;
		}
		case 13:
		{

			break;
		}
		case 14:
		{
			numbers.push_back(14);
			break;
		}
		case 15:
		{
			numbers.push_back(15);
			break;
		}
		case 16:
		{
			numbers.push_back(16);
			break;
		}
		case 17:
		{
			numbers.push_back(17);
			break;
		}
		case 18:
		{

			break;
		}
		case 19:
		{

			break;
		}
		evt.Skip();
		}
	}
	
}

void CalculatorWindow::saveValues(wxString toSave)
{
	double value;
	if (!toSave.ToDouble(&value)) {
	}
	numbers.push_back(value);
	textWindow->Clear();
}



