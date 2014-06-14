/*************************************************************************
	> File Name: test_string.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 20时37分48秒
 ************************************************************************/

#include <iostream>
#include "mystring.h"
using namespace std;

void test1()
{
	cout << "Test1 begins" << endl;
	char *text = "Hello World";

	CMyString str1(text);
	CMyString str2;
	str2 = str1;
	
	str2.print();
	cout << "-----------" << endl;
}

void test2()
{
	cout << "Test2 begins" << endl;
	char *text = "Hello World";
	CMyString str1(text);
	str1 = str1;
	str1.print();
	cout << "-------------" << endl;
}

void test3()
{
	cout << "Test3 begins" << endl;
	char *text = "Hello World";

	CMyString str1(text);
	CMyString str2, str3;
	str3 = str2 = str1;

	cout << "Str2 " << endl;
	str2.print();
	cout << "Str3" << endl;
	str3.print();
	cout << "---------------" << endl;
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}
