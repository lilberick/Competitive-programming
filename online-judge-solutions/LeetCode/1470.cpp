//https://leetcode.com/problems/shuffle-the-array
//Lang		:	C++
//Time		:	7 ms
//Memory	:	10 MB
#include<vector>
class Solution{
	public:
	    vector<int> shuffle(vector<int>& v, int n){
		    vector<int> w;
		    vector<int> v1(v.begin(),v.begin()+n);
		    vector<int> v2(v.begin()+n,v.end());
		    for(int i=0;i<n;i++){
			    w.push_back(v1[i]);
			    w.push_back(v2[i]);
		    }
		    return w;
	    }
};
