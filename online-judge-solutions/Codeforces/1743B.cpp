//https://codeforces.com/problemset/problem/1743/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		cout<<1<<" ";
		for(int i=n;i>=2;i--){
			cout<<i<<" ";
		}cout<<endl;
	}
	return 0;
}
