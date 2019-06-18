#include <iostream>

using namespace std;

int fact(int n)
{
	if (n <= 2)
		return n;
	return n * fact(n - 1);
}

int main()
{
	cout << "Fact : "<<fact(5) << endl;
	system("pause");
}