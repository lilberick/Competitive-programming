//https://codeforces.com/problemset/problem/1700/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	long long n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<(m*(m+1))/2+m*((n*(n+1))/2)-m<<endl;
	}
	return 0;
}
