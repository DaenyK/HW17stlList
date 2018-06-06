#include "Orders.h"
int main() 
{
	Orders OList;
	Order tmp;
	Date d(15, 06, 2018);
	ifstream in_file("Orders.txt");
	if (!in_file) 
	{
		cerr << "File open error" << endl;
	}
	else 
	{
		while (!in_file.eof()) 
		{
			in_file >> tmp;
			OList.Add(tmp);
		}
	}
	OList.printAll();
	cout << endl;

	OList.printOrdersByDate(d);

	system("pause");
	return 0;
}