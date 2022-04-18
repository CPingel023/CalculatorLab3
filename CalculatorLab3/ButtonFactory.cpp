#include "ButtonFactory.h"

wxFont fontButtons(18, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
ButtonFactory::ButtonFactory(CalculatorWindow* _tempWind)
{
    calcWindow = _tempWind;
}

ButtonFactory::~ButtonFactory()
{

}


wxButton* ButtonFactory::createZeroButton()
{
    wxButton* temp = new wxButton(calcWindow, 0, "0", wxPoint(250, 650), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createOneButton()
{
    wxButton* temp = new wxButton(calcWindow, 1, "1", wxPoint(375, 520), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createTwoButton()
{
    wxButton* temp = new wxButton(calcWindow, 2, "2", wxPoint(250, 520), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createThreeButton()
{
    wxButton* temp = new wxButton(calcWindow, 3, "3", wxPoint(125, 520), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createFourButton()
{
    wxButton* temp = new wxButton(calcWindow, 4, "4", wxPoint(125, 390), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createFiveButton()
{
    wxButton* temp = new wxButton(calcWindow, 5, "5", wxPoint(250, 390), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createSixButton()
{
    wxButton* temp = new wxButton(calcWindow, 6, "6", wxPoint(375, 390), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createSevenButton()
{
    wxButton* temp = new wxButton(calcWindow, 7, "7", wxPoint(125, 260), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createEightButton()
{
    wxButton* temp = new wxButton(calcWindow, 8, "8", wxPoint(250, 260), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createNineButton()
{
    wxButton* temp = new wxButton(calcWindow, 9, "9", wxPoint(375, 260), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(78, 2, 80, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createEqualButton()
{
    wxButton* temp = new wxButton(calcWindow, 10, "=", wxPoint(0, 130), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(202, 46, 85, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createBinButton()
{
    wxButton* temp = new wxButton(calcWindow, 11, "bin", wxPoint(125, 130), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createHexButton()
{
    wxButton* temp = new wxButton(calcWindow, 12, "hex", wxPoint(250, 130), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createDecButton()
{
    wxButton* temp = new wxButton(calcWindow, 13, "dec", wxPoint(375, 130), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createAddButton()
{
    wxButton* temp = new wxButton(calcWindow, 14, "+", wxPoint(0, 260), wxSize(125, 130));;
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(202, 46, 85, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createMinusButton()
{
    wxButton* temp = new wxButton(calcWindow, 15, "-", wxPoint(0, 390), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(202, 46, 85, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createMultiplButton()
{
    wxButton* temp = new wxButton(calcWindow, 16, "*", wxPoint(0, 520), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(202, 46, 85, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createDivButton()
{
    wxButton* temp = new wxButton(calcWindow, 17, "/", wxPoint(0, 650), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(202, 46, 85, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createModButton()
{
    wxButton* temp = new wxButton(calcWindow, 18, "%", wxPoint(125, 650), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createNegatButton()
{
    wxButton* temp = new wxButton(calcWindow, 19, "+/-", wxPoint(375, 650), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}

wxButton* ButtonFactory::createClearButton()
{
    wxButton* temp = new wxButton(calcWindow, 20, "Clear", wxPoint(375, 0), wxSize(125, 130));
    temp->SetFont(fontButtons);
    temp->SetBackgroundColour(wxColour(152, 223, 175, 0));
    temp->SetOwnForegroundColour(wxColour(255, 255, 255, 0));
    return temp;
}