#pragma once
#include "wx/wx.h"
#include "CalculatorWindow.h"
class App : public wxApp
{
private:
	CalculatorWindow* calc = nullptr;
public:
	App();
	~App();
	bool OnInit();
};

