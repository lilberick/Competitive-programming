//https://codeforces.com/problemset/problem/611/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	string a,s;cin>>a>>s;
	if(s=="month") cout<<(n<30?12:(n==30?11:7))<<endl;
	else cout<<((n==5 || n==6)?53:52)<<endl;
	return 0;
}
