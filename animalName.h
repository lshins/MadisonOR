#ifndef H_animalName
#define H_animalName

#include <iostream>
#include <string>
#include "bodyPart.h"

using namespace std;

class animalName : public bodyPart
{
public:
	string name;

	void enterName();
	animalName();
	~animalName();
};

#endif