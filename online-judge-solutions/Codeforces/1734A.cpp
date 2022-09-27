//https://codeforces.com/problemset/problem/1734/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}
		sort(a,a+n);
		int r=1000000000;
		for(int i=0;i<n-2;i++){
			r=min(r,a[i+2]-a[i]);
		}
		cout<<r<<endl;
	}
	return 0;
}
