//https://leetcode.com/problems/maximum-product-difference-between-two-pairs
//Lang		:	C++
//Time		:	66 ms
//Memory	:	20.3 MB
class Solution {
	public:
	    int maxProductDifference(vector<int>& v){
		sort(v.begin(),v.end());
		int n=v.size();
		return v[n-1]*v[n-2]-v[0]*v[1];
	    }
};
