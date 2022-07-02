//https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence
//Lang		:	C++
//Time		:	9 ms
//Memory	:	9 MB
#include<vector>
class Solution{
	public:
	    bool canMakeArithmeticProgression(vector<int>& v){
		    sort(v.begin(),v.end());
		    int d=v[1]-v[0];
		    bool t=true;
		    for(int i=1;i<v.size() && t;i++){
			    if(v[i]-v[i-1]!=d) t=false;
		    }
		    return t;
	    }
};
