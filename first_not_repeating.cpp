/*************************************************************************
	> File Name: first_not_repeating.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月09日 星期一 23时19分51秒
 ************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

char first_not_repeating(char *str)
{
	int arr[256] = {0};
	for(int i = 0; i < strlen(str); i++)
	{
		arr[str[i]]++;
	}
	for(int i = 0; i < strlen(str); i++)
	{
		if(arr[str[i]] == 1)
			return arr[i];
	}
	return 0;
}

int main()
{
	char str[] = "abaccdeff";
	cout << "First not repeating char: " << endl;
	cout << first_not_repeating(str) << endl;
	cout << "--------------------" << endl;
}
