#include<iostream>
using namespace std;

int factorial(int n)
{
    	if(n<0)
        	return -1;      // wrong entry
	else if (n==0 or n==1)
		return 1;
	int f = 1;
	while(n>=2)
		f*=n, n--;
	return f;
}

int main()
{
    int num=10;
    cout<<"Factorial : "<<factorial(num)<<endl;
}