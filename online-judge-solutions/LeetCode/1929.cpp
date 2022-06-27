//https://leetcode.com/problems/concatenation-of-array
//Lang		:	C++
//Time		:	19 ms
//Memory	:	12.7 MB
#include<vector>
class Solution{
	public:
	    vector<int> getConcatenation(vector<int>& v){
		    vector<int>w(v);
		    w.insert(w.end(),v.begin(),v.end());
		    return w;
	    }
};
