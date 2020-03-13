#include <iostream>
#include <string>
#include "bodyPart.h"

using namespace std;

void bodyPart::enterPart()
{
	cout << "Input the animal's part." << endl;
	cout << endl;
	cin >> part;
	cout << endl;
}

void bodyPart::edit()
{
	char b = '1';
	do
	{
		cout << "To update whether the animal has a " << part << ", press '1'." << endl;
		cout << "To update the surgery date, press '2'." << endl;
		cout << "To update the price of the operation, press '3'." << endl;
		cout << "To reenter notes on complications of the operation, press '4'." << endl;
		cout << endl;
		cin >> b;
		switch (b)
		{
		case '1':
			cout << "If the animal has the " << part << ", press '1'." << endl;
			cout << "If not, press '0'." << endl;
			cout << endl;
			cin >> hasBodyPart;
			break;
		case '2':
			b = '1';
			cout << "Input the date of the animal's surgery." << endl;
			cout << endl;
			cin >> surgeryDate;
			break;
		case '3':
			b = '1';
			cout << "Input the price of the operation." << endl;
			cout << endl;
			cout << "$";
			cin >> price;
			break;
		case '4':
			b = '1';
			cout << "Input a paragraph on the surgical complications." << endl;
			cout << endl;
			cin >> complications;
			break;
		default:
			cout << "Invalid input. Please follow the menu instructions." << endl;
		}
		cout << endl;
	} while (b != '1');
}

void bodyPart::print()
{
	if (hasBodyPart)
		cout << "The animal has its " << part << "." << endl;
	else
		cout << "The animal's " << part << " has been removed." << endl;
	cout << "The surgery occured on " << surgeryDate << "." << endl;
	cout << "The cost of the surgery was $" << price << "." << endl;
	cout << "Complications: " << complications << endl;
	cout << endl;
}

bodyPart::bodyPart()
{
	part = "brain";
	hasBodyPart = false;
	surgeryDate = "Friday the 13th";
	price = 1000;
	complications = "Animal unable to function properly because of missing vital part. Whoops...";
}

bodyPart::~bodyPart()
{

}