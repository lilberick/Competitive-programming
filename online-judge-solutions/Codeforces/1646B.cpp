//https://codeforces.com/problemset/problem/1646/B
//Lang		:	GNU C++14
//Time		:	78 ms
//Memory	:	800 KB
#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		sort(a,a+n);
		long long b=0,r=0;
		int l1=0;
		int r1=(n-1)/2;
		int l2=(n+2)/2;
		int r2=(2*n-1)/2;
		b=accumulate(a+l1,a+r1+1,b);
		r=accumulate(a+l2,a+r2+1,r);
		cout<<((r>b)?"YES":"NO")<<"\n";
	}
	return 0;
}
