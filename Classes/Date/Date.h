#pragma once
class Date
{
public:
	Date();
	Date(int m,int d,int y);
	Date(const Date & obj);

	void setDate(int m , int d , int y);

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay()const;
	int getMonth()const;
	int getYear()const;

	void Display()const;

	void nextday();
	void Test();

	~Date();
private:
	bool CheckDay(int d);
	int month;
	int day;
	int year;
};

