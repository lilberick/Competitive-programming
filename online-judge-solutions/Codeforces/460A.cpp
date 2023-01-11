//https://codeforces.com/problemset/problem/460/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	cout<<n+(n-1)/(m-1)<<endl;
	return 0;
}
