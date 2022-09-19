//https://codeforces.com/problemset/problem/1678/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> s;
		int n0=0;
		for(int i=0;i<n;i++){
			cin>>x;s.insert(x);
			if(x==0) n0++;
		}
		cout<<(n0>0?n-n0:(s.size()<n?n:n+1))<<"\n";
	}
	return 0;
}
