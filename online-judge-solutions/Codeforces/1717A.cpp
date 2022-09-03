//https://codeforces.com/problemset/problem/1717/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n+2*(n/2+n/3)<<endl;
	}
	return 0;
}
