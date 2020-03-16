#include <iostream>
#include <string>
#include "bodyPart.h"
#include "animalName.h"
#include "animal.h"

using namespace std;

void animal::enterSpecies()
{
	cout << "Enter a new or existing species to access the animal's data." << endl;
	cout << endl;
	cin >> species;
	cout << endl;
}

animal::animal()
{
	animalName();
	species = "Sasquatch";
}

animal::~animal()
{

}
