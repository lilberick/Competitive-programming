//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses
//Lang		:	C++
//Time		:	24 ms
//Memory	:	10.2 MB
class Solution{
public:
    string minRemoveToMakeValid(string s){
		vector<pair<int,int>> v;
		stack<int> t;
		vector<int> e;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') t.push(i);
			else if(s[i]==')'){
				if(!t.empty()) t.pop();
				else s[i]='*';
			}
		}
		while(!t.empty()){
			s[t.top()]='*';
			t.pop();
		}
		s.erase(remove(begin(s),end(s),'*'),end(s));
		return s; 
    }
};
