//https://codeforces.com/problemset/problem/1671/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;cin>>s;
		if(s.size()==1 || (s.find("aba")<s.size()) || (s.find("bab")<s.size()) || s.substr(0,2)=="ab" || s.substr(0,2)=="ba" || s.substr(s.size()-2,2)=="ab" || s.substr(s.size()-2,2)=="ba") cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
