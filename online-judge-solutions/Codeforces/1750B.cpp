//https://codeforces.com/problemset/problem/1750/B
//Lang		:	GNU C++14
//Time		:	312 ms
//Memory	:	1800 KB
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		string s;
		cin>>n>>s;
		long long n0=count(begin(s),end(s),'0');
		long long n1=count(begin(s),end(s),'1');
		s="a"+s;
		vector<long long>v;
		for(int i=1;i<s.size();i++){
			if(s[i]!=s[i-1]) v.push_back(i-1);
		}
		v.push_back(n);
		long long d=0;
		for(int i=1;i<v.size();i++){
			d=max(d,v[i]-v[i-1]);
		}
		cout<<max(d*d,n0*n1)<<endl;
	}
	return 0;
}
