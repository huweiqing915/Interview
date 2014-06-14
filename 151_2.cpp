/*************************************************************************
	> File Name: 151_2.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月12日 星期四 10时45分43秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public:
	void fun(int xp)
	{
		cout <<"A: " << xp << endl;
	}
};

class B : public A {
public:
	void fun(int xp)
	{
		cout << "B: " << xp << endl;
	}
};

int main()
{
	B b;
	A *p = &b;
	cout << "p->fun()" << endl;
	p->fun(2);
	cout << "b.fun()" << endl;
	b.fun(3);
	b.A::fun(3);
	return 0;
}
