//https://codeforces.com/problemset/problem/415/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,m,x;
	while(cin>>n>>m){
		int a[n]; memset(a,-1,sizeof(a));
		for(int i=0;i<m;i++){
			cin>>x;
			for(int j=x-1;j<n;j++) if(a[j]==-1){a[j]=x;}
		}
		for(auto i:a) cout<<i<<" "; cout<<endl;
	}
	return 0;
}
