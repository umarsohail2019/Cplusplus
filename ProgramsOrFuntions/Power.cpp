#include<iostream>
#include<math.h>
#include<string>
using namespace std;

double power(double num, double p)
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

	// Worst case to find power of any numbers. 
	// Some time its take to much time to find power of huge numbers
	/*--------code 1 start---------*/
	double z = 1;
	
	if (p >= 0)
		while (p--) { z *= num; }
	else
		while (p++) { z /= num; }
	return z;
	/*--------code 1 end---------*/



	// Best Case to find power of any numbers.
	// This algorithm (on every iteration power become half untill it become 1)
	/*--------code 2 start---------*/
	/*double z = 1;
	bool a = false;
	if (p < 0)
		p *= -1, a = true;
	while (p)
	{
		if (fmod(p, 2) != 0)
			z *= num;
		p = (int)p / 2;
		num *= num;
	}
	return (a) ? 1 / z : z;*/
	/*--------code 2 end---------*/

	
	//bitwise operator method to find power function
	//it similar with above function
	/*--------code 3 start --------*/
	//double z = 1;
	//bool a = false;
	//signed p1 = p;
	//if (p1 < 0)
	//	p1 *= -1, a = true;
	//while (p1)
	//{
	//	if (p1 & 1)						// if n is odd, multiply result by x
	//		z *= num;
	//	p1 = p1 >> 1;						// divide n by 2
	//	num  *= num;						// multiply x by itself
	//}	 
	//return (a) ? 1 / z : z;
	/*--------code 3 end--------*/

}

int main()
{
	cout << endl;
	double num = 2;
	double p = 2;
	cout << num << " power " << p << " : ";
	cout << power(num, p) << "\n\n";
	cout << "built in power funtion : " << pow(num, p) << endl << endl;
	system("pause");
}

