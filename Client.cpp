#include "Client.h"
using namespace std; 

static int countID;

Client::Client()
{
	cout << "Enter your name: ";
	cin >> this->name; 
	cout << "Enter your surname: ";
	cin >> this->surname;
	cout << "Enter your age: ";
	cin >> this->age;
	cout << "Enter your payment bill: ";
	cin >> this->paymentBill; 
	countID++;
	clientID = countID;
	cerr << " all object created " << endl;
}

Client::Client(string name, string surname, int age, int paymentBill)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->paymentBill = paymentBill;
	countID++;
	clientID = countID;
}

Client::~Client()
{
}

void Client::createOrder(Order *order)
{
	cout << " Enter date arrival: ";
	cin >> order->dateArrival;
	cout << " Enter date departure: ";
	cin >> order->dateDeparture;
	cout << " Enter class room: ";
	cin >> order->classRoom;
	order->nameReserved = this->name;
	order->surnameReserved = this->surname;
	cout << " Order ID: " << order->getID() << endl;
	this->order = order;
	cout << endl;
}

void Client::viewOrder()
{
	cout << " Order ID: " << this->order->getID() << endl;
	cout << " Reserved name: " << this->order->nameReserved << endl;
	cout << " Reserved surname: " << this->order->surnameReserved << endl;
	cout << " Date arrival: " << this->order->dateArrival << endl;
	cout << " Date departure: " << this->order->dateDeparture << endl;
	cout << " Room class: " << this->order->classRoom << endl;
	cout << " Status: " << this->order->status() << endl;

}

void Client::payOrder(Room *room)
{
	room->payRoom();
	this->order->pay();
}




