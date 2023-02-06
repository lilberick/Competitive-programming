//https://codeforces.com/problemset/problem/669/A
//Lang		:	GNU C++14
//Time		:	1372 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,s=0,b=1,r=0;cin>>n;
	while(s<=n){
		b=1-b;
		s+=b?2:1;
		if(s<=n) r++;
	}
	cout<<r<<endl;
	return 0;
}
