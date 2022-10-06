//https://codeforces.com/problemset/problem/1735/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,x,m;
	for(cin>>t;t--;){
		cin>>n;
		int r=0;
		for(int i=0;i<n;i++){
			cin>>x;
			i==0?m=x:r+=(x-1)/(2*m-1);
		}
		cout<<r<<endl;
	}
	return 0;
}
