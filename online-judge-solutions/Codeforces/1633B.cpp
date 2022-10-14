//https://codeforces.com/problemset/problem/1633/B
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	500 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		string s;cin>>s;
		int n0=count(begin(s),end(s),'0');
		int n1=count(begin(s),end(s),'1');
		cout<<min(n0,n1)-(n0==n1)<<endl;
	}
	return 0;
}
