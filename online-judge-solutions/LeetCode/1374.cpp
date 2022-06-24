//https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.7 MB
class Solution {
	public:
	    string generateTheString(int n){
		string s(n-1,'a');
		if(n%2==0) return s+'b';
		return s+'a';
	    }
};
