/*************************************************************************
	> File Name: LinkList.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月10日 星期二 15时05分27秒
 ************************************************************************/

#include <iostream>
using namespace std;

Linklist reverse_list(Linklist L)
{
	Linklist newlist, p_next;
	L = L->next;
	newlist = (Linklist)malloc(sizeof(linkNode));
	memset(newlist, 0, sizeof(linkNode));
	while(L)
	{
		p_next = L->next;
		L->next = newlist->next;
		newlist->next = L;
		L = p_next;
	}
	free(L);
	return newlist;
}

Linklist merge_list(Linklist LA, Linklist LB)
{
	Linklist LC;
	LC = (Linklist)malloc(sizeof(listNode));
	memset(LC, 0, sizeof(listNode));

	Linklist pC, pA, pB;
	pC = LC;
	pA = LA->next;
	pB = LB->next;

	if(pA == NULL)
		LC = LB;
	if(pB == NULL)
		LC = LA;
	while(pA && pB)
	{
		if(pA->data <= pB->data)
		{
			pC->next = pA;
			pC = pA;
			pA = pA->next;
		}
		else
		{
			pC->next = pB;
			pC = pB;
			pB = pB->next;
		}
	}

	if(pA)
	{
		pC->next = pA;
	}
	if(pB)
	{
		pC->next = pB;
	}
	return LC;
}
