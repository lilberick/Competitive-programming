//https://codeforces.com/problemset/problem/1719/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m ;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<((n+m)%2?"Burenka":"Tonya")<<endl;
	}
	return 0;
}
