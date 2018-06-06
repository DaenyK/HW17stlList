#pragma once
#include "Headers.h"
#include "Date.h"

class Order
{
private:
	string OrderNo;
	Date flight_date;
	string PassengerName;
	string PassengerSname;
public:
	Order()
	{
		OrderNo = "";
		flight_date = Date();
		PassengerName = "";
		PassengerSname = "";
	}

	bool operator==(string ordername) 
	{
		return (this->OrderNo == ordername);
	}

	bool operator==(Date d)
	{
		return (flight_date == d);
	}

	string getOrder()const { return OrderNo; }

	friend istream& operator >> (istream& is, Order& obj);
	friend ostream& operator << (ostream& os, Order obj);
};
