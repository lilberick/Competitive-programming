//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences
//Lang		:	C++
//Time		:	80 ms
//Memory	:	6.7 MB
#include<algorithm>
class Solution{
	public:
	    bool areOccurrencesEqual(string s){
		    int n=count(s.begin(),s.end(),s[0]);
		    int r=0;
		    for(char x:s){
			    if(n!=count(s.begin(),s.end(),x)) r++;
		    }
		    if(r>0) return 0;
		    return 1;
	    }
};
