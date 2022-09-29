//https://codeforces.com/problemset/problem/1730/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,c;
	for(cin>>t;t--;){
		cin>>n>>c;
		vector<int> v(n);
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>v[i];
			s.insert(v[i]);
		}
		int r=0;
		for(int k:s){
			int x=count(begin(v),end(v),k);
			r+=min(c,x);
		}
		cout<<r<<endl;
	}
	return 0;
}
