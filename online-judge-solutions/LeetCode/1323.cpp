//https://leetcode.com/problems/maximum-69-number/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.9 MB
class Solution{
public:
    int maximum69Number(int n){
		string s=to_string(n);
		s[s.find('6')<s.size()?s.find('6'):0]='9';
		return stoi(s);
    }
};
