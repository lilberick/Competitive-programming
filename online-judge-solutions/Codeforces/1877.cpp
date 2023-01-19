//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
//Lang		:	C++
//Time		:	271 ms
//Memory	:	96.3 MB
class Solution{
public:
    int minPairSum(vector<int>& v){
		sort(begin(v),end(v));
		int m=0;
		for(int i=0;i<v.size()/2;i++) m=max(m,v[i]+v[v.size()-i-1]);
		return m;
    }
};
