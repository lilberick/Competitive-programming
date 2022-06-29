//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number
//Lang		:	C++
//Time		:	33 ms
//Memory	:	10.1 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    vector<int> smallerNumbersThanCurrent(vector<int>& v){
		vector<int> w;
		for(int x:v){
			int n=count_if(v.begin(),v.end(),[x](int i){return i<x;});
			w.push_back(n);
		}
		return w;
	    }
};
