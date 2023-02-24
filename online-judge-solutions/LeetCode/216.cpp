//https://leetcode.com/problems/combination-sum-iii
//Lang		:	C++
//Time		:	4 ms
//Memory	:	8.1 MB
void getSubsets(vector<int> &nums,vector<vector<int>> &result,vector<int> &current,int i){
    if(i==nums.size()){
        result.push_back(current);
        return;
    }
    current.push_back(nums[i]);
    getSubsets(nums,result,current,i+1);
    current.pop_back();
    getSubsets(nums,result,current,i+1);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> result;
    vector<int> current;
    getSubsets(nums,result,current,0);
    return result;
}
class Solution{
public:
    vector<vector<int>> combinationSum3(int k,int n){
		vector<int> w(9);
		iota(begin(w),end(w),1);
		vector<vector<int>> v=subsets(w),r;
		v.erase(unique(begin(v),end(v)),v.end());
		for(auto i:v) if(i.size()==k && accumulate(begin(i),end(i),0)==n) r.push_back(i);
		return r;
    }
};
