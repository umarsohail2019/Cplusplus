#include <iostream>
#include <iterator>
#include <random>
#include <time.h>
using namespace std;

void initialize_array(int *&array, int size)
{
	srand((unsigned int)time(0));
	array = new int[size] {5,4,3,2,1,0};
	/*size--;
	while (size >= 0)
		array[size] = rand() % 100 + 1, size--;*/
}

void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp;
}

void PrintArray(int *arr, int size)
{
	if (arr)
	{
		cout << "\nBubble Sort : ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}


void SelectionSort(int *&arr, int size)
{
	if (arr)
	{
		int min_index = 0;
		for (int i = 0; i < size-1; i++)
		{
			min_index = i;
			for (int j = i+1; j < size; j++)
			{
				if (arr[min_index] > arr[j])
					min_index = j;
			}
			if (min_index != i)
				swap(arr[i], arr[min_index]);
			PrintArray(arr, size);
		}
	}
	else
		cout << "\nArray is not allocate memory\n" << endl;
}

int main()
{
	int size = 6;
	int *arr;
	initialize_array(arr, size);
	cout << "-------Befor-------\n";
	PrintArray(arr, size);
	SelectionSort(arr, size);
	cout << "\n-------After-------\n";
	PrintArray(arr, size);
	cout << endl;
	if (arr)
		delete[]arr;
	system("pause");
}