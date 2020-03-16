#ifndef H_animal
#define H_animal

#include <iostream>
#include <string>
#include "animalName.h"
#include "bodyPart.h"

using namespace std;

const int noNames = 10;

class animal : public animalName, public bodyPart
{
public:
	string species;
	animalName names[noNames];

	void enterSpecies();
	animal();
	~animal();
};

#endif