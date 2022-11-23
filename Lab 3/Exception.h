#pragma once
#include <iostream>
using namespace std;

class Exception
{
protected:
	int code;
	char message[80];
public:

	Exception()
	{
		code = 1;
		strcpy_s(message, "Global Exception");
	}

	Exception(int code, char* message)
	{
		this->code = code;
		strcpy_s(this->message, message);
	}

	void show()
	{
		cout << "Вызвано исключение: " << message << " Код : " << code << endl;
	}
};

