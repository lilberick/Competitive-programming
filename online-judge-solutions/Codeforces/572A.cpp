//https://codeforces.com/problemset/problem/572/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	800 KB
#include<iostream>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int na,nb,k,m;cin>>na>>nb>>k>>m;
	int a[na],b[nb];
	for(int i=0;i<na;i++){cin>>a[i];}
	for(int i=0;i<nb;i++){cin>>b[i];}
	cout<<((a[k-1]<b[nb-m])?"YES":"NO")<<endl;
	return 0;
}
