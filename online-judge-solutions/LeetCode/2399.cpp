//https://leetcode.com/problems/check-distances-between-same-letters
//Lang		:	C++
//Time		:	11 ms
//Memory	:	15 MB
class Solution{
public:
    bool checkDistances(string s,vector<int>& d){
		map<char,vector<int>> m;
		for(int i=0;i<s.size();i++) m[s[i]].push_back(i);
		set<char> se(begin(s),end(s));
		bool b=true;
		for(char c:se) if(d[c-'a']!=m[c][1]-m[c][0]-1) b=false;
		return b;
    }
};
