//https://codeforces.com/problemset/problem/177/A1
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
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
