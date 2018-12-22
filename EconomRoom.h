#pragma once
#include "Room.h"
class EconomRoom :
	public Room
{
public:
	EconomRoom();
	~EconomRoom();
	void payRoom() override;
};

