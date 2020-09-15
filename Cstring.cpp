#include "Cstring.h"

Cstring::Cstring()
{
	str = nullptr;
	length = 0;
}

Cstring::Cstring(const char* str)
{

	length = strlen(str);
	this->str = new char[length + 1];
	
	for (int i = 0; i < length; i++)
		this->str[i] = str[i];

	this->str[length] = '\0';
}

Cstring::~Cstring()
{
	delete[] this->str;
}

void Cstring::Print() 
{
	std::cout << str;
}

Cstring& Cstring::operator=(const Cstring& other)
{
	if (this->str != nullptr)
		delete[] str;

	length = strlen(other.str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++)
		this->str[i] = other.str[i];

	this->str[length] = '\0';

	return *this;
	
}
