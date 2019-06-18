#pragma once
#include <iostream>
using namespace std;

class Queue
{
	int *array;
	int rear;
	int front;
	int size;
public:
	Queue(int s=0);
	void enqueue(int value)
	{
		if (!isfull())
		{	
			if (front == -1)
				front = 0;
			rear = (rear + 1) % size;
			array[rear] = value;
		}
		else
			cout << "\nQueue is Full\n" << endl;
	}

	void dequeue()
	{
		if (!isempty())
		{
			array[front] = 0;
			if (rear == front)
				rear = front = -1;
			else
				front = (front + 1) % size;			
		}
		else
			cout << "\nQueue is Empty\n" << endl;
	}

	void display()const
	{
		if (!isempty())
		{
			int x = front;
			for (; x != rear; x = (x + 1) % size)
			{
				cout << array[x] << " ";
			}
			cout << array[x]<<endl;
		}
		else
			cout << "\nQueue is Empty\n";
	}

	bool isempty()const
	{
		if (front == -1)
			return true;
		else
			return false;
	}

	bool isfull()const
	{
		if (front == 0 && rear == size - 1)
			return true;
		if (rear + 1 == front)
			return true;
		else
			return false;
	}
	~Queue();
};

