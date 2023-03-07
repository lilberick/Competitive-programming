//https://codeforces.com/problemset/problem/764/B
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	800 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n/2;i++) if(i%2==0) swap(a[i],a[n-i-1]);
	for(int i:a) cout<<i<<" ";cout<<endl;
	return 0;
}
