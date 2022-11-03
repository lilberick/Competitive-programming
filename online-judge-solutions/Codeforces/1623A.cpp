//https://codeforces.com/problemset/problem/1623/A
//Lang		:	GNU C++14
//Time		:	92 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m,rb,cb,rd,cd;
	for(cin>>t;t--;){
		cin>>n>>m>>rb>>cb>>rd>>cd;
		cout<<min(rb<=rd?rd-rb:2*n-rd-rb,cb<=cd?cd-cb:2*m-cd-cb)<<"\n";
	}
	return 0;
}
