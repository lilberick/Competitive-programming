//https://codeforces.com/problemset/problem/1725/A
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	long long n,m;
	while(cin>>n>>m){
		if(m==1) swap(n,m);
		cout<<n*(m-1)<<endl;
	}
	return 0;
}
