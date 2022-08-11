//https://codeforces.com/problemset/problem/1709/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int t,a,b,c,x;
	cin>>t;
	while(t--){
		map<int,int> m;
		cin>>x>>a>>b>>c;
		m[1]=a;
		m[2]=b;
		m[3]=c;
		cout<<(m[m[x]]?"YES":"NO")<<"\n";
	}
	return 0;
}
