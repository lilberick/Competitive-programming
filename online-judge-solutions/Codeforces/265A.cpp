//https://codeforces.com/problemset/problem/265/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int j=0;
	for(int i=0;i<t.size();i++){
		if(t[i]==s[j]) j++;
		if(j==s.size()) break;
	}
	cout<<j+1<<endl;
	return 0;
}
