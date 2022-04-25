#pragma once
#include "wx/wx.h"
#include "IBaseCommand.h"

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
	std::vector<IBaseCommand*> operators;
	std::vector<char> binhex;
	std::vector<int> operators2;
	int prevButton = 0;
	int prevConversion = 0;
public:
	CalculatorProcessor();
	~CalculatorProcessor();
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator= (CalculatorProcessor const&) = delete;
	void CreateTextWindow(CalculatorWindow* parent);
	void ChangeTextBox(int id);
	void Calculate();
	double SaveValues(wxString toSave);
	bool BinaryCheck(wxString temp);
	int BinaryToDecimal(int num);
};

