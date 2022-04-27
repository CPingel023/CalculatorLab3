#include "ButtonFactoryTests.h"

ButtonFactoryTests::ButtonFactoryTests()
{

}

ButtonFactoryTests::~ButtonFactoryTests()
{

}

bool ButtonFactoryTests::Check5ButtonId()
{
	testButton = factory.createFiveButton();
	if (testButton->GetId() == 5) {
		return true;
	}
	return false;
	
}

bool ButtonFactoryTests::CheckEqualButtonId()
{
	testButton = factory.createEqualButton();
	if (testButton->GetId() == 10) {
		return true;
	}
	return false;
}

bool ButtonFactoryTests::CheckPlusButtonId()
{
	testButton = factory.createAddButton();
	if (testButton->GetId() == 14) {
		return true;
	}
	return false;
}

bool ButtonFactoryTests::CheckHexButtonId()
{
	testButton = factory.createHexButton();
	if (testButton->GetId() == 12) {
		return true;
	}
	return false;
}

bool ButtonFactoryTests::Check0ButtonId()
{
	testButton = factory.createZeroButton();
	if (testButton->GetId() == 0) {
		return true;
	}
	return false;
}

bool ButtonFactoryTests::Check5ButtonColor()
{
	testButton = factory.createFiveButton();
	if (testButton->GetBackgroundColour() == wxColour(78,2,80,0)) {
		return true;
	}
	return false;
}

bool ButtonFactoryTests::CheckEqualButtonColor()
{
	testButton = factory.createEqualButton();
	if (testButton->GetBackgroundColour() == wxColour(202, 46, 85, 0)) {
		return true;
	}
}

bool ButtonFactoryTests::CheckPlusButtonColor()
{
	testButton = factory.createAddButton();
	if (testButton->GetBackgroundColour() == wxColour(202, 46, 85, 0)) {
		return true;
	}
}

bool ButtonFactoryTests::CheckHexButtonColor()
{
	testButton = factory.createHexButton();
	if (testButton->GetBackgroundColour() == wxColour(152, 223, 175, 0)) {
		return true;
	}
}

bool ButtonFactoryTests::Check0ButtonColor()
{
	testButton = factory.createZeroButton();
	if (testButton->GetBackgroundColour() == wxColour(78, 2, 80, 0)) {
		return true;
	}
	return false;
}
