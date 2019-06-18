#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue q;
	q.display();
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(49);
	q.display();
	system("pause");
	return 0;
}