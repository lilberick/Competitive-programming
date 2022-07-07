//https://codeforces.com/problemset/problem/1682/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	300 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		int d=0;
		char c;
		if(n%2!=0){d=1;c=s[n/2];}
		else{c=s[(n/2)-1];}
		for(int i=(n/2)-1;i>=0;i--){
			if(s[i]==c && s[n-1-i]==c) d+=2;
			else break;
		}
		cout<<d<<endl;
	}
	return 0;
}
