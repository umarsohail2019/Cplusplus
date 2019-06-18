#include "Stack.h"
#include <iostream>
using namespace std;


Stack::Stack(int s)
{
	this->size = (s >= 0 && s <= 10) ? s : 5;
	array = new int[size];
	top = -1;
}

void Stack::push(int value)
{
	if (!isfull())
		top++, array[top] = value;
	else
		cout << "\nStack is full\n";
}

void Stack::pop()
{
	if (!isempty())
		array[top] = 0, top--;
	else
		cout << "\nStack is Empty\n";
}

bool Stack::isempty()const
{
	if (top < 0)
		return true;
	else
		return false;
}

bool Stack::isfull()const
{
	if (top == size - 1)
		return true;
	else
		return false;
}

void Stack::display()const
{
	if (!isempty())
	{
		for (int x = 0; x <= top; x++)
			cout << array[x] << " ";
		cout<< endl;
	}
}

int Stack::TopValue()const
{
	return array[top];
}


Stack::~Stack()
{
	if (array)
		delete[]array;
}
