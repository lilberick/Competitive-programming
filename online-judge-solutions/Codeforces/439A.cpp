//https://codeforces.com/problemset/problem/439/A/
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,d,x,s=0;cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>x;
		s+=x;
	}
	s+=(n-1)*10;
	cout<<(d>=s?(((d>=s)?d-s:0)/5+(n-1)*2):-1)<<endl;
	return 0;
}
