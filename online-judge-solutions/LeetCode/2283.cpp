//https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.7 MB
#include<algorithm>
class Solution{
	public:
	    bool digitCount(string s){
		    bool f=true;
		    for(int i=0;i<s.size() && f;i++){
			    int n=count(s.begin(),s.end(),char(i+48));
			    if(n!=s[i]-'0') f=false;
		    }
		    return f;
	    }
};
