//https://codeforces.com/problemset/problem/549/A
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	int n,m,r=0;cin>>n>>m;
	vector<vector<char>> v(n,vector<char>(m));
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>v[i][j];
	set<char> s={'f','a','c','e'};
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			set<char> t;
			for(int k=i;k<i+2;k++) for(int l=j;l<j+2;l++) t.insert(v[k][l]);
			if(s==t) r++;
		}
	}
	cout<<r<<endl;
	return 0;
}
