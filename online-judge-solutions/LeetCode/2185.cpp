//https://leetcode.com/problems/counting-words-with-a-given-prefix
//Lang		:	C++
//Time		:	9 ms
//Memory	:	10.4 MB
#include<vector>
using namespace std;
class Solution {
	public:
	    int prefixCount(vector<string>& words, string pref){
		    int n=0;
		    for(string x:words){
			    if(x.find(pref)==0) n++;
		    }
		    return n;
	    }
};
