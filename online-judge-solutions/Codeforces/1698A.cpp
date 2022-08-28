//https://codeforces.com/problemset/problem/1698/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i==n-1) cout<<v[i]<<endl;
		}
	}
	return 0;
}
