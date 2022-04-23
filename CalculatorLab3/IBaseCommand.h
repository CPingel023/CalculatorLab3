#pragma once
#include <vector>
class IBaseCommand
{
public:
	virtual double Execute() = 0;
	virtual double getSecond() = 0;
	virtual void setFirst(double adder) = 0;
};

class AddCommand : public IBaseCommand {

private:
	double addFirst;
	double addSecond;
public:
	AddCommand(double first, double second) {
		addFirst = first;
		addSecond = second;
	}
	double Execute() {
		return addFirst + addSecond;
	}
	void setFirst(double adder) {
		addFirst = adder;
	}
	double getSecond() {
		return addSecond;
	}

};

class SubtractCommand : public IBaseCommand {
private:
	double subFirst;
	double subSecond;
	std::vector<double> temp;
public:
	SubtractCommand(double first, double second) {
		subFirst = first;
		subSecond = second;
	}
	double Execute() {
		return subFirst - subSecond;
	}
	void setFirst(double adder) {
		subFirst = adder;
	}
	double getSecond() {
		return subSecond;
	}
};


