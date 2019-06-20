#include<iostream>
#include<math.h>
#include<string>
using namespace std;

	// first function

double power(double num, double p)
{
	if (num == 0 && p < 0)				//return inf if number==0 and p<0 in math.h library...
		return INFINITY;			
	else if (p == 0)				//if p==0 means power is zero then result is 1...
		return 1;
	else if (p == 1 or (-1 <= num && num <= 1)) 	// p==1 or num==0 or num==1 or num==-1 
	{						// then result is num;
		if (num == -1 && fmod(p, 2) == 0)	// only check if num <0 then check pow to convert
			num *= -1;			// num from negative to positive only if pow%2==0
		return num;				// why i write this ?
	}						// suppose P=10000000 or num==1,num==0,num==-1 always return num
							// so why waste time to run for loop for this...

	double z = 1;
	if (p >= 0)
		while (p--) { z *= num; }
	else
		while (p++) { z /= num; }
	return z;
}


	//Second function

double Power(double num, double p)
{
	if (num == 0 && p < 0)				//return inf if number==0 and p<0 in math.h library...
		return INFINITY;			
	else if (p == 0)				//if p==0 means power is zero then result is 1...
		return 1;
	else if (p == 1 or (-1 <= num && num <= 1)) 	// p==1 or num==0 or num==1 or num==-1 
	{											// then result is num;
		if (num == -1 && fmod(p, 2) == 0)	// only check if num <0 then check pow to convert
			num *= -1;			// num from negative to positive only if pow%2==0
		return num;				// why i write this ?
	}						// suppose P=10000000 or num==1,num==0,num==-1 always return num
							// so why waste time to run for loop for this...

	double z = 1;								
	if (p < 0) {
		num = z / num, p++;			//HERE WE divide first then find power of that
		if (p == 0)
			z = num;
	}
	while (p)
	{
		z = (fmod(p, 2) == 0 or p == 1) ? z * num : z * num * num;
		p = (int)p / 2;
	}
	return z;
}


int main()
{
	cout << endl;
	double num = 0;
	double p = -2;
	cout << num << " power " << p << " : ";
	cout << power(num, p) << "\n\n";			//first funtion
	cout << "built in power funtion : " << pow(num, p) << endl << endl;
	system("pause");
}











//
//cout << power(-3, -3) << "\t" << pow(-3, -3) << endl;
//cout << power(-3, -2) << "\t" << pow(-3, -2) << endl;
//cout << power(-3, -1) << "\t" << pow(-3, -1) << endl;
//cout << power(-3, 0) << "\t" << pow(-3, 0) << endl;
//cout << power(-3, 1) << "\t" << pow(-3, 1) << endl;
//cout << power(-3, 2) << "\t" << pow(-3, 2) << endl;
//cout << power(-3, 3) << "\t" << pow(-3, 3) << endl;
//
//cout << power(-2, -3) << "\t" << pow(-2, -3) << endl;
//cout << power(-2, -2) << "\t" << pow(-2, -2) << endl;
//cout << power(-2, -1) << "\t" << pow(-2, -1) << endl;
//cout << power(-2, 0) << "\t" << pow(-2, 0) << endl;
//cout << power(-2, 1) << "\t" << pow(-2, 1) << endl;
//cout << power(-2, 2) << "\t" << pow(-2, 2) << endl;
//cout << power(-2, 3) << "\t" << pow(-2, 3) << endl;
//
//cout << power(-1, -3) << "\t" << pow(-1, -3) << endl;
//cout << power(-1, -2) << "\t" << pow(-1, -2) << endl;
//cout << power(-1, -1) << "\t" << pow(-1, -1) << endl;
//cout << power(-1, 0) << "\t" << pow(-1, 0) << endl;
//cout << power(-1, 1) << "\t" << pow(-1, 1) << endl;
//cout << power(-1, 2) << "\t" << pow(-1, 2) << endl;
//cout << power(-1, 3) << "\t" << pow(-1, 3) << endl;
//
//cout << power(0, -3) << "\t" << pow(0, -3) << endl;
//cout << power(0, -2) << "\t" << pow(0, -2) << endl;
//cout << power(0, -1) << "\t" << pow(0, -1) << endl;
//cout << power(0, 0) << "\t" << pow(0, 0) << endl;
//cout << power(0, 1) << "\t" << pow(0, 1) << endl;
//cout << power(0, 2) << "\t" << pow(0, 2) << endl;
//cout << power(0, 3) << "\t" << pow(0, 3) << endl;
//
//cout << power(1, -3) << "\t" << pow(1, -3) << endl;
//cout << power(1, -2) << "\t" << pow(1, -2) << endl;
//cout << power(1, -1) << "\t" << pow(1, -1) << endl;
//cout << power(1, 0) << "\t" << pow(1, 0) << endl;
//cout << power(1, 1) << "\t" << pow(1, 1) << endl;
//cout << power(1, 2) << "\t" << pow(1, 2) << endl;
//cout << power(1, 3) << "\t" << pow(1, 3) << endl;
//
//cout << power(2, -3) << "\t" << pow(2, -3) << endl;
//cout << power(2, -2) << "\t" << pow(2, -2) << endl;
//cout << power(2, -1) << "\t" << pow(2, -1) << endl;
//cout << power(2, 0) << "\t" << pow(2, 0) << endl;
//cout << power(2, 1) << "\t" << pow(2, 1) << endl;
//cout << power(2, 2) << "\t" << pow(2, 2) << endl;
//cout << power(2, 3) << "\t" << pow(2, 3) << endl;
//
//cout << power(3, -3) << "\t" << pow(3, -3) << endl;
//cout << power(3, -2) << "\t" << pow(3, -2) << endl;
//cout << power(3, -1) << "\t" << pow(3, -1) << endl;
//cout << power(3, 0) << "\t" << pow(3, 0) << endl;
//cout << power(3, 1) << "\t" << pow(3, 1) << endl;
//cout << power(3, 2) << "\t" << pow(3, 2) << endl;
//cout << power(3, 3) << "\t" << pow(3, 3) << endl;


//string str("123");
//int n = stoi(str);
//cout << str << " --> " << n << endl;

//int n = 123;
//std::string str = std::to_string(n);
//std::cout << n << " ==> " << str << std::endl;

