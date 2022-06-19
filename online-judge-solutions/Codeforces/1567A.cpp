//https://codeforces.com/problemset/problem/1567/A
//Lang		:	GNU C++14
//Time		:	93 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='D') s[i]='U';
			else if(s[i]=='U') s[i]='D';
		}
		cout<<s<<endl;
	}
	return 0;
}
