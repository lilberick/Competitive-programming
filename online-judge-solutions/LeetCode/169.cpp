//https://leetcode.com/problems/majority-element
//Lang		:	C++
//Time		:	27 ms
//Memory	:	19.7 MB
#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin();i!=c.end();i++)
class Solution {
	public:
	    int majorityElement(vector<int>& nums) {
		    map<int,int> m;
		    for(int x:nums){m[x]++;}
		    int nmayor=0,valor;
		    tr(m,i){
			    if((i->second)>nmayor){
				    valor=(i->first);
				    nmayor=i->second;
			    }
		    }
		    return valor;
	    }
};
