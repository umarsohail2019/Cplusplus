#include<iostream>
#include<math.h>
#include<string>
using namespace std;


int power(double num,double p)
{
	if (num == 0 && p!= 0)
	{
		if (num == 0 && p < 0)
			cout << " infinite";
		return 0;
	}
	else if (num == -1 || num == 1)
		return (num == 1 || fmod(p, 2) == 0) ? 1 : -1;

	double z = 1;
	int count = 0;
	if (p > 0)
	{
		while(p--)
			z *= num;
	}
	else if(p < 0)
	{
		while(p++)
			z /= num;
	}
	return z;
}

int main()
{
	cout << endl;
	double num = 0;		
	double p = -3;
	cout << num << " Power " << p << " : ";
	cout << power(num, p) << "\n\n";
	cout <<"Built in power funtion : "<< pow(num, p) << endl << endl;
	system("pause");
}


//string str("123");
//int n = stoi(str);
//cout << str << " --> " << n << endl;

//int n = 123;
//std::string str = std::to_string(n);
//std::cout << n << " ==> " << str << std::endl;

