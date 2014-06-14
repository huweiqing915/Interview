/*************************************************************************
	> File Name: 138_1.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月11日 星期三 20时40分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public:
	A():num(0) 
	{}
	void show()
	{
		cout << num << endl;
	}
private:
	string name;
	int num;
};

int main()
{
	A obj;
	obj.show();
	return 0;
}


