#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"
class ButtonFactory
{
private:
	CalculatorWindow* calcWindow = nullptr;
public:
	ButtonFactory(CalculatorWindow* _tempWind);
	~ButtonFactory();
	wxButton* createZeroButton();
	wxButton* createOneButton();
	wxButton* createTwoButton();
	wxButton* createThreeButton();
	wxButton* createFourButton();
	wxButton* createFiveButton();
	wxButton* createSixButton();
	wxButton* createSevenButton();
	wxButton* createEightButton();
	wxButton* createNineButton();
	wxButton* createEqualButton();
	wxButton* createBinButton();
	wxButton* createHexButton();
	wxButton* createDecButton();
	wxButton* createAddButton();
	wxButton* createMinusButton();
	wxButton* createMultiplButton();
	wxButton* createDivButton();
	wxButton* createModButton();
	wxButton* createNegatButton();
	wxButton* createClearButton();
};

