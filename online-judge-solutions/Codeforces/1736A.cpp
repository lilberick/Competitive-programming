//https://codeforces.com/problemset/problem/1736/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n],b[n],c=0,a0=0,b0=0;
		for(int i=0;i<n;i++){cin>>a[i];if(a[i]==0) a0++;}
		for(int i=0;i<n;i++){cin>>b[i];if(b[i]==0) b0++;}
		for(int i=0;i<n;i++) if(a[i]!=b[i]){c++;}
		cout<<min(c,abs(a0-b0)+1)<<endl;
	}
	return 0;
}
