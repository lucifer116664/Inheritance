#include "Lighter.h"

void Lighter::SetColor()
{
	cout << "Choose the color (1.White 2.Red 3.Yellow):\n";
	cin >> colorNumber;
	--colorNumber;
}

void Lighter::SetLumens()
{
	cout << "How many lumens lamps you want to use?\n";
	cin >> lumens;
}

void Lighter::SetIsShining()
{
	isShining = !isShining;
}

string Lighter::GetIsShining()
{
	if (isShining)
		return "ON";
	else
		return "OFF";
}

int Lighter::GetLumens()
{
	return lumens * numberOfLamps;
}

void Lighter::SetBrand()
{
	cout << "Choose the brand:\n";
	cin >> brand;
}

void Lighter::SetNumberOfLamps()
{
	cout << "Enter the number of lamps in the lighter:\n";
	cin >> numberOfLamps;
}

void Lighter::SetType()
{
	cout << "Choose the type of lighter (1.Table lamp 2.Chandelier):\n";
	cin >> typeNumber;
	--typeNumber;
}

void Lighter::PrintClass()
{
	cout << "Power: " << GetIsShining() << "\t" << "Color: " << color[colorNumber] << "\t" << "Number of lamps:" << numberOfLamps << "\t" << "Lumens: " << GetLumens() << "\t" << "Type:" << type[typeNumber] << "\t\t" << "Brand: " << brand << endl;
}

Lighter& Lighter::operator=(const Lighter& other)
{
	this->brand = other.brand;
	this->numberOfLamps = other.numberOfLamps;
	this->typeNumber = other.typeNumber;
	return *this;
}



Lighter::Lighter()
{
	typeNumber = 0;
	brand = "Lux";
	numberOfLamps = 3;
}

Lighter::Lighter(int typeNumber, string brand, int numberOfLamps)
{
	this->typeNumber = typeNumber;
	this->brand = brand;
	this->numberOfLamps = numberOfLamps;
}

Lighter::~Lighter()
{
	delete[]type;
}
