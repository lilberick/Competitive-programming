//https://codeforces.com/problemset/problem/672/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	252 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,n1,n2;
	while(cin>>n){
		string s;cin>>s;
		n1=s.size();
		sort(s.begin(),s.end());
		s.erase(unique(s.begin(),s.end()),s.end());
		n2=s.size();
		if(n1-n2>=26 || n1>26) cout<<"-1\n";
		else cout<<n1-n2<<"\n";
	}
	return 0;
}
