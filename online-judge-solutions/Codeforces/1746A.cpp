//https://codeforces.com/problemset/problem/1746/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,k;
	for(cin>>t;t--;){
		cin>>n>>k;
		int a[n];
		bool b=false;
		for(int i=0;i<n;i++){cin>>a[i];if(a[i]==1) b=true;}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
