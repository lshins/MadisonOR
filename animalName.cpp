#include <iostream>
#include <string>
#include "bodyPart.h"
#include "animalName.h"

using namespace std;

void animalName::enterName()
{
	cout << "Enter a new or existing name to access the animal's data." << endl;
	cout << endl;
	cin >> name;
	cout << endl;
}

animalName::animalName()
{
	bodyPart();
	name = "Fluffy";
}

animalName::~animalName()
{

}