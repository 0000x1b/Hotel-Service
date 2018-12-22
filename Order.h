#pragma once
#include <string>
using namespace std;

class Order
{
public:
	Order();
	~Order();
	int orderID, dateArrival, dateDeparture;
	string classRoom, nameReserved, surnameReserved;
	int getID();
	string status();
	void confirm(bool confirm);
	void checkOrder(bool check);
	void pay();
private:
	bool isCheck = false, isConfirm = false, isPay = false;
};

