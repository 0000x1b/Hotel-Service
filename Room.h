#pragma once
#include <string>
#include <iostream>
class Room
{
public:
	Room();
	~Room();
	int roomID;
	std::string classRoom;
	virtual void payRoom();
};

