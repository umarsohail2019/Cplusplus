#include"Stack.h"
#include<iostream>

using namespace std;

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.display();
	s.pop();
	s.display();
	cout << s.TopValue() << endl;

	system("pause");
	return 0;
}