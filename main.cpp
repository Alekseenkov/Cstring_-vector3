#include<iostream>
#include "Cstring.h"
#include "Сvector3.h"
using namespace std;

int main()
{
	Cstring str;
	Cstring str2(" World");

	str = "Hello";

	str.Print();
	str2.Print();
	cout << endl;
	
	////////////////////////////////////
	
	Сvector3 d(1, 2, 3);
	
	d._info();



	return 0;
}
