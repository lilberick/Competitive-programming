//https://codeforces.com/problemset/problem/598/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	long long n;
	while(t--){
		cin>>n;
		long long s=n*(n+1)/2,p=1;;
		while(p<=n){s-=2*p;p*=2;}
		cout<<s<<endl;
	}
	return 0;
}
