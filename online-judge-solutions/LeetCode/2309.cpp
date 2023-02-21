//https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case
//Lang		:	C++
//Time		:	6 ms
//Memory	:	6.8 MB
class Solution{
public:
	string greatestLetter(string s){
		set<char> r;
		for(char c:s){
			char a=tolower(c);
			char b=toupper(c);
			if(s.find(a)<s.size() && s.find(b)<s.size()) r.insert(b);
		}
		return r.size()?string(1,toupper(*r.rbegin())):"";
	}
};
