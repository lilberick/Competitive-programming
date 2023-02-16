//https://codeforces.com/problemset/problem/716/A
//Lang		:	GNU C++14
//Time		:	202 ms
//Memory	:	400 KB
#include<iostream>
using namespace std;
int main(){
	int n,c;cin>>n>>c;
	int v[n];
	for(int i=0;i<n;i++) cin>>v[i];
	int w=1;
	for(int i=1;i<n;i++) v[i]-v[i-1]<=c?w++:w=1;
	cout<<w<<endl;
	return 0;
}
