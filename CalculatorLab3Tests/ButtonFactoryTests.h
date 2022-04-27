#pragma once
#include "../CalculatorLab3/ButtonFactory.h"
#include "../CalculatorLab3/CalculatorWindow.h"
class ButtonFactoryTests
{
private: 
	wxButton* testButton = nullptr;
	ButtonFactory factory;
public:
	bool Check5ButtonId(wxButton* _testButton);
	bool CheckEqualButtonId(wxButton* _testButton);
	bool CheckPlusButtonId(wxButton* _testButton);
	bool CheckHexButtonId(wxButton* _testButton);
	bool Check0ButtonId(wxButton* _testButton);
};

