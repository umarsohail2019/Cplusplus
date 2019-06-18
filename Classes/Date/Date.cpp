#include "Date.h"
#include <iostream>
#include <time.h>
#include <stdexcept>

using namespace std;


Date::Date()
{
	time_t date;
	date = time(nullptr);
	tm* dt = localtime(&date);
	setDate(dt->tm_mon+1, dt->tm_mday, dt->tm_year+1900);
}

Date::Date(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}

Date::Date(const Date & obj)
{
	setMonth(obj.getMonth());
	setDay(obj.getDay());
	setYear(obj.getYear());
}

void Date::setDate(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}

void Date::setMonth(int m)
{
	month = (m >= 1 && m <= 12) ? m : 1;
}

void Date::setDay(int d)
{
	day = (CheckDay(d)) ? d : 1;
}

void Date::setYear(int y)
{
	year = (y >= 1900 && y <= 3000) ? y : 1900;
}

bool Date::CheckDay(int d)
{
	static const int DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if(getMonth()==2 && getYear()%4==0)
		return ((d >= 1 && d <=29)) ? true : false;
	return ((d >= 1 && d <= DaysInMonth[month - 1])) ? true : false;
}

int Date::getDay()const
{
	return day;
}

int Date::getMonth()const
{
	return month;
}

int Date::getYear()const
{
	return year;
}

void Date::nextday()
{
	setDay(getDay() + 1);
	if (getDay() == 1)
	{
		setMonth(getMonth() + 1);
		if (getMonth() == 1)
			setYear(getYear() + 1);
	}
}

void Date::Test()
{
	for (int x = 0; x < 100000; x++)
		nextday(), Display();
}

void Date::Display()const
{
	cout << month << ":" << day << ":" << year << endl;
}


Date::~Date()
{
}
