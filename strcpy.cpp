/*************************************************************************
	> File Name: strcpy.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 21时21分05秒
 ************************************************************************/

#include <iostream>
using namespace std;

char* strcpy(char *des, const char *src)
{
	assert((des != NULL) && (src != NULL));
	char *address = des;
	while((*des++ = *src++) != '\0');
	return address;
}
