//https://leetcode.com/problems/di-string-match
//Lang		:	C++
//Time		:	7 ms
//Memory	:	9 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    vector<int> diStringMatch(string s){
		    int nD=count(s.begin(),s.end(),'D'),sI=0,sD=0;
		    vector<int> v;
		    v.push_back(nD);
		    for(char x:s){
			    if(x=='I'){sI++;v.push_back(nD+sI);}
			    else{sD++;v.push_back(nD-sD);}
		    }
		    return v;
	    }
};
