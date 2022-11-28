//https://codeforces.com/problemset/problem/49/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	map<char,bool> m;
	vector<char> v={'A','E','I','O','U','Y'};
	for(auto i:v){m[i]=true;}
	string s;
	while(getline(cin,s)){
		s.erase(remove(s.begin(),s.end(),' '),s.end());
		transform(begin(s),end(s),begin(s),::toupper);
		cout<<(m[s[s.size()-2]]?"YES":"NO")<<endl;
	}
	return 0;
}
