#include<iostream>
#include<math.h>
#include<string>
using namespace std;

double calculatePower(double base, double powerRaised)
{
	return (powerRaised != 0) ? ((powerRaised<0)?(calculatePower(base, powerRaised + 1)/base): (base * calculatePower(base, powerRaised - 1))) : 1;
}

double power1(double num, double p)
{
	if (p == 0)
		return 1;
	else if (p < 0)
		return (power1(1/num, -p));
	else
	{
		double temp = power1(num, (int)p / 2);
		if (fmod(p, 2) == 0)
			return temp * temp;
		return temp * temp * num;
	}
}

double power2(double x, double y)
{
	if (y == 0)
		return 1;
	double temp = power2(x, (int)y / 2);
	if (fmod(y, 2) == 0)
		return temp * temp;
	else
	{
		if (y > 0)
			return x * temp*temp;
		else
			return (temp*temp) / x;
	}
}


int main()
{
	cout << endl;
	double p = -1;
	double num = 10;
	cout << "Base : " << num << endl;
	cout << "Exponent : " << p << endl;
	cout <<"User Define Power funtion : " << power1(num, p) << "\n";
	cout <<"Built in power funtion    : "<< pow(num, p) << endl << endl;

	//cout << calculatePower(3, 3) << "\t" << pow(3, 3) << endl;
	system("pause");
}
