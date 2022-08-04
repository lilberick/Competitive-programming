//https://codeforces.com/problemset/problem/1496/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s;cin>>s;
		if(k==0) cout<<"YES\n";
		else if(k==n/2.0) cout<<"NO\n";
		else{
			string a=s.substr(0,k);
			string b=s.substr(n-k,k);
			reverse(b.begin(),b.end());
			cout<<((a==b)?"YES":"NO")<<"\n";
		}
	}
	return 0;
}
