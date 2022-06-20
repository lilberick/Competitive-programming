//https://leetcode.com/problems/remove-outermost-parentheses
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.8 MB
class Solution {
	public:
	    string removeOuterParentheses(string s){
		    int t=0;
		    string s2,r;
		    for(char x:s){
			    x=='(' ? t++:t--;
			    if(t==0){r.erase(r.begin()); s2+=r;r="";}
			    else r+=x;
		    }
		    return s2;
	    }
};
