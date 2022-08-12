//https://codeforces.com/problemset/problem/1705/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		vector<int> h(2*n);
		for(int i=0;i<2*n;i++){cin>>h[i];}
		sort(h.begin(),h.end());
		bool b=true;
		for(int i=0;i<n;i++){
			if(h[i+n]-h[i]<x){b=false;break;}
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
