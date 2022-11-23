#pragma once
#include "Size.h"

class Body
{
protected :
	int doorAmount;
	Size size;

public:
	Body(int doors,double lenght,double width,double height):size(lenght,width,height)
	{
		doorAmount = doors;

	}
	Body()
	{
		doorAmount = 4;
	}
	int getDoorAmount()
	{
		return doorAmount;
	}

	Size getSize()
	{
		return size;
	}

	void setSize(double length,double height,double width)
	{
		 size=Size(length, width, height);
	}

	void setSize(Size size)
	{
		this->size = size;
	}

	void setDoorAmount(int a)
	{
		doorAmount = a;
	}

};
