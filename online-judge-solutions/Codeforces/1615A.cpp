//https://codeforces.com/problemset/problem/1615/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,a;
	for(cin>>t;t--;){
		cin>>n;
		int s=0;
		for(int i=0;i<n;i++){cin>>a;s+=a;}
		cout<<(s%n==0?0:1)<<"\n";
	}
	return 0;
}
