//https://leetcode.com/problems/split-a-string-in-balanced-strings
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.2 MB
class Solution {
	public:
	    int balancedStringSplit(string s){
		    int sum=0,r=0;
		    for(char x:s){
			    x=='R' ? sum--:sum++;
			    if(sum==0) r++;
		    }
		    return r;
	    }
};
