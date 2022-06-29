//https://leetcode.com/problems/decompress-run-length-encoded-list
//Lang		:	C++
//Time		:	8 ms
//Memory	:	10.2 MB
#include<vector>
class Solution{
	public:
	    vector<int> decompressRLElist(vector<int>& v){
		    vector<int> w;
		    for(int i=0;i<v.size();i+=2){
			    w.insert(w.end(),v[i],v[i+1]);
		    }
		    return w;
	    }
};
