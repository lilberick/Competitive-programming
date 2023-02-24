//https://codeforces.com/problemset/problem/765/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	string s;for(int i=0;i<n+1;i++) cin>>s;
	cout<<(n%2?"contest":"home")<<endl;
	return 0;
}
