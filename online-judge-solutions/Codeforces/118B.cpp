//https://codeforces.com/problemset/problem/118/B
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	map<int,string> m;
	m[0]="0";
	m[1]="0 1 0";
	m[2]="0 1 2 1 0";
	m[3]="0 1 2 3 2 1 0";
	m[4]="0 1 2 3 4 3 2 1 0";
	m[5]="0 1 2 3 4 5 4 3 2 1 0";
	m[6]="0 1 2 3 4 5 6 5 4 3 2 1 0";
	m[7]="0 1 2 3 4 5 6 7 6 5 4 3 2 1 0";
	m[8]="0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0";
	m[9]="0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0";
	while(cin>>n){
		for(int i=0;i<=n;i++){
			string s((n-i)*2,' ');
			cout<<s<<m[i]<<endl;
		}
		for(int i=n-1;i>=0;i--){
			string s((n-i)*2,' ');
			cout<<s<<m[i]<<endl;
		}
	}
	return 0;
}
