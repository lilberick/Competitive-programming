//https://codeforces.com/problemset/problem/770/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	string s;
	generate_n(back_inserter(s),k,[c='a'-1]()mutable{return ++c;});
	string r=s.substr(0,n%k);
	for(int i=0;i<n/k;i++) cout<<s;
	cout<<r<<endl;
	return 0;
}
