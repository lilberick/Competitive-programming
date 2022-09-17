//https://codeforces.com/problemset/problem/1681/B
//Lang		:	GNU C++14
//Time		:	108 ms
//Memory	:	1600 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		cin>>m;
		int b[m];
		long long s=0;
		for(int i=0;i<m;i++){cin>>b[i];s+=b[i];}
		cout<<a[s%n]<<endl;
	}
	return 0;
}
