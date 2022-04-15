#include "ButtonFactory.h"


ButtonFactory::ButtonFactory(CalculatorWindow* _tempWind)
{
    calcWindow = _tempWind;
}

ButtonFactory::~ButtonFactory()
{

}


wxButton* ButtonFactory::createZeroButton()
{
    return new wxButton(calcWindow, 0, "0", wxPoint(250, 650), wxSize(125, 130));
}

wxButton* ButtonFactory::createOneButton()
{
    return new wxButton(calcWindow, 1, "1", wxPoint(375, 520), wxSize(125, 130));
}

wxButton* ButtonFactory::createTwoButton()
{
    return new wxButton(calcWindow, 2, "2", wxPoint(250, 520), wxSize(125, 130));
}

wxButton* ButtonFactory::createThreeButton()
{
    return new wxButton(calcWindow, 3, "3", wxPoint(125, 520), wxSize(125, 130));;
}

wxButton* ButtonFactory::createFourButton()
{
    return new wxButton(calcWindow, 4, "4", wxPoint(125, 390), wxSize(125, 130));
}

wxButton* ButtonFactory::createFiveButton()
{
    return new wxButton(calcWindow, 5, "5", wxPoint(250, 390), wxSize(125, 130));
}

wxButton* ButtonFactory::createSixButton()
{
    return new wxButton(calcWindow, 6, "6", wxPoint(375, 390), wxSize(125, 130));
}

wxButton* ButtonFactory::createSevenButton()
{
    return new wxButton(calcWindow, 7, "7", wxPoint(125, 260), wxSize(125, 130));
}

wxButton* ButtonFactory::createEightButton()
{
    return new wxButton(calcWindow, 8, "8", wxPoint(250, 260), wxSize(125, 130));
}

wxButton* ButtonFactory::createNineButton()
{
    return new wxButton(calcWindow, 9, "9", wxPoint(375, 260), wxSize(125, 130));
}

wxButton* ButtonFactory::createEqualButton()
{
    return new wxButton(calcWindow, 10, "=", wxPoint(0, 130), wxSize(125, 130));
}

wxButton* ButtonFactory::createBinButton()
{
    return new wxButton(calcWindow, 11, "bin", wxPoint(125, 130), wxSize(125, 130));
}

wxButton* ButtonFactory::createHexButton()
{
    return new wxButton(calcWindow, 12, "hex", wxPoint(250, 130), wxSize(125, 130));
}

wxButton* ButtonFactory::createDecButton()
{
    return new wxButton(calcWindow, 13, "dec", wxPoint(375, 130), wxSize(125, 130));
}

wxButton* ButtonFactory::createAddButton()
{
    return new wxButton(calcWindow, 14, "+", wxPoint(0, 260), wxSize(125, 130));
}

wxButton* ButtonFactory::createMinusButton()
{
    return new wxButton(calcWindow, 15, "-", wxPoint(0, 390), wxSize(125, 130));
}

wxButton* ButtonFactory::createMultiplButton()
{
    return new wxButton(calcWindow, 16, "*", wxPoint(0, 520), wxSize(125, 130));
}

wxButton* ButtonFactory::createDivButton()
{
    return new wxButton(calcWindow, 17, "/", wxPoint(0, 650), wxSize(125, 130));
}

wxButton* ButtonFactory::createModButton()
{
    return new wxButton(calcWindow, 18, "%", wxPoint(125, 650), wxSize(125, 130));
}

wxButton* ButtonFactory::createNegatButton()
{
    return new wxButton(calcWindow, 19, "+/-", wxPoint(375, 650), wxSize(125, 130));
}

wxButton* ButtonFactory::createClearButton()
{
    return new wxButton(calcWindow, 20, "Clear", wxPoint(375, 0), wxSize(125, 130));
}
