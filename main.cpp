#include <iostream>
#include <string>
#include "Admin.h"
#include "Client.h"
#include "Order.h"
#include "Room.h"
#include "EconomRoom.h"
#include "StandartRoom.h"
#include "BusinessRoom.h"

using namespace std;

template <class T> int neq(T, T);
class Complex
{
public: 
	double real;
	double imag;
	Complex(double re = 0.0, double im = 0.0)
	{
		real = re;
		imag = im;
	}
	int operator !=(Complex &Keyval)
	{
		if (real == Keyval.real && imag == Keyval.imag)
			return 0;
		else
		{
			return 1;
		}
	}
};


void checkAge(int age)
{
	if (age >= 18)
		cout << "age is norm";
	else throw Client();
}

template <typename T>
class Person
{
private:
	int age;
public:
	Person();
	~Person();
	void setage(T age);
};

int main()
{
	int age;
	cout << "Enter your age ";
	cin >> age;
	try {
		checkAge(age);
	}
	catch (Client())
	{
		cerr << "correct";
	}

	Admin admin("admin", "admin", 30);
	Order orders[100];

	EconomRoom econom;
	StandartRoom standart;
	BusinessRoom buisness;

	/*Room *ptr;
	ptr = &econom;
	ptr->payRoom();

	ptr = &standart;
	ptr->payRoom();

	ptr = &buisness;
	ptr->payRoom();

	delete ptr;

	ptr = new EconomRoom;
	ptr->payRoom();
	delete ptr;
	ptr = new StandartRoom;
	ptr->payRoom();
	delete ptr;
	ptr = new BusinessRoom;
	ptr->payRoom();
	delete ptr;*/


	Client client("user", "man", 24, 151115); 
	client.createOrder(&orders[1]);
	client.viewOrder();
	Room room;

	Room *ecRoom = &room;
	ecRoom = (Room *)&econom;

	Person <int> person;
	person.setage(20);

	int i = 1, j = 1;
	float k = 1.0, l = 2.0;
	Complex Ctw1(1.0, 1.0), Ctw2(2.0, 2.0);
	cout << " run for int " << neq(i, j) << endl;
	cout << "run for float " << neq(k, l) << endl;
	cout << "run for complex type " << neq(Ctw1, Ctw2) << endl;
	return 0;
};

template <class T> int neq(T a, T b)
{
	return a != b ? 1 : 0;
}

template<typename T>
void Person<T>::setage(T value)
{
	this->age = value;
}