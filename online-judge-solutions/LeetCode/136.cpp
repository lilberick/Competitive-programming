//https://leetcode.com/problems/single-number/
//Lang		:	C++
//Time		:	44 ms
//Memory	:	20.8 MB
#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
class Solution {
	public:
	    int singleNumber(vector<int>& nums) {
		    map<int,int>m;
		    for(int x:nums) m[x]++;
		    int r;
		    tr(m,i){
			    if((i->second)==1) r=(i->first);
		    }
		    return r;
	    }
};
