#include<iostream>
using namespace std;

int factorial(int n)
{
	int f = 1;
	if (n <= 1)
		return 1;
	while(n>=2)
		f*=n, n--;
	return f;
}

int main()
{
    int num=10;
    cout<<"Factorial : "<<factorial(num)<<endl;
}