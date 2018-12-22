#pragma once
#include "Person.h"
#include "Order.h"
#include <string>
#include <iostream>
using namespace std; 

class Admin :
	public Person
{
public:
	Admin(string name, string surname, int age);
	~Admin();
	int adminID;
	void confirmOrder(Order *orderbool, bool confirm);
	void viewOrder(Order *order);
};

