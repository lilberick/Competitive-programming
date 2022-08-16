//https://codeforces.com/problemset/problem/1699/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2!=0) cout<<"-1\n";
		else cout<<"0 "<<n/2<<" "<<n/2<<endl;
	}
	return 0;
}
