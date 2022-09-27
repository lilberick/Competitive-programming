//https://codeforces.com/problemset/problem/1733/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,k,x;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long s=0;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>x;
			if(v[i%k]<x) swap(v[i%k],x);
		}
		for(int i=0;i<k;i++) s+=v[i];
		cout<<s<<endl;
	}
	return 0;
}
