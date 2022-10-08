//https://codeforces.com/problemset/problem/1629/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,k;
	for(cin>>t;t--;){
		cin>>n>>k;
		vector<int> a(n),b(n);
		for(auto &i:a){cin>>i;}
		for(auto &i:b){cin>>i;}
		vector<pair<int,int>> p;
		for(int i=0;i<n;i++){p.push_back(make_pair(a[i],b[i]));}
		sort(begin(p),end(p));
		int s=k;
		for(int i=0;i<n;i++){
			if(p[i].first<=s) s+=p[i].second;
			else break;
		}
		cout<<s<<endl;
	}
	return 0;
}
