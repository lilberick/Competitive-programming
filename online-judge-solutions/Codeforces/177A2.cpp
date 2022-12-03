//https://codeforces.com/problemset/problem/177/A2#
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int main(){
	fastInp;
	int n;
	cin>>n;
	vector<vector<int>> v(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	int s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j || i==n/2 || j==n/2 || i+j==n-1) s+=v[i][j];
		}
	}
	cout<<s<<endl;
	return 0;
}
