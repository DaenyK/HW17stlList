#pragma once
#include"Headers.h"

class Date
{
private:
	size_t day;
	size_t month;
	size_t year;
public:
	Date() = default;
	Date(size_t day, size_t month, size_t year) :day(day), month(month), year(year) {}

	size_t getDay()const {
		return day;
	}
	size_t getMonth()const {
		return month;
	}
	size_t getYear()const {
		return year;
	}

	void setDay(size_t day) {
		this->day = day;
	}
	void setMonth(size_t month) {
		this->month = month;
	}
	void setYear(size_t year) {
		this->year = year;
	}

	bool operator== (const Date& obj) {
		return (day == obj.day && month == obj.month && year == obj.year);
	}
	friend istream& operator >> (istream& is, Date &obj);
	friend ostream& operator <<(ostream& os, Date obj);
};
