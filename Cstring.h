#pragma once
#include<iostream>

class Cstring
{
public:
	
	Cstring();
	Cstring(const char* str);
	~Cstring();
	void Print();
	Cstring& operator =(const Cstring& other);
			
private:
	char* str;
	int length;

};

