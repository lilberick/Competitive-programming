//https://codeforces.com/problemset/problem/735/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		string s,w;cin>>s;
		int jmin=min(s.find('G'),s.find('T'));
		int jmax=max(s.find('G'),s.find('T'));
		for(int i=jmin;i<=jmax;i+=k) w+=s[i];
		cout<<(((w.find('G')<w.size()) && (w.find('T')<w.size())&& !(w.find('#')<w.size()))?"YES":"NO")<<"\n";
	}
	return 0;
}
