/*************************************************************************
	> File Name: string.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 19时46分23秒
 ************************************************************************/

#include <iostream>
#include "mystring.h"
using namespace std;

CMyString::CMyString(char *pData)
{
	if(pData == NULL)
	{
		m_pData = new char[1];
		m_pData[0] = '\0';
	}
	else
	{
		int length = strlen(pData);
		m_pData = new char[length + 1];
		strcpy(m_pData, pData);
	}
}

CMyString::CMyString(const CMyString &str)
{
	int length = strlen(str.m_pData);
	m_pData = new char[length + 1];
	strcpy(m_pData, str.m_pData);
}

CMyString::~CMyString()
{
	delete [] m_pData;
	m_pData = NULL;
}

CMyString& CMyString::operator = (const CMyString &str)
{
	if(this != &str)
	{
		delete[] m_pData;
		m_pData = NULL;
		m_pData = new char[strlen(str.m_pData) + 1];
		strcpy(m_pData, str.m_pData);
	}
	return *this;
}

void CMyString::print()
{
	cout << m_pData << endl;
}

