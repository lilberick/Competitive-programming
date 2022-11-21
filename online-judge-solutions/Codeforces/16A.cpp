//https://codeforces.com/problemset/problem/16/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,m;
	while(cin>>n>>m){
		vector<string> v(n);
		bool b=true;
		string w;
		for(int i=0;i<n;i++){
			cin>>v[i];
			string s=v[i];
			s.erase(unique(s.begin(),s.end()),s.end());
			if((s.size()>1) || (i>0 && v[i]==w)) b=false;
			w=v[i];
		}
		cout<<(b?"YES":"NO")<<"\n";
	}
	return 0;
}
