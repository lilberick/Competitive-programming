//https://leetcode.com/problems/richest-customer-wealth
//Lang		:	C++
//Time		:	7 ms
//Memory	:	7.7 MB
#include<vector>
#include<numeric>
class Solution{
	public:
	    int maximumWealth(vector<vector<int>>& v){
		    int m=0;
		    for(int i=0;i<v.size();i++){
			    int x=accumulate(v[i].begin(),v[i].end(),0);
			    m=max(m,x);
		    }
		    return m;
	    }
};
