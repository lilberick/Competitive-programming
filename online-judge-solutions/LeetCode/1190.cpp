//https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.2 MB
class Solution{
public:
    string reverseParentheses(string s){
		stack<int> t;
		vector<pair<int,int>> v;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') t.push(i);
			else if(s[i]==')'){
				v.push_back(make_pair(t.top(),i));
				t.pop();
			}
		}
		for(auto i:v) reverse(begin(s)+i.first,begin(s)+i.second+1);
		s.erase(remove(begin(s),end(s),'('),end(s));
		s.erase(remove(begin(s),end(s),')'),end(s));
		return s;
    }
};
