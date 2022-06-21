//https://codeforces.com/problemset/problem/1462/B
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s,o="2020";
		cin>>n>>s;
		if(s==o) cout<<"YES\n";
		else{
			int t=1;
			for(int i=0;i<n && t;i++){
				string r=s;
				if(o==r.erase(i,n-4)) t=0;
			}
			t==0? cout<<"YES\n":cout<<"NO\n";
		}
	}
	return 0;
}
