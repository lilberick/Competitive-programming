//https://codeforces.com/problemset/problem/1674/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,x,y;
	for(cin>>t;t--;){
		cin>>x>>y;
		if(y%x==0){cout<<"1 "<<y/x<<"\n";}
		else{cout<<"0 0\n";}
	}
	return 0;
}
