#pragma once
//·´×ª¶þ²æÊ÷
/*
     4
	/  \
   2     8
   /\    /\
  3 7   6  9

	 4
	/  \
   8     2
   /\    /\
  9  6  7  3
*/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == nullptr)
			return nullptrj;
		TreeNode* tmpNode = root->left;
		root->left = invertTree(root->right);
		root->right = invertTree(tmpNode);
		return root;
	}
};