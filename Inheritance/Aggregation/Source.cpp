#include <iostream>

using namespace std;

class Employee
{
private:
	char* name;
public:
	Employee()
	{
		name = nullptr;
	}
	Employee(const char *n)
	{
		name = new char[strlen(n)+1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void display()
	{
		cout << name << endl;
		cout << strlen(name) << endl;
	}
	~Employee()
	{
		if (name)
			delete[]name;
	}
};

class Company
{
private:
	char *name;
	Employee *obj;
public:
	Company()
	{
		name = nullptr;
		obj = nullptr;
	}

	Company(const char *n, Employee *o)
	{
		name = new char[strlen(n)+1];
		strcpy_s(name, strlen(n) + 1, n);
		obj = o;
	}
	void display()const
	{
		cout << name << endl;
		obj->display();
	};
	~Company()
	{
		if (name)
			delete []name;
		obj = nullptr;
	};
};

int main()
{
	Employee obj("Umar");
	obj.display();
	{
		Company s("MS", &obj);
		s.display();
	}
	obj.display();
	return 0;
}