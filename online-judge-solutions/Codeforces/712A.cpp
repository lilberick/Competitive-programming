//https://codeforces.com/problemset/problem/712/A
//Lang		:	GNU C++14
//Time		:	218 ms
//Memory	:	400 KB
#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n+1]={0};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n+1;i++) cout<<a[i]+a[i-1]<<" ";
	return 0;
}
