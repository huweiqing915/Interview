/*************************************************************************
	> File Name: BitTree.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月06日 星期五 22时57分23秒
 ************************************************************************/

#include <iostream>
using namespace std;

typedef char datatype;

typedef struct BitNode {
	datatype data;
	struct BitNode *lchild;
	struct BitNode *rchild;
}BitNode;

typedef BitNode* BitTree;

void pre_order_traverse(BitTree T)
{
	if(T == NULL)
		return;
	cout << T->data << endl;
	pre_order_traverse(T->lchild);
	pre_order_traverse(T->rchild);
}

void mid_order_traverse(BitTree T)
{
	if(T == NULL)
		return;
	pre_order_traverse(T->lchild);
	cout << T->data << endl;
	pre_order_traverse(T->rchild);
}

void pre_order(BitTree T)
{
	stack<BitTree> s;
	BitTree p = T;
	while(p != NULL || !s.empty())
	{
		while(p != NULL)
		{
			cout << p->data << " ";
			s.push(p);
			p = p->lchild;
		}
		if(!s.empty())
		{
			p = s.top();
			s.pop();
			p = p->rchild;
		}
	}
}
