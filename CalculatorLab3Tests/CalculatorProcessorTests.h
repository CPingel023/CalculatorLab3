#pragma once
#include "../CalculatorLab3/App.h"
#include "../CalculatorLab3/ButtonFactory.h"
#include "../CalculatorLab3/CalculatorProcessor.h"
#include "../CalculatorLab3/CalculatorWindow.h"
#include "../CalculatorLab3/IBaseCommand.h"
class CalculatorProcessorTests
{
private:
	CalculatorProcessor* testProcessing = nullptr;
public:
	CalculatorProcessorTests();
	~CalculatorProcessorTests();
	void Test4Plus7times2();
	void Test5Times6Div3();
	void Test16Times2Mod4();
	void Test362Div2Plus4Minus14();
	void Test5Plus7Times8Minus48Times13();
	void Test10ToBinary();
	void Test10101100ToDecimal(int bin);
	void Test150ToHex();
	void Test0xFFToDecimal();
	void Test1101011ToHex();
};

