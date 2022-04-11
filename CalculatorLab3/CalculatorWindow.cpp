#include "CalculatorWindow.h"


wxBEGIN_EVENT_TABLE(CalculatorWindow,wxFrame)


wxEND_EVENT_TABLE()


CalculatorWindow::CalculatorWindow() : wxFrame(nullptr, wxID_ANY, "Calculator Window", wxPoint(200, 200), wxSize(500, 750))
{

}



