//https:codeforces.com/problemset/problem/474/A/
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	char c;cin>>c;
	string s,r;cin>>s;
	string k="qwertyuiopasdfghjkl;zxcvbnm,./";
	map<char,int> m;
	for(int i=0;i<k.size();i++) m[k[i]]=i;
	for(int x:s) cout<<(c=='R'?k[m[x]-1]:k[m[x]+1]);cout<<endl;
	return 0;
}
