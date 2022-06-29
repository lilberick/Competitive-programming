//https://leetcode.com/problems/decode-xored-array
//Lang		:	C++
//Time		:	42 ms
//Memory	:	25.9 MB
#include<vector>
class Solution{
	public:
	    vector<int> decode(vector<int>& v, int first){
		    vector<int> w(1,first);
		    for(int x:v) w.push_back(w.back()^x);
		    return w;
	    }
};
