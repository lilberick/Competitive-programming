//https://leetcode.com/problems/build-array-from-permutation
//Lang		:	C++
//Time		:	27 ms
//Memory	:	16.2 MB
#include<vector>
class Solution{
	public:
	    vector<int> buildArray(vector<int>& v){
		    vector<int> w(v);
		    for(int i=0;i<v.size();i++){
			    w[i]=v[v[i]];
		    }
		    return w;
	    }
};
