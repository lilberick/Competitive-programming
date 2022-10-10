//https://codeforces.com/problemset/problem/1327/A
//Lang		:	GNU C++14
//Time		:	592 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	long long t,n,k;
	for(cin>>t;t--;){
		cin>>n>>k;
		if(n<k*k) cout<<"NO\n";
		else if(n==k*k) cout<<"YES\n";
		else cout<<((n+k)%2==0?"YES":"NO")<<"\n";
	}
	return 0;
}
