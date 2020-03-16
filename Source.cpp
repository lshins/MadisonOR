#include <iostream>
#include <string>
#include "animalDerived.h"
#include "animal.h"
#include "animalName.h"
#include "bodyPart.h"

using namespace std;

int main()
{
	animalDerived MadisonsOR;
	char button = 'c';
	cout << "Welcome to Madison's Night Mare Medical Practice!" << endl;
	cout << endl;
	do
	{
		MadisonsOR.menu();
		cout << "To continue the program, press 'c'." << endl;
		cout << "To terminate the program, press any other key." << endl;
		cout << endl;
		cin >> button;
		cout << endl;
	} while (button == 'c');
}