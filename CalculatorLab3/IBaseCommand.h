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

class MultCommand : public IBaseCommand {
private:
	double multFirst;
	double multSecond;

public:
	MultCommand(double first, double second) {
		multFirst = first;
		multSecond = second;
	}
	double Execute() {
		return multFirst * multSecond;
	}
	void setFirst(double mult) {
		multFirst = mult;
	}
	double getSecond() {
		return multSecond;
	}
};

class DivCommand : public IBaseCommand {
private:
	double divFirst;
	double divSecond;

public:
	DivCommand(double first, double second) {
		divFirst = first;
		divSecond = second;
	}
	double Execute() {
		return divFirst / divSecond;
	}
	void setFirst(double mult) {
		divFirst = mult;
	}
	double getSecond() {
		return divSecond;
	}
};

class ModCommand : public IBaseCommand {
private:
	double modFirst;
	double modSecond;

public:
	ModCommand(double first, double second) {
		modFirst = first;
		modSecond = second;
	}
	double Execute() {
		return (int)modFirst % (int)modSecond;
	}
	void setFirst(double mult) {
		modFirst = mult;
	}
	double getSecond() {
		return modSecond;
	}
};


