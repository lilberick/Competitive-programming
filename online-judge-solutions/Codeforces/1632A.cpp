//https://codeforces.com/problemset/problem/1632/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		string s;
		cin>>n>>s;
		cout<<((s=="1" || s=="0" || s=="10" || s=="01")?"YES":"NO")<<"\n";
	}
	return 0;
}
