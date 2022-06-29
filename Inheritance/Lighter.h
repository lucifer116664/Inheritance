#pragma once
#include <iostream>
#include "Lamp.h"

class Lighter : public Lamp
{
private:
	int typeSize = 2;
	int typeNumber;

	string brand;
	int numberOfLamps;
	string* type = new string[typeSize]{ "Table lamp", "Chandelier" };

public:

	void SetColor() override;

	void SetLumens() override;

	void SetIsShining() override;

	string GetIsShining() override;

	int GetLumens() override;

	void SetBrand();

	void SetNumberOfLamps();

	void SetType();

	void PrintClass();

	Lighter& operator =(const Lighter& other);

	Lighter();

	Lighter(int typeNumber, string brand, int numberOfLamps);

	~Lighter() override;
	
};

