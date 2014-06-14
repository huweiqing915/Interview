/*************************************************************************
	> File Name: 166_7.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月12日 星期四 14时44分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
public:
	Base()
	{
		cout << "Create Base" << endl; 
	}
	virtual ~Base()
	{
		cout << "Destroy Base" << endl;
	}
};

class Derived : public Base {
public:
	Derived()
	{
		cout << "Create Derived" << endl;
	}
	~Derived()
	{
		cout << "Destroy Derived" << endl;
	}
};

int main()
{
	Base *p = new Derived;
	delete p;
}

