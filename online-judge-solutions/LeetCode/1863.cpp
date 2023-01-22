//https://leetcode.com/problems/sum-of-all-subset-xor-totals/
//Lang		:	C++
//Time		:	50 ms
//Memory	:	18.4 MB
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
    int subsetXORSum(vector<int>& v){
		vector<vector<int>> w=subsets(v);
		vector<int> a(v.size(),0),b(v.size(),0);
		for(int i=0;i<w.size();i++){
			int z=0;
			for(int j=0;j<w[i].size();j++){
				a[w[i].size()-1]=z^w[i][j];
				z=a[w[i].size()-1];
			}
			if(w[i].size()>0) b[w[i].size()-1]+=a[w[i].size()-1];
		}
		return accumulate(begin(b),end(b),0);
    }
};
