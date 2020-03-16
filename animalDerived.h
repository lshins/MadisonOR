#ifndef H_animalDerived
#define H_animalDerived

#include <iostream>
#include <string>
#include "bodyPart.h"
#include "animalName.h"
#include "animal.h"

using namespace std;

const int noAnimals = 3;

class animalDerived : protected animal, protected animalName, protected bodyPart
{
	animal animals[noAnimals];

public:
	void menu();
};

#endif