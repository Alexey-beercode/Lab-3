#pragma once
#include "Exception.h"

class IncorrectInputValueException : public Exception
{
public:
	IncorrectInputValueException(int code, char* message)
	{
		this->code = code;
		strcpy_s(this->message, message);
	}
};

