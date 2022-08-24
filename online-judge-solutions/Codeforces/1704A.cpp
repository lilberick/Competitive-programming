//https://codeforces.com/problemset/problem/1704/A
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	100 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		string a,b;
		cin>>n>>m;
		cin>>a>>b;
		string c=a.substr(0,n-m+1);
		cout<<(c.find(b[0])<=c.size() && b.substr(1,b.size()-1)==a.substr(n-m+1,m-1)?"YES":"NO")<<"\n";
	}
	return 0;
}
