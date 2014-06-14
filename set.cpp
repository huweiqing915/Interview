/*************************************************************************
	> File Name: set.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月09日 星期一 14时07分00秒
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> iset;
	iset.insert(40);
	iset.insert(20);
	iset.insert(30);
	iset.insert(25);

	for(set<int>::iterator iter = iset.begin(); iter != iset.end(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}
