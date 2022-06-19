//https://leetcode.com/problems/count-the-number-of-consistent-strings
//Lang		:	C++
//Time		:	109 ms
//Memory	:	30.1 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    int countConsistentStrings(string allowed, vector<string>& words){
		int r=0;
		for(string y:words){
			string x=y;
			sort(x.begin(),x.end());
			x.erase(unique(x.begin(),x.end()),x.end());
			int m=0;
			for(char w:x){
				if(allowed.find(w)<allowed.size()) m++;
				if(m==x.size()){r++;m=0;}
			}
		}
		return r;
	    }
};
