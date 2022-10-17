//https://codeforces.com/problemset/problem/1742/D
//Lang		:	GNU C++14
//Time		:	514 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n,x;
	for(cin>>t;t--;){
		cin>>n;
		int r=-1;
		int a[1001]={0};
		for(int i=1;i<=n;i++){cin>>x;a[x]=i;}
		for(int i=1;i<1001;i++){
			for(int j=1;j<1001;j++){
				if(a[i] && a[j] && __gcd(i,j)==1) r=max(r,a[i]+a[j]);
			}
		}
		cout<<r<<endl;
	}
	return 0;
}

