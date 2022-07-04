//https://codeforces.com/problemset/problem/1139/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	300 KB
#include<iostream>
using namespace std;
int main(){
	int n,r=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if((s[i]-'0')%2==0) r+=i+1;
	}
	cout<<r<<endl;
	return 0;
}
