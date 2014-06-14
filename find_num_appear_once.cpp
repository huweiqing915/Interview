/*************************************************************************
	> File Name: find_num_appear_once.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月14日 星期六 22时26分16秒
 ************************************************************************/

#include <iostream>
using namespace std;

void find_num_appear_once(int *arr, int len)
{
	if(arr == NULL || len < 2)
	{
		return;
	}
	int sum = 0;
	for(int i = 0; i < len; ++i)
	{
		sum ^= arr[i];
	}
	//找到sum的右边第一个1的位置
	int pos = 0;
	while((sum & 1) != 1 && (pos <= 32))
	{
		pos++;
		sum = sum >> 1;
	}
	if((pos == 0) || (pos > 32))
	{
		return;
	}

	int num1 = 0;
	int num2 = 0;
	int num = 1 << pos;

	for(int i = 0; i < len; i++)
	{
		if((arr[i] & num) != 0)
		{
			num1 ^= arr[i]; 
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
}

int main()
{
	int arr[] = {2,4,3,6,3,2,5,5};
	find_num_appear_once(arr, 8);
	return 0;
}
