//https://codeforces.com/problemset/problem/1750/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		cout<<(a[0]==1?"YES":"NO")<<"\n";
	}
	return 0;
}
