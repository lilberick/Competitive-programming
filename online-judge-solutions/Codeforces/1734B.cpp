//https://codeforces.com/problemset/problem/1734/B
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		for(int i=0;i<n;i++){
			if(i==0) cout<<"1\n";
			else{
				cout<<"1 ";
				for(int j=0;j<i-1;j++) cout<<"0 ";
				cout<<"1\n";
			}
		}
	}
	return 0;
}
