//https://codeforces.com/problemset/problem/595/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	100 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,r=0,s=0,x;cin>>n>>m;
	int v[n*2*m];
	for(int i=0;i<n*2*m;i++){
		cin>>v[i];
		r+=v[i];
		if(i%2!=0 && r>0){s++;r=0;}
	}
	cout<<s<<endl;
	return 0;
}
