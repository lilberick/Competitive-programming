//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//Lang		:	C++
//Time		:	19 ms
//Memory	:	11.7 MB
class Solution{
public:
    string removeDuplicates(string s){
		vector<char> v(1,s[0]);
		for(int i=1;i<s.size();i++)
			if(!v.empty()) s[i]==v.back()?v.pop_back():v.push_back(s[i]);
			else v.push_back(s[i]);
		string t(begin(v),end(v));
		return t;
	}
};
