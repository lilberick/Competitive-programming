//https://codeforces.com/problemset/problem/796/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,k,r=101;cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=m-1;i<n;i++) if(a[i]<=k && a[i]>0){r=i-(m-1);break;}
	for(int i=m-1;i>=0;i--) if(a[i]<=k && a[i]>0){r=min(r,(m-1)-i);break;}
	cout<<r*10<<endl;
	return 0;
}
