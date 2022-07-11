//https://codeforces.com/problemset/problem/1702/A
//Lang		:	GNU C++14
//Time		:	77 ms
//Memory	:	8 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string m;
		cin>>m;
		int n=m.size();
		int d=stoi(m)-pow(10,n-1);
		cout<<d<<endl;
	}
	return 0;
}
