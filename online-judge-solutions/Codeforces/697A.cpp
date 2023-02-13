//https://codeforces.com/problemset/problem/697/A
//Lang		:	GNU C++14
//Time		:	280 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,s,x;cin>>t>>s>>x;
	bool b=false;
	int r=t,i=1;
	if(r==x) b=true;
	while(r<x && !b){
		r=t+s*i;
		if(r==x || r+1==x) b=true;
		r++;i++;
	}
	cout<<(b?"YES":"NO")<<endl;
	return 0;
}
