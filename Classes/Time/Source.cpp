#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time sunset; // object of type Time
	Time arrayOfTimes[5]; // array of 5 Time objects
	Time &dinnerTime = sunset; // reference to a Time object
	Time *timePtr = &dinnerTime; // pointer to a Time object

//	above ? 

	Time obj;
	obj.Display_TIME();
	obj.Display_StandardTIME();
	obj.Display_UniversalTIME();
	Time obj1 = obj;
	obj1.Display_TIME();
	obj.set_Time(13, 30, 30);
	obj1.Display_TIME();
	obj.Display_TIME();
	obj.Display_StandardTIME();
	obj.Display_UniversalTIME();
	Time obj3;
	obj3 = obj;
	obj3.Display_TIME();
	obj.set_Time(23, 45, 34);
	obj3.Display_TIME();


	Time t; // create Time object

	// initialize hourRef with the reference returned by badSetHour
	int &hourRef = t.badSethour(20); // 20 is a valid hour
	cout << "Valid hour before modification:" << hourRef;
	hourRef = 30; // use hourRef to set invalid value in Time object t
	cout << "\nInvalid hour after modification: " << t.get_hour();
	// Dangerous: Function call that returns
	// a reference can be used as an lvalue!
	t.badSethour(12) = 74; // assign another invalid value to hour
	cout << "\n\n*************************************************\n"
		 << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
		 << "t.badSetHour( 12 ) as an lvalue, invalid hour: "
	     << t.get_hour()
		 << "\n*************************************************" << endl;



	Time obj7;
	obj7.Test();
	Time ob8(11, 57, 23);
	ob8.Test();
	Time obj9(23, 55, 34);
	obj9.Test();
	return 0;
}