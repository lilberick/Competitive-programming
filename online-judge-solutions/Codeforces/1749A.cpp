//https://codeforces.com/problemset/problem/1749/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m,x,y;
	for(cin>>t;t--;){
		cin>>n>>m;
		for(int i=0;i<m;i++){cin>>x>>y;}
		cout<<(n==m?"NO":"YES")<<"\n";
	}
	return 0;
}
