#include <iostream>

using namespace std;

int fact(int n)
{
	int f = 1;
	while (n >= 1)
		f *= n, n--;
	return f;
}

int main()
{
	cout << "Fact : "<<fact(9) << endl;
	system("pause");
}