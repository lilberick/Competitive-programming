//https://codeforces.com/problemset/problem/676/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,x,a=-1,b;cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==1 || x==n) a==-1?a=n-i-1:b=i;
	}
	cout<<max(a,b)<<endl;
	return 0;
}
