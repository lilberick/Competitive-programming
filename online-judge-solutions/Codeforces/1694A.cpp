//https://codeforces.com/problemset/problem/1694/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		while(a>0 || b>0){
			if(a>0){cout<<0;a--;}
			if(b>0){cout<<1;b--;}
		}cout<<endl;
	}
	return 0;
}
