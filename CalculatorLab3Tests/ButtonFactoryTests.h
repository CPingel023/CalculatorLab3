#pragma once
#include "../CalculatorLab3/ButtonFactory.h"
#include "../CalculatorLab3/CalculatorWindow.h"
class ButtonFactoryTests
{
private: 
	wxButton* testButton = nullptr;
	CalculatorWindow* dummyAddress = new CalculatorWindow();
	ButtonFactory factory = ButtonFactory(dummyAddress);
public:
	ButtonFactoryTests();
	~ButtonFactoryTests();
	bool Check5ButtonId();
	bool CheckEqualButtonId();
	bool CheckPlusButtonId();
	bool CheckHexButtonId();
	bool Check0ButtonId();
	bool Check5ButtonColor();
	bool CheckEqualButtonColor();
	bool CheckPlusButtonColor();
	bool CheckHexButtonColor();
	bool Check0ButtonColor();
};

