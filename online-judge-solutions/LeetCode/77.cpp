//https://leetcode.com/problems/count-number-of-teams
//Lang		:	C++
//Time		:	633 ms
//Memory	:	239.2 MB
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
    vector<vector<int>> combine(int n, int k){
		vector<int> v(n);
		iota(begin(v),end(v),1);
		vector<vector<int>> w=subsets(v),x;
		for(auto i:w) if(i.size()==k) x.push_back(i);
		return x;
    }
};
