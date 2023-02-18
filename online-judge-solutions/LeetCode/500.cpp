//https://leetcode.com/problems/keyboard-row
//Lang		:	C++
//Time		:	0 ms
//Memory	:	7.1 MB
bool comprobar(string s){
	string a="qwertyuiop",b="asdfghjkl",c="zxcvbnm";
	map<char,int> m;
	map<int,int> n;
	for(char i:a) m[i]=1;
	for(char i:b) m[i]=2;
	for(char i:c) m[i]=3;
	for(char i:s) n[m[i]]++;
	return n.size()==1;
}
class Solution{
public:
    vector<string> findWords(vector<string>& v){
		vector<string> w;
		for(string s:v){
			string t=s;
			transform(begin(s),end(s),begin(s),::tolower);
			s.erase(unique(begin(s),end(s)),end(s));
			if(comprobar(s)) w.push_back(t);
		}
		return w;
    }
};
