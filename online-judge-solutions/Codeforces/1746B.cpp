//https://codeforces.com/problemset/problem/1746/B
//Lang		:	GNU C++14
//Time		:	78 ms
//Memory	:	800 KB
#include<iostream>
#include<algorithm>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n],b[n],c=0;
		for(int i=0;i<n;i++){cin>>a[i];}
		copy(a,a+n,b);
		sort(a,a+n);
		for(int i=0;i<n;i++) if(a[i]!=b[i]){c++;}
		cout<<c/2<<endl;
	}
	return 0;
}
