//https://codeforces.com/problemset/problem/384/A
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	1000 KB
#include<iostream>
using namespace std;
int main(){
	int n,r=0;cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==j%2){a[i][j]='C';r++;}
			else a[i][j]='.';
		}
	}
	cout<<r<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}cout<<endl;
	}
	return 0;
}
