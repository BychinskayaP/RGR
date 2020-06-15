# RGR
ргр ЭВМ
#include "Air.h"



bool Air::operator<(const Air& a)
{
	if (this->n < a.n) { return true; }
	else {
		return false;
	}
	return false;
}

bool Air::operator<=(const Air& a)
{
	if (this->n <= a.n) { return true; }
	else {
		return false;
	}
}

bool Air::operator>=(const Air& a)
{
	if (this->n >= a.n) { return true; }
	else {
		return false;
	}
}

bool Air::operator==(const Air& a)
{
	if (this->pt == a.pt)
	{		return true;
	}
	else {
		return false;
	}
}

bool Air::operator!=(const Air& a)
{
	if (this->n != a.n) { return true; }
	else {
		return false;
	}
}

Air::Air(string p, int n, string t)
{
	pt = p;
	this->n = n;
	type = t;


}

bool Air::operator>(const Air& a)
{
	if (this->n > a.n) { return true; }
	else {
		return false;
	}

	return false;
}



Air::Air()
{
	


}

Air& Air::operator=(const Air& A)
{
	pt = A.pt;
	n = A.n;
	type = A.type;

	return *this;
	
}

Air& Air::operator=(const string& A)
{
	pt = A;
	return *this;
}



