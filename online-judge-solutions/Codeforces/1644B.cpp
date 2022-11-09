//https://codeforces.com/problemset/problem/1644/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
			for(int j=n;j>=1;j--) if(j!=i) cout<<j<<" ";
			cout<<endl;
		}
	}
	return 0;
}
