#ifndef H_animal
#define H_animal

#include <iostream>
#include <string>
#include "animalName.h"
#include "bodyPart.h"

using namespace std;

class animal : public animalName, public bodyPart
{
	animal();
	~animal();
};

#endif