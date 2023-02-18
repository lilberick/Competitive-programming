//https://codeforces.com/problemset/problem/710/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	char c;cin>>c;
	int j;cin>>j;
	int i=c-'a'+1;
	int r;
	if((i==j && (i==1 || i==8)) || (abs(i-j)==7)) r=3;
	else if(i==1 || i==8 || j==1 || j==8) r=5;
	else r=8;
	cout<<r<<endl;
	return 0;
}
