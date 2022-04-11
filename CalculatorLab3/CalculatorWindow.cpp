#include "CalculatorWindow.h"


wxBEGIN_EVENT_TABLE(CalculatorWindow,wxFrame)


wxEND_EVENT_TABLE()


CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Window", wxPoint(200, 200), wxSize(515, 820))
{
	wxFont fontTextBox(24, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRAHEAVY, false);
	wxFont fontButtons(18, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	textWindow = new wxTextCtrl(this, 125, "", wxPoint(0, 0), wxSize(500, 130), wxTE_RIGHT);
	textWindow->SetFont(fontTextBox);
	textWindow->SetBackgroundColour(wxColour(*wxBLACK));
	textWindow->SetForegroundColour(wxColour(255, 255, 255, 0));
	equalBtn = new wxButton(this, 10, "=", wxPoint(0, 130), wxSize(125, 130));
	equalBtn->SetFont(fontButtons);
	binBtn = new wxButton(this, 11, "bin", wxPoint(125, 130), wxSize(125, 130));
	hexBtn = new wxButton(this, 12, "hex", wxPoint(250, 130), wxSize(125, 130));
	decBtn = new wxButton(this, 13, "dec", wxPoint(375, 130), wxSize(125, 130));
	plusBtn = new wxButton(this, 14, "+", wxPoint(0, 260), wxSize(125, 130));
	sevenBtn = new wxButton(this, 7, "7", wxPoint(125, 260), wxSize(125, 130));
	eightBtn = new wxButton(this, 8, "8", wxPoint(250, 260), wxSize(125, 130));
	nineBtn = new wxButton(this, 9, "9", wxPoint(375, 260), wxSize(125, 130));
	minusBtn = new wxButton(this, 15, "-", wxPoint(0, 390), wxSize(125, 130));
	fourBtn = new wxButton(this, 4, "4", wxPoint(125, 390), wxSize(125, 130));
	fiveBtn = new wxButton(this, 5, "5", wxPoint(250, 390), wxSize(125, 130));
	sixBtn = new wxButton(this, 6, "6", wxPoint(375, 390), wxSize(125, 130));
	multiplBtn = new wxButton(this, 16, "*", wxPoint(0, 520), wxSize(125, 130));
	threeBtn = new wxButton(this, 3, "3", wxPoint(125, 520), wxSize(125, 130));
	twoBtn = new wxButton(this, 2, "2", wxPoint(250, 520), wxSize(125, 130));
	oneBtn = new wxButton(this, 1, "1", wxPoint(375, 520), wxSize(125, 130));
	divBtn = new wxButton(this, 17, "/", wxPoint(0, 650), wxSize(125, 130));
	modBtn = new wxButton(this, 18, "%", wxPoint(125, 650), wxSize(125, 130));
	zeroBtn = new wxButton(this, 0, "0", wxPoint(250, 650), wxSize(125, 130));
	negatBtn = new wxButton(this, 19, "+/-", wxPoint(375, 650), wxSize(125, 130));
	binBtn->SetFont(fontButtons);
	hexBtn->SetFont(fontButtons);
	decBtn->SetFont(fontButtons);
	plusBtn->SetFont(fontButtons);
	sevenBtn->SetFont(fontButtons);
	eightBtn->SetFont(fontButtons);
	nineBtn->SetFont(fontButtons);
	minusBtn->SetFont(fontButtons);
	fourBtn->SetFont(fontButtons);
	fiveBtn->SetFont(fontButtons);
	sixBtn->SetFont(fontButtons);
	multiplBtn->SetFont(fontButtons);
	oneBtn->SetFont(fontButtons);
	twoBtn->SetFont(fontButtons);
	threeBtn->SetFont(fontButtons);
	divBtn->SetFont(fontButtons);
	modBtn->SetFont(fontButtons);
	zeroBtn->SetFont(fontButtons);
	negatBtn->SetFont(fontButtons);
	equalBtn->SetBackgroundColour(wxColour(120, 68, 0, 0));
	plusBtn->SetBackgroundColour(wxColour(120, 68, 0, 0));
	minusBtn->SetBackgroundColour(wxColour(120, 68, 0, 0));
	multiplBtn->SetBackgroundColour(wxColour(120, 68, 0, 0));
	divBtn->SetBackgroundColour(wxColour(120, 68, 0, 0));

	binBtn->SetBackgroundColour(wxColour(124, 124, 124, 0));
	hexBtn->SetBackgroundColour(wxColour(124, 124, 124, 0));
	decBtn->SetBackgroundColour(wxColour(124, 124, 124, 0));
	modBtn->SetBackgroundColour(wxColour(124, 124, 124, 0));
	negatBtn->SetBackgroundColour(wxColour(124, 124, 124, 0));

	oneBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	twoBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	threeBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	fourBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	fiveBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	sixBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	sevenBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	eightBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	nineBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	zeroBtn->SetBackgroundColour(wxColour(0, 68, 120, 0));
	zeroBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	oneBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	twoBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	threeBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	fourBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	fiveBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	sixBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	sevenBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	eightBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	nineBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	equalBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	plusBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	minusBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	multiplBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	divBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	binBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	hexBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	decBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	modBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
	negatBtn->SetOwnForegroundColour(wxColour(255, 255, 255, 0));

}



