//https://codeforces.com/problemset/problem/1657/B
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	800 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,B,x,y;
	for(cin>>t;t--;){
		cin>>n>>B>>x>>y;
		int a[n+1];a[0]=0;
		long long s=0;
		for(int i=1;i<=n;i++){
			a[i]=(a[i-1]+x<=B?a[i-1]+x:a[i-1]-y);
			s+=a[i];
		}
		cout<<s<<endl;
	}
	return 0;
}
