#include <iostream>

using namespace std;

class Room
{
	char *name;
	int lenght;
	int width;
public:
	Room()
	{
		name = nullptr;
		lenght = 0;
		width = 0;
	}
	Room(const char *n, int l, int w)
	{
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy_s(name, size, n);
		lenght = l;
		width = w;
		cout << "\nRoom const\n" << endl;
	}
	Room(const Room& obj)
	{
		int size = strlen(obj.name) + 1;
		name = new char[size];
		strcpy_s(name, size, obj.name);
		lenght = obj.lenght;
		width = obj.width;
	}
	const Room& operator=(const Room& obj)
	{
		int size = strlen(obj.name) + 1;
		name = new char[size];
		strcpy_s(name, size, obj.name);
		lenght = obj.lenght;
		width = obj.width;
		return *this;
	}

	void display()const
	{
		cout << name << " " << lenght << " " << width << endl;
	}
	~Room()
	{
		if (name)
			delete name;
		cout << "\nRoom dest\n" << endl;
	}
};

class House
{
	char *name;
	//Room obj[3];
	Room *obj;
public:
	House()
	{
		name = nullptr;
		obj = nullptr;
	}
	House(const char *n)
	{
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy_s(name, size, n);
		obj = new Room[3]{ {"Umar",1,2},{"Amir",1,2},{"Ammar",1,2} };
		/*obj[0] = Room("Umar", 1, 2);
		obj[1] = Room("AMir", 1, 2);
		obj[2] = Room("Ammar", 1, 2);
		*/
		cout << "\nHouse const\n" << endl;
	}
	void display()const
	{
		cout << name << endl;
		for (int x = 0; x < 3; x++)
		{
			obj[x].display();
			cout << endl;
		}
	}
	~House()
	{
		if (name)
			delete[]name;
		delete[]obj;
		cout << "\nHouse dest\n" << endl;
	}
};

int main()
{
	House obj("Umar");
//	obj.display();

	return 0;
	system("pause");
}