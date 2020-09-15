#include "�vector3.h"

�vector3::�vector3()
{
	x = y = z = 0;
}

�vector3::�vector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

�vector3::~�vector3()
{
}

void �vector3::_info()
{
	std::cout << "x=" << x << " y=" << y << " z=" << z << std::endl;
}
