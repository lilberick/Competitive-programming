//https://leetcode.com/problems/create-target-array-in-the-given-order
//Lang		:	C++
//Time		:	2 ms
//Memory	:	8.5 MB
#include<vector>
class Solution{
	public:
	    vector<int> createTargetArray(vector<int>& nums, vector<int>& index){
		    vector<int> v;
		    for(int i=0;i<nums.size();i++){
		    	v.insert(v.begin()+index[i],nums[i]);
		    }
		    return v;
	    }
};
