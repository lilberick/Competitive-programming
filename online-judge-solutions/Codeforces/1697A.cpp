//https://codeforces.com/problemset/problem/1697/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int v[n],s=0;
		for(int i=0;i<n;i++){cin>>v[i];s+=v[i];}
		cout<<(m>=s?0:s-m)<<"\n";
	}
	return 0;
}
