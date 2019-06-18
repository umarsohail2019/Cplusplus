#include<iostream>
#include <vector>
using namespace std;


int fabo(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	return fabo(n - 1) + fabo(n - 2);
}

vector<int> arr = { 0,1};
int fabo1(int n)
{
	if (n <= arr.capacity())
		return arr[n - 1];
	else
		arr.push_back(fabo1(n - 1) + fabo1(n - 2));
	return arr.back();
}



int main()
{
	cout << endl;
	int num = 40;							//num must be greater than 0
	cout <<num<<"th fabonanci is : ";		//nth faboananci  
	cout << fabo1(num) << endl;				//fabo1 is faster than fabo
	cout << fabo(num) <<endl;
	system("pause");
}