//https://codeforces.com/problemset/problem/745/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	string s,t;cin>>s;
	int n=s.size();
	set<string> se;
	for(int i=0;i<s.size();i++){
		t=s[n-1]+s.substr(0,n-1);
		swap(t,s);
		se.insert(s);
	}
	cout<<se.size();
	return 0;
}
