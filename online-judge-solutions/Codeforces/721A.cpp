//https://codeforces.com/problemset/problem/721/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;cin>>n;
	string s;cin>>s;
	s="W"+s+"W";
	vector<int> v;
	string t;
	for(int i=0;i<s.size();i++){
		if(s[i]=='B') t+=s[i];
		else{
			if(t.size()>0) v.push_back(t.size());
			t="";
		}
	}
	cout<<v.size()<<endl;
	for(int i:v) cout<<i<<" ";
	return 0;
}
