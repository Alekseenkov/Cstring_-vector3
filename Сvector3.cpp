#include "Ñvector3.h"

Ñvector3::Ñvector3()
{
	x = y = z = 0;
}

Ñvector3::Ñvector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Ñvector3::~Ñvector3()
{
}

void Ñvector3::_info()
{
	std::cout << "x=" << x << " y=" << y << " z=" << z << std::endl;
}
