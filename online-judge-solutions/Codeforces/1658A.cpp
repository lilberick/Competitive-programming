//https://codeforces.com/problemset/problem/1658/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		int r=0;
		for(int i=0;i<n-1;i++){
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') r++;
			if(s[i]=='0' && s[i+1]=='0') r+=2;
		}
		cout<<r<<endl;
	}
	return 0;
}
