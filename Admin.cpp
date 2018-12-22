#include "Admin.h"
using namespace std;

static int countID;

Admin::Admin(string name, string surname, int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	countID++;
	adminID = countID; 
}

Admin::~Admin()
{
	
}

void Admin::confirmOrder(Order *order, bool confirm)
{
	order->confirm(confirm);
	cout << " Order " << order->status();
}

void Admin::viewOrder(Order *order)
{
	order->checkOrder(true);
	cout << " Order ID: " << order->getID() << endl;
	cout << " Reserved name: " << order->nameReserved << endl;
	cout << " Reserved surname: " << order->surnameReserved << endl;
	cout << " Date arrival: " << order->dateArrival << endl;
	cout << " Date departure: " << order->dateDeparture << endl;
	cout << " Room class: " << order->classRoom << endl;
	cout << " Status: " << order->status() << endl;
}

