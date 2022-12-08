//https://codeforces.com/problemset/problem/248/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,a,b,a0=0,b0=0,a1=0,b1=0;
	cin>>n;
	while(cin>>a>>b){
		a==0?a0++:a1++;
		b==0?b0++:b1++;
	}
	cout<<min(a0,a1)+min(b0,b1)<<endl;
	return 0;
}
