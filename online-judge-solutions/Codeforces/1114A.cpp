//https://codeforces.com/problemset/problem/1114/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	8 KB
#include<iostream>
using namespace std;
int main(){
	int x,y,z,a,b,c;
	while(cin>>x>>y>>z){
		cin>>a>>b>>c;
		if(a<x) cout<<"NO\n";
		else{
			if(a-x+b<y) cout<<"NO\n";
			else{
				if(a-x+b-y+c<z) cout<<"NO\n";
				else cout<<"YES\n";
			}
		}
	}
	return 0;
}
