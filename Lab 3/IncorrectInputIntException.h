#pragma once
#include "Exception.h"
class IncorrectInputIntException: public Exception
{
public:
	IncorrectInputIntException(int code, char* message)
	{
		this->code = code;
		strcpy_s(this->message, message);
	}
};

