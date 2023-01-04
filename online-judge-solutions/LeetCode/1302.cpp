//https://leetcode.com/problems/deepest-leaves-sum/
//Lang		:	C++
//Time		:	165 ms
//Memory	:	59.8 MB
class Solution{
	public:
		void dfs(TreeNode *r,int depth,int &max_depth,int &sum){
			if(!r) return;
			if(depth>max_depth){
				max_depth=depth;
				sum=r->val;
			}else if(depth==max_depth) sum+=r->val;
			dfs(r->left,depth+1,max_depth,sum);
			dfs(r->right,depth+1,max_depth,sum);
		}
		int deepestLeavesSum(TreeNode* r){
			if(!r) return 0;
			int sum=0,max_depth=0;
			dfs(r,0,max_depth,sum);
			return sum;
		}
};
