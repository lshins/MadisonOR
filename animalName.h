#ifndef H_animalName
#define H_animalName

#include <iostream>
#include <string>
#include "bodyPart.h"

using namespace std;

const int noParts = 10;

class animalName : public bodyPart
{
public:
	string name;
	bodyPart parts[noParts];

	void enterName();
	animalName();
	~animalName();
};

#endif