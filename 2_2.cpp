/*************************************************************************
	> File Name: 2_2.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 17时25分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

int string_to_int(char * str)
{
	int num = 0;
	if(str != NULL)
	{
		const char *digit = str;
		bool minus = false;
		if(*digit == '+')
		{
			digit++;
		}
		else if(*digit == '-')
		{
			digit++;
			minus = true;
		}
		while(*digit != '\0')
		{
			if(*digit >= '0' && *digit <= '9')
			{
				cout << "--------------" << endl;
				cout << num << endl;
				cout << "*digit : " << *digit << endl;
				num = (num * 10) + (*digit - '0');
				cout << "------------" << endl;
				cout << "num : " << num << endl;
				digit++;
			}
			else 
			{
				num = 0;
				break;
			}
		}
		if(*digit == '\0')
		{
			if(minus == true)
				num = 0 - num;
		}
	}
	return num;
}

int main()
{
	char str[] = "3456";
	int num = string_to_int(str);
	cout << num << endl;
	return 0;
}
