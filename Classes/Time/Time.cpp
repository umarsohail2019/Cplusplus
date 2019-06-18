#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <time.h>
using namespace std;

Time::Time()
{
	time_t Time = time(nullptr);
	tm* lt = localtime(&Time);
	set_Time(lt->tm_hour, lt->tm_min, lt->tm_sec);
}


Time::Time(int h, int m, int s)
{
	set_Time(h, m, s);
}

void Time::set_Time(int h, int m, int s)
{
	set_hour(h);
	set_minute(m);
	set_second(s);
}

void Time::set_hour(int h)
{
	hours = (h >= 0 && h <= 23) ? h : 0;
}

void Time::set_minute(int m)
{
	minutes = (m >= 0 && m <= 59) ? m : 0;
}
void Time::set_second(int s)
{	
	seconds = (s >= 0 && s <= 59) ? s : 0;
}


int Time::get_hour()const
{
	return hours;
}

int Time::get_minute()const
{
	return minutes;
}

int Time::get_second()const
{
	return seconds;
}



void Time::Display_UniversalTIME()
{
	cout <<"Universal Time : "<< setfill('0') << setw(2) 
		<< get_hour() << ":"<< setw(2) << get_minute() << ":" << setw(2) << get_second()<<"\n";
}

void Time::Display_StandardTIME()
{
	cout <<"Standard Time : "<< setfill('0') << setw(2) 
		<< ((get_hour() == 0 || get_hour() == 12) ? 12 :get_hour() % 12) << ":" << setw(2) 
		<< get_minute() << ":" << setw(2) 
		<< get_second() << ((get_hour() >= 12) ? " PM\n" : " AM\n");
}

void Time::Display_TIME()
{	
	cout << "Time : "<< setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << "\n";
}

int &Time::badSethour(int h)
{
	if (h >= 0 && h < 24)		hours = h;	return hours;
}

void Time::Tick()
{
	set_second(get_second() + 1);
	if (get_second() == 0)
	{
		set_minute(get_minute() + 1);
		if (get_minute() == 0)
			set_hour(get_hour() + 1);
	}
}

void Time::Test()
{
	for (int x = 0; x < 1000000; x++)
		Tick(),Display_StandardTIME();
}


Time::~Time()
{
}
