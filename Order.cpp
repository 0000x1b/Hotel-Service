#include "Order.h"

static int countID;

using namespace std;

Order::Order()
{
	countID++;
	orderID = countID;
}


Order::~Order()
{
}

int Order::getID()
{
	return orderID;
}

string Order::status()
{
	if (isConfirm == true)
		return " confirmed ";
	else if (isCheck == false)
			return " not checked ";
	else return " canceled ";

}

void Order::confirm(bool confirm)
{
	this->isConfirm = confirm;
	this->isCheck = true;
}

void Order::checkOrder(bool check)
{
	this->isCheck = check;
}

void Order::pay()
{
	this->isPay = true;
}
