//https://leetcode.com/problems/maximum-number-of-words-you-can-type
//Lang		:	C++
//Time		:	7 ms
//Memory	:	7.6 MB
vector<string> separar(string s,char c){
	istringstream f(s);
	vector<string> v;
	string r;
	while(getline(f,r,c)) v.push_back(r);
	return v;
}
class Solution{
public:
    int canBeTypedWords(string t, string b){
		vector<string> v=separar(t,' ');
		int suma=0;
		for(string s:v){
			bool t=true;
			for(char c:b) if(s.find(c)<s.size()){t=false;break;}
			suma+=t;
		}
		return suma;
    }
};
