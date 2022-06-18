//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences
//Lang		:	C++
//Time		:	21 ms
//Memory	:	10.2 MB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    int mostWordsFound(vector<string>& sentences) {
		    int r=0;
		    for(string x:sentences){
			    int n=count(x.begin(),x.end(),' ');
			    r=max(r,n);
		    }
		    return r+1;
	    }
};
