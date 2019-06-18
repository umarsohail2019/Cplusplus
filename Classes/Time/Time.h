#pragma once
class Time
{
	int seconds;
	int minutes;
	int hours;
public:
	Time();
	Time(int h, int m, int s);
	
	void set_Time(int h, int m, int s);
	void set_hour(int h);
	void set_minute(int m);
	void set_second(int s);

	int get_hour()const;
	int get_minute()const;
	int get_second()const;

	void Display_TIME();
	void Display_UniversalTIME();
	void Display_StandardTIME();

	int &badSethour(int h); //Dangerous referrence return 

	void Tick();
	void Test();
	~Time();
};

