//https://codeforces.com/problemset/problem/1654/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){cin>>v[i];}
		sort(begin(v),end(v));
		cout<<v[n-1]+v[n-2]<<endl;
	}
	return 0;
}
