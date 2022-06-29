//https://leetcode.com/problems/number-of-good-pairs/
//Lang		:	C++
//Time		:	5 ms
//Memory	:	7.4 MB
#include<algorithm>
#include<vector>
#include<set>
class Solution{
	public:
	    int numIdenticalPairs(vector<int>& v){
		    set<int>s(v.begin(),v.end());
		    int sumf=0;
		    for(int x:s){
			    int n=count(v.begin(),v.end(),x);
			    if(n>=2) sumf+=(n*(n-1))/2;
		    }
		    return sumf;
	    }
};
