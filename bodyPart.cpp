#include <iostream>
#include <string>
#include "bodyPart.h"

using namespace std;

void bodyPart::enterPart()
{
	cout << "Enter a new or existing body part to access the animal's data." << endl;
	cout << endl;
	cin >> part;
	cout << endl;
}

void bodyPart::edit()
{
	char b = '1';
	char c = '0';
	do
	{
		cout << "To update whether the animal has a " << part << ", press '1'." << endl;
		cout << "To update the surgery date, press '2'." << endl;
		cout << "To update the price of the operation, press '3'." << endl;
		cout << "To reenter notes on complications of the operation, press '4'." << endl;
		cout << "To print the data, press '5'." << endl;
		cout << endl;
		cin >> b;
		cout << endl;
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
			cout << "Were there complications during the surgery?" << endl;
			cout << endl;
			cin >> complications;
			cin.ignore(1000, '\n');
			break;
		case '5':
			b = '1';
			print();
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
	complications = "Animal unable to function properly because of missing part. Whoops...";
}

bodyPart::~bodyPart()
{

}