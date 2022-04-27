#include "CalculatorProcessorTests.h"

CalculatorProcessorTests::CalculatorProcessorTests()
{
	testProcessing = &CalculatorProcessor::GetInstance();
}

CalculatorProcessorTests::~CalculatorProcessorTests()
{
}

void CalculatorProcessorTests::Test4Plus7times2()
{
	testProcessing->AddNumsToNumbers(4);
	testProcessing->AddOperation(14);
	testProcessing->AddNumsToNumbers(7);
	testProcessing->AddOperation(16);
	testProcessing->AddNumsToNumbers(2);
	testProcessing->ChangeTextBox(10);
	if (testProcessing->GetAnswer() == 22) {
		std::cout << "7 + 4 * 2 = 22: true" << std::endl;
	}
	else {
		std::cout << "Test 1 did not comppute correctly." << std::endl;
	}
}

void CalculatorProcessorTests::Test5Times6Div3()
{
	testProcessing->AddNumsToNumbers(5);
	testProcessing->AddOperation(16);
	testProcessing->AddNumsToNumbers(6);
	testProcessing->AddOperation(17);
	testProcessing->AddNumsToNumbers(3);
	testProcessing->ChangeTextBox(10);
	if (testProcessing->GetAnswer() == 10) {
		std::cout << "5 * 6 / 3 = 10: true" << std::endl;
	}
	else {
		std::cout << "Test 2 did not compute correctly." << std::endl;
	}
}

void CalculatorProcessorTests::Test16Times2Mod4()
{
	testProcessing->AddNumsToNumbers(16);
	testProcessing->AddOperation(16);
	testProcessing->AddNumsToNumbers(2);
	testProcessing->AddOperation(18);
	testProcessing->AddNumsToNumbers(4);
	testProcessing->ChangeTextBox(10);
	if (testProcessing->GetAnswer() == 0) {
		std::cout << "16 * 2 % 4 = 0: true" << std::endl;
	}
	else {
		std::cout << "Test 3 did not compute correctly." << std::endl;
	}
}

void CalculatorProcessorTests::Test362Div2Plus4Minus14()
{
	testProcessing->AddNumsToNumbers(362);
	testProcessing->AddOperation(17);
	testProcessing->AddNumsToNumbers(2);
	testProcessing->AddOperation(14);
	testProcessing->AddNumsToNumbers(4);
	testProcessing->AddOperation(15);
	testProcessing->AddNumsToNumbers(14);
	testProcessing->ChangeTextBox(10);
	if (testProcessing->GetAnswer() == 171) {
		std::cout << "362 / 2 + 4 - 14 = 171: true" << std::endl;
	}
	else {
		std::cout << "Test 3 did not compute correctly." << std::endl;
	}
}

void CalculatorProcessorTests::Test5Plus7Times8Minus48Times13()
{
	testProcessing->AddNumsToNumbers(5);
	testProcessing->AddOperation(14);
	testProcessing->AddNumsToNumbers(7);
	testProcessing->AddOperation(16);
	testProcessing->AddNumsToNumbers(8);
	testProcessing->AddOperation(15);
	testProcessing->AddNumsToNumbers(48);
	testProcessing->AddOperation(16);
	testProcessing->AddNumsToNumbers(13);
	testProcessing->ChangeTextBox(10);
	if (testProcessing->GetAnswer() == 624) {
		std::cout << "5 + 7 * 8 - 48 * 13 = 624: true" << std::endl;
	}
	else {
		std::cout << "Test 3 did not compute correctly." << std::endl;
	}
}

void CalculatorProcessorTests::Test10ToBinary()
{
	
	std::vector<int> temp = testProcessing->DecimalToBinary(10);
	std::vector<int> temp2 = { 0, 1, 0, 1 };
	bool testSucceed = true;
	for(int i = temp.size() - 1; i >= 0; i--) {
		if (temp[i] != temp2[i]) {
			testSucceed = false;
			break;
		}
	}
	if (testSucceed) {
		std::cout << "Test is of 10 to binary 1010 is successful." << std::endl;
	}
	else {
		std::cout << "10 to Binary failed";
	}
}

void CalculatorProcessorTests::Test10101100ToDecimal(int bin)
{
	int dec = testProcessing->BinaryToDecimal(10101100);
	if (dec == 172) {
		std::cout << "Test computed correctly to 172" << std::endl;
	}
}

void CalculatorProcessorTests::Test150ToHex()
{
	std::string temp = testProcessing->DecimalToHex(150);
	if (temp == "0x96") {
		std::cout << "150 to Hex Computed correctly." << std::endl;
	}
	else {
		std::cout << temp << ", 150 to Hex has failed.";
	}
}

void CalculatorProcessorTests::Test0xFFToDecimal()
{
	int answer = testProcessing->HexToDecimal("0xFF");
	if (answer == 255) {
		std::cout << "0xFF to Decimal has completed to 255" << std::endl;
	}
}

void CalculatorProcessorTests::Test1101011ToHex()
{
	int answer = testProcessing->BinaryToDecimal(1101011);
	std::string finalAnswer = testProcessing->DecimalToHex(answer);
	if (finalAnswer == "0x6B") {
		std::cout << "1101011 converted correctly to 107, then to 0x6B" << std::endl;
	}
}
