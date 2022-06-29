//https://leetcode.com/problems/decode-xored-array
//Lang		:	C++
//Time		:	1633 ms
//Memory	:	26 MB
#include<vector>
class Solution{
	public:
	    vector<int> decode(vector<int>& v, int first){
		    vector<int> w(1,first);
		    int s=first;
		    for(int x:v){
			int t=0;
			while((s^t)!=x){t++;}
			s=t;
			w.push_back(t);
		    }
		    return w;
	    }
};
