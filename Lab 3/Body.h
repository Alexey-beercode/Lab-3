#pragma once
class Body
{
protected :
	int doorAmount;
	int size[3];

public:
	int getDoorAmount()
	{
		return doorAmount;
	}

	int* getSize()
	{
		return size;
	}

	void setSize(int a[3])
	{
		for (int i = 0; i < 3; i++)
			size[i] = a[i];
	}

	void setDoorAmount(int a)
	{
		doorAmount = a;
	}

};

