// CalculatorLab3Tests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include "../CalculatorLab3/App.h"
#include "../CalculatorLab3/ButtonFactory.h"
#include "../CalculatorLab3/CalculatorProcessor.h"
#include "../CalculatorLab3/CalculatorWindow.h"
#include "../CalculatorLab3/IBaseCommand.h"
#include "CalculatorProcessorTests.h"


int main()
{

    //memory leak detection
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1);
    _CrtDumpMemoryLeaks();
    CalculatorProcessorTests test = CalculatorProcessorTests();
    test.Test4Plus7times2();
    test.Test5Times6Div3();
    test.Test16Times2Mod4();
    test.Test362Div2Plus4Minus14();
    test.Test5Plus7Times8Minus48Times13();
    test.Test10ToBinary();
    test.Test10101100ToDecimal(10101100);
    test.Test150ToHex();
    test.Test0xFFToDecimal();
    test.Test1101011ToHex();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
