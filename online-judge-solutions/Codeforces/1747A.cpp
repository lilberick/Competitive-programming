//https://codeforces.com/problemset/problem/1747/A
//Lang		:	GNU C++14
//Time		:	124 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,a;
	for(cin>>t;t--;){
		cin>>n;
		long long s=0;
		while(n--){cin>>a;s+=a;}
		cout<<abs(s)<<endl;
	}
	return 0;
}
