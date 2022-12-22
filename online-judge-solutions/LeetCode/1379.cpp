//https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/description/
//Lang		:	C++
//Time		:	623 ms
//Memory	:	164 MB
class Solution{
	public:
		TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){
			if(!original || !cloned) return nullptr;
			if(original==target) return cloned;
			auto left=getTargetCopy(original->left,cloned->left,target);
			auto right=getTargetCopy(original->right,cloned->right,target);
			if(left) return left;
			if(right) return right;
			return nullptr;
		}
};
