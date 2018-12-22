#pragma once
#include "Person.h"
#include "Order.h"
#include <string>
#include <iostream>
#include "Room.h"
using namespace std;

class Client :
	public Person
{
public:
	Client();
	Client(string name, string surname, int age, int paymentBill);
	~Client();
	int clientID;
	Order *order;
	void createOrder(Order *order);
	void viewOrder();
	void payOrder(Room *room);
	private:
	int paymentBill;
};

