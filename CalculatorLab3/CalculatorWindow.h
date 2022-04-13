#pragma once
#include "wx/wx.h"
class CalculatorWindow : public wxFrame
{
private:
	wxTextCtrl* textWindow = nullptr;
	wxButton* zeroBtn = nullptr;
	wxButton* oneBtn = nullptr;
	wxButton* twoBtn = nullptr;
	wxButton* threeBtn = nullptr;
	wxButton* fourBtn = nullptr;
	wxButton* fiveBtn = nullptr;
	wxButton* sixBtn = nullptr;
	wxButton* sevenBtn = nullptr;
	wxButton* eightBtn = nullptr;
	wxButton* nineBtn = nullptr;
	wxButton* multiplBtn = nullptr;
	wxButton* divBtn = nullptr;
	wxButton* minusBtn = nullptr;
	wxButton* plusBtn = nullptr;
	wxButton* equalBtn = nullptr;
	wxButton* binBtn = nullptr;
	wxButton* hexBtn = nullptr;
	wxButton* decBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* negatBtn = nullptr;
	wxButton* clearBtn = nullptr;
	std::vector<wxButton*> buttons;
	std::vector<double> numbers;
	std::vector<int> operands;
	int prevButton = 0;
public:
	CalculatorWindow();
	void OnButtonClicked(wxCommandEvent& evt);
	float saveValues(wxString toSave);
	void Calculate();
	wxDECLARE_EVENT_TABLE();
};

