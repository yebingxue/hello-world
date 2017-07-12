#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string>

using namespace std;

/**
* Definition for a binary tree node.*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	string tree2str(TreeNode* t) {
		string result = "";
		if (t == NULL)
			return result;
		result += to_string(t->val);
		result += treeDp(t->left, false, t->right == NULL);
		result += treeDp(t->right, true,false);
		return result;
	}
	string treeDp(TreeNode *node, bool isRight,bool rightIsNull)
	{
		
		if (node == NULL)
		{
			if (rightIsNull)
				return "";
			return isRight ? "" : "()";
		}
		string temp = "(";
		temp += to_string(node->val);
		temp += treeDp(node->left, false,node->right==NULL);
		temp += treeDp(node->right, true,false);
		temp += ")";
		return temp;		
	}
};