#pragma once
#include <string>
using namespace std;

class Lamp
{
protected:
	int colorSize = 3;
	int colorNumber;

	bool isShining;
	string* color = new string[colorSize]{ "White", "Red", "Yellow" };
	int lumens;

	virtual void SetIsShining() = 0;

	virtual string GetIsShining() = 0;

	virtual void SetColor() = 0;

	virtual void SetLumens() = 0;

	virtual int GetLumens();

	Lamp& operator =(const Lamp& other);
	
	Lamp();

	Lamp(int colorNumber, bool isShining, int lumens);
	
	virtual ~Lamp();
	
};

