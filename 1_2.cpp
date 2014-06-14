/*************************************************************************
	> File Name: 1_2.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年05月26日 星期一 16时03分41秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int i = 11;
	int * const p = &i;
	p ++;
	printf("%d", *p);
	return 0;
}
