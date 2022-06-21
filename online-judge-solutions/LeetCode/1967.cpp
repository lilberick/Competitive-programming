//https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word
//Lang		:	C++
//Time		:	10 ms
//Memory	:	8.9 MB
#include<vector>
using namespace std;
class Solution {
	public:
	    int numOfStrings(vector<string>& patterns, string word){
		int r=0;
		for(string x:patterns){
			if(word.find(x)<word.size()) r++;
		}
		return r;
	    }
};
