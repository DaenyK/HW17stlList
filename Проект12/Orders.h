#pragma once
#include "Order.h"
#include <list>

class Orders
{
private:
	list<Order> Orders_List;
public:
	void Add(Order o) 
	{
		Orders_List.push_back(o);
	}

	void Delete(Order o) 
	{
		Orders_List.pop_back();
	}

	void printOrdersByDate(Date d) 
	{
		list<Order>::iterator it = Orders_List.begin();
		for (; it != Orders_List.end(); it++)
			if ((*it) == d)
				cout << *it << endl;
	}

	void printAll() 
	{
		list<Order>::iterator it = Orders_List.begin();
		for (; it != Orders_List.end(); it++)
			cout << *it << endl;
	}
};
