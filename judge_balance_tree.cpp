/*************************************************************************
	> File Name: judge_balance_tree.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年06月14日 星期六 22时04分17秒
 ************************************************************************/

#include <iostream>
using namespace std;

struct BinaryTreeNode {
	int value;
	BinaryTreeNode *lchild;
	BinaryTreeNode *rchild;
};

bool is_balanced(BinaryTreeNode *root, int *depth)
{
	if(root == NULL)
	{
		*depth = 0;
		return true;
	}
	int lchild_depth = 0;
	int rchild_depth = 0;
	if(is_balanced(root->lchild, &lchild_depth) 
		&& is_balanced(root->rchild, &rchild_depth))
	{
		int dis = lchild_depth - rchild_depth;
		if(dis >= -1 && dis <= 1)
		{
			*depth = 1 + (lchild_depth < lchild_depth ? lchild_depth : rchild_depth);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
