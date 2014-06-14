/*************************************************************************
	> File Name: string.h
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 19时43分17秒
 ************************************************************************/

#ifndef STRING_H_
#define STRING_H_

#include <string.h>

class CMyString {
public:
	CMyString(char *pData = NULL);
	CMyString(const CMyString &str);
	~CMyString(void);

	CMyString& operator = (const CMyString &other);
	void print();
private:
	char *m_pData;
};

#endif
