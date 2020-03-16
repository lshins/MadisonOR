#include <iostream>
#include <string>
#include "bodyPart.h"
#include "animalName.h"
#include "animal.h"
#include "animalDerived.h"

using namespace std;

void animalDerived::menu()
{
	int i, j, k, check;
	bool done = false;
	static int speciesEntered = 0, namesEntered = 0, partsEntered = 0;
	do
	{
		animals[noAnimals - 1].enterSpecies();
		for (check = 0; check < noAnimals; check++)
		{
			if (animals[noAnimals - 1].species == animals[check].species)
			{
				i = check;
				speciesEntered++;
				done = true;
			}
			if (check == noAnimals - 1)
				if (speciesEntered >= noAnimals)
				{
					cout << "Too many animals have been stored. Please enter an existing animal." << endl;
					cout << endl;
				}
		}
	} while (!done);
	done = false;
	do
	{
		animals[i].names[noNames - 1].enterName();
		for (check = 0; check < noNames; check++)
		{
			if (animals[i].names[noNames - 1].name == animals[i].names[check].name)
			{
				j = check;
				namesEntered++;
				done = true;
			}
			if (check == noNames - 1)
				if (namesEntered >= noNames)
				{
					cout << "Too many names have been stored. Please enter an existing name." << endl;
					cout << endl;
				}
		}
	} while (!done);
	done = false;
	do
	{
		animals[i].names[j].parts[noParts - 1].enterPart();
		for (check = 0; check < noParts; check++)
		{
			if (animals[i].names[j].parts[noParts - 1].part == animals[i].names[j].parts[check].part)
			{
				k = check;
				partsEntered++;
				done = true;
			}
			if (check == noParts - 1)
				if (partsEntered >= noParts)
				{
					cout << "Too many parts have been stored. Please enter an existing part." << endl;
					cout << endl;
				}

		}
	} while (!done);
	char a = 'c';
	do
	{
		animals[i].names[j].parts[k].edit();
		cout << "To continue editing information, press 'c'." << endl;
		cout << "To go back to the species info, press any other key." << endl;
		cout << endl;
		cin >> a;
		cout << endl;
	} while (a == 'c');
}