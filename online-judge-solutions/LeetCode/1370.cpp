//https://leetcode.com/problems/increasing-decreasing-string
//Lang		:	C++
//Time		:	104 ms
//Memory	:	10.5 MB
#include<algorithm>
string norep(string s){
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	return s;
}
string restante(string s){
	string r=s;
	sort(r.begin(),r.end());
	r.erase(unique(r.begin(),r.end()),r.end());
	for(char x:r){
		int i=s.find(x);
		s.erase(i,1);
	}
	return s;
}
class Solution {
	public:
	    string sortString(string s){
		string o;
		int t=0;
		while(s.size()){
			string m=norep(s);
			if(t){reverse(m.begin(),m.end());}
			o+=m;
			s=restante(s);
			t=1-t;
		}
		return o;
	    }
};
