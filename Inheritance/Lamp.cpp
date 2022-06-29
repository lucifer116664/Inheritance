#include "Lamp.h"

int Lamp::GetLumens()
{
	return lumens;
}

Lamp& Lamp::operator=(const Lamp& other)
{
	this->colorNumber = other.colorNumber;
	this->isShining = other.isShining;
	this->lumens = other.lumens;
	return *this;
}

Lamp::Lamp()
{
	colorNumber = 0;
	isShining = false;
	lumens = 250;
}

Lamp::Lamp(int colorNumber, bool isShining, int lumens)
{
	this->colorNumber = colorNumber;
	this->isShining = isShining;
	this->lumens = lumens;
}

Lamp::~Lamp()
{
	delete[]color;
}