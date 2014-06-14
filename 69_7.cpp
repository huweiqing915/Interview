/*************************************************************************
	> File Name: 69_7.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月11日 星期三 10时34分37秒
 ************************************************************************/

#include <iostream>
using namespace std;

int add_no_arithm(int a, int b)
{
	if(b == 0) 
	{
		return a;
	}
	int sum = a ^ b;
	int carry = (a & b) << 1;
	return add_no_arithm(sum, carry);
}

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		cout << "a + b = " << add_no_arithm(a, b) << endl;
	}
	return 0;
}
