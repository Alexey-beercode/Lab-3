#pragma once
class Size
{
public:

	double length;
	double height;
	double width;

	Size(double length, double width, double height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	Size()
	{
		length = 1;
		height = 1;
		width = 1;
	}
};

