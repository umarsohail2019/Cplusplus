#pragma once
class Stack
{
	int *array;
	int size;
	int top;
public:
	Stack(int size=5);

	void push(int value);
	void pop();
	
	bool isempty()const;
	bool isfull()const;

	void display()const;
	int TopValue()const;
	
	~Stack();
};

