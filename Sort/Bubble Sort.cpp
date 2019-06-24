#include <iostream>
#include <iterator>
#include <random>
#include <time.h>
using namespace std;

void initialize_array(int *&array, int size)
{
	srand((unsigned int)time(0));
	array = new int[size];
	size--;
	while (size >= 0)
		array[size] = rand() % 100 + 1, size--;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int *&arr,int size)
{
	if(arr)
	{
		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < size - i; j++)
			{
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
			}
		}
	}
	else
		cout<<"\nArray is not allocate memory\n"<<endl;
}
void PrintArray(int *arr,int size)
{
	if(arr)
	{
		cout << "\nBubble Sort : ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

int main()
{
	int size = 5;
	int *arr;
	initialize_array(arr, size);
	cout << "-------Befor-------\n";
	PrintArray(arr, size);
	BubbleSort(arr,size);
	cout << "\n-------After-------\n";
	PrintArray(arr,5);
	cout << endl;
	
	if(arr)
		delete[]arr;
	system("pause");
}