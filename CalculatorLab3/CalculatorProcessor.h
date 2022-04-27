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
	double answer;
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
	void AddNumsToNumbers(float numb);
	void AddOperation(int id);
	double GetAnswer() {
		return answer;
	}
	std::vector<int> DecimalToBinary(int num);	
	std::string DecimalToHex(int num);
	int HexToDecimal(std::string hexNum);
};

