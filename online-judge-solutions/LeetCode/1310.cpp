//https://leetcode.com/problems/xor-queries-of-a-subarray
//Lang		:	C++
//Time		:	98 ms
//Memory	:	40.7 MB
class Solution{
public:
    vector<int> xorQueries(vector<int>& a,vector<vector<int>>& q){
		for(int i=1;i<a.size();i++) a[i]^=a[i-1];
		vector<int> v;
		for(auto i:q){
			(i[0]==0)?v.push_back(a[i[1]]):v.push_back(a[i[1]]^a[i[0]-1]);
		}
		return v;
    }
};
