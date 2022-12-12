//https://codeforces.com/problemset/problem/294/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,x,y;
	while(cin>>n){
		int a[n+2];
		for(int i=1;i<=n;i++) cin>>a[i];
		cin>>m;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			a[x-1]+=y-1;
			a[x+1]+=a[x]-y;
			a[x]=0;
		}
		for(int i=1;i<=n;i++) cout<<a[i]<<endl;
	}
	return 0;
}
