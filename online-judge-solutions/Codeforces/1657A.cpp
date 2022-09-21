//https://codeforces.com/problemset/problem/1657/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(x==0 && y==0) cout<<"0\n";
		else if(sqrt(x*x+y*y)==floor(sqrt(x*x+y*y))) cout<<"1\n";
		else cout<<"2\n";
	}
	return 0;
}
