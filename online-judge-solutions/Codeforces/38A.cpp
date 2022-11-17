//https://codeforces.com/problemset/problem/38/A
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,a,b;
	while(cin>>n){
		int d[n];
		for(int i=0;i<n-1;i++){cin>>d[i];}
		cin>>a>>b;
		int s=0;
		for(int i=a-1;i<b-1;i++) s+=d[i];
		cout<<s<<endl;
	}
	return 0;
}
