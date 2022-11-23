#pragma once
#include "Exception.h"

class IncorrectInputStringException: public Exception
{
public:
	IncorrectInputStringException(int code,char* message)
	{
		this->code = code;
		strcpy_s(this->message, message);
	}
};

