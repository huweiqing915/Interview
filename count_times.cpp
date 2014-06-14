/*************************************************************************
	> File Name: count_times.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月14日 星期六 20时08分00秒
 ************************************************************************/

#include <iostream>
using namespace std;

int get_first_index(int *arr, int left, int right, int k)
{
	if(arr == NULL || left > right)
	{
		return -1;
	}
	while(left <= right)
	{
		cout << "left: " << left << endl;
		cout << "right: " << right << endl;
		int mid = (left + right)/2;
		if(arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else  //arr[mid] == k
		{
			cout << "Find key(index): " << mid << endl;
			if(arr[mid-1] == k)
			{
				right = mid - 1;
			}
			else
			{
				return mid;
			}
		}
	}
	return -1;
}

int get_last_index(int *arr, int left, int right, int k)
{
	if(arr == NULL || left > right)
	{
		return -1;
	}
	while(left <= right)
	{
		cout << "left: " << left << endl;
		cout << "right: " << right << endl;
		int mid = (left + right)/2;
		if(arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			cout << "Find key(index): " << mid << endl;
			if(arr[mid+1] == k)
			{
				cout << "mid: " << mid << endl;
				left = mid + 1;
			}
			else
			{
				return mid;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[] = {0,1,2,3,3,3,3,4,5};

	int first_index = get_first_index(arr, 0, 8, 3);
	cout << "first_index: " << first_index << endl;
	cout << "-------------------" << endl;
	int last_index = get_last_index(arr, 0, 8, 3);
	cout << "last_index: " << last_index << endl;
	return 0;
}
