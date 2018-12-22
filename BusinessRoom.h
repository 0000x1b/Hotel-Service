#pragma once
#include "Room.h"
class BusinessRoom :
	public Room
{
public:
	BusinessRoom();
	~BusinessRoom();
	void payRoom() override;
};

