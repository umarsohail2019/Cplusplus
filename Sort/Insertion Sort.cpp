#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;


void initialize_array(int *&array, int size)
{
	srand((unsigned int) time(0));
	array = new int[size] {10,9,8,7,6,5,4,3,2,1};
	//size--;
	//while (size >= 0)
	//	array[size] = rand() % 100 + 1, size--;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void PrintArray(int *arr, int size)
{
	cout << "\nInsertion Sort : ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void InsertionSort(int *arr, int size)
{
	int i = 1, y = 0;
	while (i < size)
	{
		y = i, i++;
		while (y > 0 && arr[y] < arr[y - 1])
			swap(arr[y], arr[y - 1]), y--;
	}
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
							/* Move elements of arr[0..i-1], that are
							greater than key, to one position ahead
							of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int size(10);
	int *arr;

	initialize_array(arr, size);
	cout << "-------Befor-------\n";
	PrintArray(arr, size);
	InsertionSort(arr, size);
	cout << "\n-------After-------\n";
	PrintArray(arr, size);
	cout << endl;
	delete[]arr;

	system("pause");
}