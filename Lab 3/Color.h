#pragma once
class Color
{
protected:
	char color[20];

public:

	char* getColor()
	{
		return color;
	}

	void setColor(char a[20])
	{
		for (int i = 0; i < 20; i++)
			color[i] = a[i];
	}

};

