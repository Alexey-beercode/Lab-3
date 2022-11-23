#pragma once
#include "Exception.h"

class IncorrectInputValue : public Exception
{
public:
	IncorrectInputValue(int code, char* message)
	{
		this->code = code;
		strcpy_s(this->message, message);
	}
};

