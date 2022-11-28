//https://codeforces.com/problemset/problem/104/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if((n>=11 && n<=19) || (n==21)) cout<<4<<endl;
		else if(n==20) cout<<15<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
