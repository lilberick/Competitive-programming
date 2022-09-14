//https://codeforces.com/problemset/problem/1680/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,l1,r1,l2,r2;
	cin>>t;
	while(t--){
		cin>>l1>>r1>>l2>>r2;
		cout<<(max(l1,l2)<=min(r1,r2)?max(l1,l2):l1+l2)<<"\n";
	}
	return 0;
}
