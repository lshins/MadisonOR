#ifndef H_bodyPart
#define H_bodyPart

#include <iostream>
#include <string>

using namespace std;

class bodyPart
{
public:
	string part;
	bool hasBodyPart;
	string surgeryDate;
	int price;
	string complications;

	void enterPart();
	void edit();
	void print();
	bodyPart();
	~bodyPart();
};

#endif