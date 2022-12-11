//https://codeforces.com/problemset/problem/302/A
//Lang		:	GNU C++14
//Time		:	171 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n,m,n1=0,n0=0,x,l,r;
	cin>>n>>m;
	for(int i=0;i<n;i++){cin>>x;x==1?n1++:n0++;}
	for(int i=0;i<m;i++){
		cin>>l>>r;
		cout<<(((r-l)%2==0 || (r-l+1)/2>min(n1,n0))?"0":"1")<<"\n";
	}
	return 0;
}
