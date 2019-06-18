#include <iostream>
#include <iterator>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int *&arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

void PrintArray(int *arr,int size)
{
	for (int i = 0; i<size; i++)
		cout << arr[i] << ", ";
}

int main()
{
	int *arr= new int [10] { 1,2121,123,3243,435546,54647,34,324,657,44};
	BubbleSort(arr,10);
	PrintArray(arr,10);
	cout << endl;
	system("pause");
}