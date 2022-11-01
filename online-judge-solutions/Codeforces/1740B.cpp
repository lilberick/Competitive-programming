//https://codeforces.com/problemset/problem/1740/B
//Lang		:	GNU C++14
//Time		:	124 ms
//Memory	:	3100 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		vector<pair<long long,long long>>v(n);
		long long s1=0,s2=0;
		for(int i=0;i<n;i++){
			cin>>v[i].first>>v[i].second;
			if(v[i].first>v[i].second) swap(v[i].first,v[i].second);
			s1+=v[i].first;
			s2=max(s2,v[i].second);
		}
		cout<<2*(s1+s2)<<endl;
	}
	return 0;
}
