/*************************************************************************
	> File Name: binary_search.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月08日 星期日 22时21分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

int binary_search(int arr[], int len, int key)
{
	int low, high, mid;
	low = 1;
	high = len;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(key < arr[mid])
		{
			high = mid - 1;
		}
		else if(key > arr[mid])
		{
			low = mid + 1;
		}
		else
			return mid;
	}
	return 0;
}
