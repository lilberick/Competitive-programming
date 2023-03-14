//https://codeforces.com/problemset/problem/793/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	800 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	long long n,k;cin>>n>>k;
	long long a[n],minimo=1e9,s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		minimo=min(minimo,a[i]);
	}
	for(int i=0;i<n && s!=-1;i++){
		int d=a[i]-minimo;
		if(d%k==0) s+=d/k;
		else s=-1;
	}
	cout<<s<<endl;
	return 0;
}
