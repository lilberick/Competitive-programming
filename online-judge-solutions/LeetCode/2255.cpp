//https://leetcode.com/problems/count-prefixes-of-a-given-string
//Lang		:	C++
//Time		:	4 ms
//Memory	:	12 MB
class Solution{
public:
    int countPrefixes(vector<string>& w,string s){
		int n=0;
		for(string t:w) if(s.find(t)==0) n++;
		return n;
    }
};
