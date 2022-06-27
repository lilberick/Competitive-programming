//https://leetcode.com/problems/robot-return-to-origin
//Lang		:	C++
//Time		:	17 ms
//Memory	:	8.1 MB
#include<algorithm>
class Solution{
	public:
	    bool judgeCircle(string s){
		    int U=count(s.begin(),s.end(),'U');
		    int D=count(s.begin(),s.end(),'D');
		    int L=count(s.begin(),s.end(),'L');
		    int R=count(s.begin(),s.end(),'R');
		    if(U==D && L==R) return true;
		    return false;
	    }
};
