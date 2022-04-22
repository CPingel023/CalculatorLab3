#pragma once
#include "wx/wx.h"

class CalculatorWindow;

class CalculatorProcessor
{

public: 
	static CalculatorProcessor& GetInstance() {
		static CalculatorProcessor processor;
		return processor;
	}
private:
	wxTextCtrl* textWindow = nullptr;
	std::vector<double> numbers;
	std::vector<int> operands;
	std::vector<int> binary;
	int prevButton = 0;
public:
	CalculatorProcessor();
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator= (CalculatorProcessor const&) = delete;
	void CreateTextWindow(CalculatorWindow* parent);
	void ChangeTextBox(int id);
	void Calculate();
	double SaveValues(wxString toSave);
};

