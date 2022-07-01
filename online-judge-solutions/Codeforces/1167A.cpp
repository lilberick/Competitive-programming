//https://codeforces.com/problemset/problem/1167/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		int i=s.find('8');
		(i>=0 && n-i>=11) ? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
