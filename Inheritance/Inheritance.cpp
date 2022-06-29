#include "Lamp.h"
#include "Lighter.h"

int main()
{
	int choose;

	Lighter myLighter;

	do
	{
		cout << "Commands:  1:Power ON/OFF;  2:Show info;  3:Change lighter;  0:Stop" << endl;
		cin >> choose;
		
		switch (choose)
		{
		case 1:
			myLighter.SetIsShining();
			break;
		case 2:
			myLighter.PrintClass();
			break;
		case 3:
			int whatToChange;
			do
			{
				cout << "1:Brand;  2:Type;  3:Number of lamps;  4:Color;  5:Lumens;  0:Go back" << endl;
				cin >> whatToChange;
				switch (whatToChange)
				{
				case 1:
					myLighter.SetBrand();
					break;
				case 2:
					myLighter.SetType();
					break;
				case 3:
					myLighter.SetNumberOfLamps();
					break;
				case 4:
					myLighter.SetColor();
					break;
				case 5:
					myLighter.SetLumens();
					break;
				case 0:
					break;
				default:
					cout << "Wrong command!!!\n";
				}
			} while (whatToChange != 0);
			break;
		case 0:
			break;
		default:
			cout << "Wrong command!!!\n";
		}
	} while (choose != 0);

	return 0;
}
