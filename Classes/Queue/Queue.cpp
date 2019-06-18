#include "Queue.h"



Queue::Queue(int s)
{
	size = (s > 0) ? s : 5;
	array = new int[size];
	rear =-1;
	front = -1;
}


Queue::~Queue()
{
	if (array)
		delete[]array;

}
