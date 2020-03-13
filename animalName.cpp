#include <iostream>
#include <string>
#include "bodyPart.h"
#include "animalName.h"

using namespace std;

void animalName::enterName()
{
	cout << "Input the animal's name." << endl;
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