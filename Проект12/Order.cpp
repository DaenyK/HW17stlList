#include "Order.h"

istream & operator >> (istream & is, Order& obj)
{
	is >> obj.OrderNo >> obj.flight_date >> obj.PassengerName >> obj.PassengerSname;
	return is;
}

ostream & operator<<(ostream & os, Order obj)
{
	os << obj.OrderNo << " " << obj.flight_date << " " << obj.PassengerName << " " << obj.PassengerSname << endl;
	return os;
}