/*************************************************************************
	> File Name: list.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月10日 星期二 14时59分23秒
 ************************************************************************/

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> first, second;
	first.push_back(2);
	first.push_back(8);
	first.push_back(6);

	second.push_back(1);
	second.push_back(5);
	second.push_back(3);

	first.sort();
	second.sort();

	first.merge(second);

	for(list<int>::iterator iter = first.begin(); iter != first.end(); ++iter)
	{
		cout << *iter << "  " << endl;
	}
	cout << endl;
}
