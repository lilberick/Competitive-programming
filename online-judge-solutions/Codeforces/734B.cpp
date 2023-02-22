//https://codeforces.com/problemset/problem/734/B
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int k2,k3,k5,k6;cin>>k2>>k3>>k5>>k6;
	int i256=min(min(k2,k5),min(k5,k6));
	cout<<i256*256+min(k2-i256,k3)*32<<endl;
	return 0;
}
