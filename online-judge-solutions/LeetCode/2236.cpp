//https://leetcode.com/problems/root-equals-sum-of-children/
//Lang		:	C++
//Time		:	11 ms
//Memory	:	12.5 MB
#include<iostream>
using namespace std;
class Solution{
	public:
		bool checkTree(TreeNode* r){
			return r->val==(r->left->val+r->right->val);
		}
};
