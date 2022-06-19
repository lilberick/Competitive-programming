//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.2 MB
class Solution {
	public:
	    int maxDepth(string s){
		    int t=0,r=0;
		    for(char x:s){
			    if(x=='(') t++;
			    else if(x==')') t--;
			    r=max(r,t);
		    }
		    return r;
	    }
};
