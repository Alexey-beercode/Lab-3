#pragma once
class Engine
{
public:
	enum engine
	{
		diesel,
		petrol,
		electro
	};

protected:
	engine type;
	double volume;
	int power;

public:

	Engine()
	{
		type = petrol;
		volume = 2;
		power = 200;
	}
	engine getType()
	{
		return type;
	}

	double getVolume()
	{
		return volume;
	}

	int getPower()
	{
		return power;
	}

	void setType(engine a)
	{
		type = a;
	}

	void setVolume(double a)
	{
		volume = a;
	}

	void setPower(int a)
	{
		power = a;
	}

	int comparePower(int secondCarPower)
	{
		if (power > secondCarPower)
			return 1;
		else if (power == secondCarPower)
			return 0;

		return -1;
	}

};

