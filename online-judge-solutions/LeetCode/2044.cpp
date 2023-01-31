//https://leetcode.com/problems/permutations
//Lang		:	C++
//Time		:	1336 ms
//Memory	:	407.4 MB
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
    int countMaxOrSubsets(vector<int>& v){
		vector<vector<int>> w=subsets(v),x;
		int s=0;
		for(int i:v) s|=i;
		for(auto i:w){
			int r=0;
			for(int j:i) r|=j;
			if(r==s) x.push_back(i);
		}
		return x.size();
    }
};
