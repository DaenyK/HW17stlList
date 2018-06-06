#include "Date.h"

istream & operator >> (istream & is, Date & obj)
{
	char c;
	is >> obj.day >> c >> obj.month >> c >> obj.year;
	return is;
}

ostream & operator<<(ostream & os, Date obj)
{
	os << obj.day << "." << obj.month << "." << obj.year;
	return os;
}