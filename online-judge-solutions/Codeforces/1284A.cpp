//https://codeforces.com/problemset/problem/1284/A
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m,a,q;
	cin>>n>>m;
	vector<string> s,t;
	string x;
	for(int i=0;i<n;i++){cin>>x;s.push_back(x);}
	for(int i=0;i<m;i++){cin>>x;t.push_back(x);}
	cin>>q;
	while(q--){
		cin>>a;
		cout<<s[((a%n)+(n-1))%n]+t[((a%m)+(m-1))%m]<<endl;
	}
	return 0;
}
