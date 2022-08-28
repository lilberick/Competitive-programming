//https://codeforces.com/problemset/problem/1715/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<(n==1 && m==1?0:(n-1)+(m-1)+min(n-1,m-1)+1)<<endl;
	}
	return 0;
}
