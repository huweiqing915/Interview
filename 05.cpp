/*************************************************************************
	> File Name: 05.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月07日 星期六 14时35分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

void print_list_reverse(ListNode* pHead)
{
	stack<ListNode*> nodes;
	ListNode *p_node = pHead;
	while(p_node != NULL)
	{
		nodes.push(p_node);
		p_node = p_node->next;
	}

	while(!nodes.empty())
	{
		p_node = nodes.top();
		cout << p_node->value;
		nodes.pop();
	}
}
